#include <simplecpp>

main_program {
	int n, n_copy, sum = 0;
	cin >> n;
	n_copy = n;

	while(n > 0) {
		int dig = n % 10;
		sum += dig;
		n = (n - dig) / 10;
	}
	
	if(n_copy % sum == 0)
		cout << "YES";
	else
		cout << "NO";
	cout << endl;
}
