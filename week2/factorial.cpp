#include <simplecpp>

main_program {
    int fact = 1;
    int i = 1, n;
    cin >> n;

    repeat(n){
        fact *= i;
        i++;
    }

    cout << fact << endl;
}