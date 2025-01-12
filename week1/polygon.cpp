#include <simplecpp>

main_program {
	turtleSim();
	
	double no_sides = 0;

	cout << "Enter the number of sides: ";
	cin >> no_sides;

	repeat(no_sides) {
		forward(400 / no_sides);
		right(360 / no_sides);
	}
	
	hide();
	//to close the turtleSim window
	//click on the window
	getClick();
}

