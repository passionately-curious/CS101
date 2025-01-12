#include <simplecpp>

main_program {
	turtleSim();

	double no_sides  = 100;
	double step      = 0.5;

	repeat(2000) {
		forward(step / no_sides);
		right(360 / no_sides);
		
		//slower the step increases
		//closer are the lines of the spiral
		step += 0.5;//to increase the radius

		wait(0.001);//to see the turtleSim moving
	}
	
	//to close the turtleSim window
	//click on the window			
	getClick();
}
