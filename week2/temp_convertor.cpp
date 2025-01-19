#include <simplecpp>
#include <iomanip>

main_program {
    float cel, fah = 0;
    cin >> cel;
    fah = (9.0 / 5.0) * cel + 32;

    cout << std::fixed  << std::setprecision(2) << fah << endl;
}