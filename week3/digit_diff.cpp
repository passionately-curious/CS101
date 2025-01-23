#include <simplecpp>

main_program {
	int n, min, max;
	int no_digits = 0;
	int ten_pow = 1;
	cin >> n;

	while(n / ten_pow != 0) {
		no_digits++;
		ten_pow *= 10;
	}
	ten_pow /= 10;
	int dig = n / ten_pow;
	min = max = dig;

	for (int i = 0; i < no_digits; i++) { 
		dig = n / ten_pow;
		min = (dig < min) ? dig : min;
		max = (dig > max) ? dig : max;
		
		n -= ten_pow * dig;
		ten_pow /= 10;
	}
	cout << max - min << endl;
}
