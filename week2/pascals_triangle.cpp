#include <simplecpp>

main_program {
    int n = 1;
    int i = 1;
    cin >> n;

    repeat(n) {
        repeat(n - i)
            cout << "_";
        repeat(2 * i -1)
            cout << "*";
        repeat(n - i)
            cout << "_";

        i++;
        cout << endl;
    }
}