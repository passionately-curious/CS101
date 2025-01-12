#include <simplecpp>

main_program {
	turtleSim();

	double no_sides   = 4;
	double len_side   = 100;
	int    no_squares = 10;

	repeat(no_squares) {
		//each iteration for one square
		repeat(no_sides) {
			forward(len_side);
			right(90);

			wait(0.1);
		}
		
		//moving the turtle to the centre
		//of the side of square
		penUp();
		forward(len_side / 2);
		penDown();
		right(45);

		len_side = len_side / sqrt(2);

		wait(0.1);
	}
	
	hide();
	//to close the turtleSim window
	//click on the window
	getClick();
}
