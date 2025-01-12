//calculating ln_2 using ln(1+x) expansion

#include <simplecpp>

main_program {
	double i    = 1;
	double sum  = 0;

	repeat(100000) {
		//taking two terms of the expansion
		//in each iteration
		sum += (1 / i) - (1 / (i + 1)) ;

		i += 2;
	}

	cout << "ln(2) = " << sum << endl;
}
