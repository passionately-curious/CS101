#include <simplecpp>
#include <iomanip>
using namespace std;

main_program {
	double n, sqrt, lower, upper;
	cin >> n;
	lower = 0;
	upper = n;

	sqrt = (upper + lower) / 2;
	
	double epsilon = 1E-6;
	while(upper - lower > epsilon) {
		if(sqrt * sqrt > n)
			upper = sqrt;
		else if(sqrt * sqrt < n)
			lower = sqrt;
		else
			break;
		sqrt = (upper + lower) / 2;
	}
	
	cout << fixed << setprecision(6) << sqrt << endl;
}
