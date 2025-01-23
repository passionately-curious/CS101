#include <simplecpp>

main_program {
    int n, m;
    cin >> n >> m;

    if (m > n) {
        int temp = n;
        n = m;
        m = temp;
    }

    while(m != 0) {
        int temp = m;
        m = n % m;
        n = temp;
    }

    cout << n << endl;
}