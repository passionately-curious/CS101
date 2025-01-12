#include <simplecpp>

main_program {
	turtleSim();
	
	//using same code as drawing a polygon
	//but increasing number of sides to make it a circle
	double no_sides = 400;

	repeat(no_sides) {
		forward(400 / no_sides);
		right(360 / no_sides);

		wait(0.01);//to see turtleSim moving
	}
	
	//to close the turtleSim window
	//click on the window
	getClick();
}
