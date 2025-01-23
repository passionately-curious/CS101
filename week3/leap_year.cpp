#include <simplecpp>

main_program {
    int year;
    cin >> year;
    
    if (year % 400 == 0)
        cout << "Century Leap Year";
    else if (year % 100 != 0 && year % 4 == 0)
        cout << "Leap Year";
    else
        cout << "Not a Leap Year";
}