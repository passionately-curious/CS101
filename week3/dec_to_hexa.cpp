#include <simplecpp>

main_program {
    int n, pow_p;
    char ch;
    pow_p = 1;
    cin >> n;

    while (pow_p <= n) {
        pow_p *= 16;
    }
    pow_p /= 16;

    while (pow_p >= 1) {
        if (n >= pow_p) {
            if (n / pow_p >= 10) {
                ch = 'A' + (n / pow_p) % 10;
                cout << ch;
            }
            else
                cout << n / pow_p;
            n %= pow_p;
        }
        else
            cout << 0;

        pow_p /= 16;
    }
    cout << endl;
}
