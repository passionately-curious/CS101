#include <simplecpp>

main_program {
	int n, no_digits, ten_pow;
	no_digits = 0;
	ten_pow = 1;
	cin >> n;
	int square = n * n;
	
	while(square / ten_pow > 0) {
		no_digits++;
		ten_pow *= 10;
	}
	
	for(int i = 0, mid = no_digits / 2; i < mid; i++)
		ten_pow /= 10;
	
	int square_half = square % ten_pow;

	if(square / ten_pow + square_half == n)
		cout << 1;
	else
		cout << 0;
	cout << endl;
}
