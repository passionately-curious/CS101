#include <simplecpp>

main_program {
	int n, pow_p = 1;
	cin >> n;
	
	while (pow_p <= n)
		pow_p *= 2;
	pow_p /= 2;
	
	while (pow_p >= 1) {
		if (n >= pow_p) {
			cout << 1;
			n -= pow_p;
		}
		else
			cout << 0;
		pow_p /= 2;
	}

	cout << endl;
}
