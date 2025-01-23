#include <simplecpp>

main_program {
	int n;
	cin >> n;

	bool is_star = true;
	char ch = '*';

	for(int i = 0; i < n; i++) {
		repeat(n - i - 1)
			cout << ' ';
		repeat(2 * i + 1) {
			cout << ch;
			is_star = !is_star;
			ch = is_star ? '*' : '+';
		}

		is_star = true;
		ch = '*';
		cout << endl;
	}

	for(int i = 0; i < n / 2; i++) {
		repeat(n - 2)
			cout << ' ';
		repeat(3)
			cout << ch;
		cout << endl;
	}
}
