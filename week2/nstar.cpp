#include <simplecpp>

main_program {
    int len = 50, n;
    //considering 30 as angle at the star tip
    int ang = (180 - 30) / 2;
    cin >> n;

    turtleSim();
    repeat(n) { 
        forward(len);
        right(2 * ang);
        forward(len);
        left(2 * ang - 360.0/n);
    }

    hide();
    getClick();
}