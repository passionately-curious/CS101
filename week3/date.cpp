#include <simplecpp>

main_program {
	int date, year, month, feb_days;
	cin >> year >> date;
	month = 1;
	int days = 31;
	bool is31 = true;
	
	if (year % 100 == 0)
		feb_days = (year % 400 == 0) ? 29 : 28;
	else
		feb_days = (year % 4 == 0) ? 29 : 28;

	while (date > days) {
		if (month == 1) {
			date -= days;
			days = feb_days;
		}
		else if (month == 2) {
			date -= days;
			days = 31;
		}
		else {
			date -= days;
			is31 = (month != 7) ? !is31 : is31;
			days = is31 ? 31 : 30;
		}
		month++;
	}

	cout << date << "/" << month << "/" << year << endl;
}
