#include <simplecpp>

main_program {
	int fn1 = 0;
	int fn2 = 1;
	int n = 0, temp = 0;
	cin >> n;
	
	if (n >= 1)
		cout << fn1 << " ";
	if (n >=2 )
		cout << fn2 << " ";
	if (n >= 3)
		repeat(n - 2) {
			temp = fn2;
			fn2 = temp + fn1;
			fn1 = temp;
			cout << fn2 << " ";
		}

	cout << endl;
}
