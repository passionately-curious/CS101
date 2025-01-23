#include <simplecpp>

main_program {
    int n, m;
    cin >> n >> m;

    int max, lcm, min;
    max = lcm = (n > m) ? n : m;
    min = (n < m) ? n : m;
    if (n == 0 || m == 0)
        cout << 0;
    else
        while(lcm % min != 0)
            lcm += max;
    
    cout << lcm << endl;
}