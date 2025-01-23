#include <simplecpp>

main_program {
    int n;
    cin >> n;

    bool is_plus = false;

    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n - 1)
            for (int j = 0; j < n; j++)
                cout << '*' << ' ';
        else {
            is_plus = (i % 2 == 0) ? true : false;
            for (int j = 0; j < n; j++) {
                if (j == 0 || j == n - 1)
                    cout << '*';
                else {
                    if (is_plus)
                        cout << '+';
                    else
                        cout << '-';
                    is_plus = !is_plus;
                }
                cout << ' ';
            }
        }
        cout <<endl;
    }
}