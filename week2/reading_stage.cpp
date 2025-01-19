#include <simplecpp>

main_program {
    int age = 0;
    cin >> age;

    if (age < 2)
        cout << "Invalid";
    else if (age >= 2 && age < 4)
        cout << "Pre-reader";
    else if(age >=4 && age < 6)
        cout << "Beginning reader";
    else if(age >= 6 && age < 8)
        cout << "Intermediate reader";
    else
        cout << "Advanced reader";

    cout << endl;
}