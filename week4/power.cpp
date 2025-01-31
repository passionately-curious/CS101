#include <simplecpp>

main_program {
	unsigned int a, p, res = 1;
	cin >> a >> p;

	while(p > 0) {
		res *= (p % 2 != 0 ? a : 1);
		a *= a;
		p /= 2;
	}

	cout << res << endl;
}
