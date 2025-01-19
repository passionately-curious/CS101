#include <simplecpp>

main_program {
	int n = 0;
	int i = 1,j = 1;
	cin >> n;

	repeat(n) {
		repeat(i) {
			cout << j;
			j++;
		}
		cout << endl;
		j = 1;
		i++;
	}
}
