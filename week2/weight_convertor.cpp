#include <simplecpp>
#include <iomanip>

main_program {
	float kg, lb;
	cin >> kg;

	lb = kg * 2.20;
	
	cout << std::fixed << std::setprecision(2) << lb << endl;
}
