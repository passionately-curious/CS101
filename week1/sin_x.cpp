//calculating sin(x) value using Taylor series expansion

#include <simplecpp>

main_program{
	int deg = 0;
	
	cout << "Enter x(in degrees): ";
	cin >> deg;
	
	double x = deg % 360;

	//shifting x to avoid overflow
	if (x > 180)
		x -= 360;
	//converting x to radians
	x *= (PI / 180);//PI is included with simplecpp

	double x_pow = x;
	double sin_x = 0;
	double fact  = 1;
	int    i     = 2;

	repeat(100) {
		sin_x += x_pow / fact;
		
		x_pow *= -1 * x * x;
		fact *= i * (i + 1);
		i += 2;
	}

	cout << "sin(x) = " << sin_x << endl;
}
