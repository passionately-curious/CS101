#include <simplecpp>

main_program {
	int n, min, max;
	cin >> n;

	int dig = n % 10;
	min = max = dig;

	while(n > 0) { 
		dig = n % 10;
		min = (dig < min) ? dig : min;
		max = (dig > max) ? dig : max;
		n = (n - dig) / 10;
	}

	cout << max - min << endl;
}
