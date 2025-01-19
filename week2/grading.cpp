#include <simplecpp>

main_program {
	int score;
	cin >> score;

	if (score >= 90)
		cout << 'A';
	else if (score >= 80)
		cout << 'B';
	else if (score >= 70)
		cout << 'C';
	else if (score >= 60)
		cout << 'D';
	else if (score >= 50)
		cout << 'E';
	else
		cout << 'F';
	
	cout << endl;
}
