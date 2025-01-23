#include <simplecpp>

main_program {
	int n, m, gcd, i;
	gcd = i = 1;
	cin >> n >> m;
	
	if (m == 0 || n == 0)
		gcd = (m == 0) ? n : m;
	else {
		int min = (m < n) ? m : n;
		while (i <= min) {
			gcd = (n % i == 0 && m % i ==0) ? i : gcd;
			i++;
		}
	}

	cout << gcd << endl;
}