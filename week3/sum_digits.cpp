#include <simplecpp>

main_program {
    int n, sum, dig;
    dig = sum = 0;
    int ten_pow = 1;
    cin >> n;
    n = (n < 0) ? -1 * n : n;

    while (n / ten_pow != 0) {
        ten_pow *= 10;
        dig = (n - (n / ten_pow) * ten_pow) / (ten_pow / 10);
        sum += dig;
        n = (n - dig);
    }
    cout << sum << endl;
}