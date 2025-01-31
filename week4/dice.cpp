#include <simplecpp>

main_program {
	int n, one, two, three, four, five, six;
	one = two = three = four = five = six = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int dice = rand() % 6 + 1;
		if(dice == 1)
			one++;
		else if(dice == 2)
			two++;
		else if(dice == 3)
			three++;
		else if(dice == 4)
			four++;
		else if(dice == 5)
			five++;
		else
			six++;
	}

	cout << "1: " << one << endl;
	cout << "2: " << two << endl;
	cout << "3: " << three << endl;
	cout << "4: " << four << endl;
	cout << "5: " << five << endl;
	cout << "6: " << six << endl;
}
