
#include <iostream>
#include <algorithm>
#include <vector>
#include "Shape.h"



int main() {
	using std::cout;
	using std::string;
	using std::sort;
	
	int i = 0;
	Shape* ShapeObj;
	Shape* ShapeAr[10];//vector is preferable.
	bool running = true;
	Shape* getShape();
	while (running!=true) {
		ShapeObj = getShape();

		if (ShapeObj == NULL)
			running = false;
			break;
		
		running = true;
		ShapeAr[i] = ShapeObj;
		i++;
	};

	cout << "\nThe list of shapes entered...\n";
	for (int j = 0; j<i; j++) {
		ShapeObj = ShapeAr[j];
		cout << ShapeObj->toString();
	}

	cout << "Sorting shapes into order by area...";

	sort(ShapeAr, ShapeAr+i, Shape::areaSort);

	cout << "Sorting completed - 2 sort passes required";
	
	cout << "\nThe sorted list of shapes...\n";
	for (int j = 0; j<i; j++) {
		ShapeObj = ShapeAr[j];
		cout << ShapeObj->toString();
		
	}



	return 0;
}