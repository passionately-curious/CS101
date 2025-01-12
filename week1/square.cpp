#include <simplecpp>

main_program {
	turtleSim();

	repeat(4) {
		forward(150);
		right(90);

		wait(0.2);//to see turtleSim moving
	}
	
	//to close the turtleSim window
	//click on the window
	getClick();
}

