
#include <iostream>
#include <assert.h>

#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

Shape* getShape() {
	using std::cout;
	using std::endl;
	using std::cin;

	const int MAX_INPUT = 9;
	std::string colorInput;
	std::string shapeInput;
	bool running = true;

	 
	cout << "Enter a list of shapes - 'done' to end" << endl;
	


	while (running) {
		cout << "Enter the shape's color (or 'done')...";	
		cin >> colorInput;
		
		if (colorInput == "done") {
			running = false;
			return NULL;
		}
		else {

			cout << "Enter shape type... ";
			cin >> shapeInput;
			if (shapeInput == "circle") {
				cout << "Enter the radius...";
				double radiusInput;
				cin >> radiusInput;
				Circle* circPtr = new Circle(colorInput, radiusInput);
				return circPtr;
				
			}
			else if (shapeInput == "rectagnle") {
				cout << "Enter the length and width...";
				double length, width;
				cin >> length >> width;
				Rectangle* rectPtr = new Rectangle(colorInput, length, width);
				return rectPtr;
			}
			else if (shapeInput == "square") {
				cout << "Enter the length of a side...";
				double sideLength;
				cin >> sideLength;
				Square* SquaPtr = new Square(colorInput, sideLength);
				return SquaPtr;
				
			}
			else {
				cout << "invalid input";
			}

		}

		
	}


}