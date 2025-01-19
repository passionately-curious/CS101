#include <simplecpp>

main_program {
	turtleSim();
	int n = 6;
	int len = 50;

	repeat(n) {
		repeat(5) {
			forward(5);
			penUp();
			forward(5);
			penDown();
		}
		left(360.0 / n);

		repeat(n - 1) {
			forward(len);
			left(360.0 / n);
		}

		penUp();
		forward(len);
		penDown();
		right(360.0 / n);
	}

	hide();
	getClick();
}

