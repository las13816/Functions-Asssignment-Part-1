// "This code will get user input for the coordinates for the center of the circle, 
// and a point on the circumference of a circle. It will then use the four functions: calcDistance, calcRadius, calcCircumference, calcArea
//  to calculate and output the radius, circumference and area of a the circle." 
// Include libraries 
#include <iostream> 
#include <cmath> 


// Declare variable 
double calcDistance(int x1, int y1, int x2, int y2);
double calcRadius(int centerX, int centerY, int pointX, int pointY);
double calcCircumference(double radius);
double calcArea(double radius);

// Create main function 
int main() {
	int centerX, centerY, pointX, pointY;
	double radius, circumference, area;

	// Gather input from the user 
	std::cout << "Enter coordinate of center of the circle: (x,y): ";
	std::cin >> centerX >> centerY;
	std::cout << "Enter the coordinates of a point on the circumference on the circle (x,y): ";
	std::cin >> pointX >> pointY;


	radius = calcRadius(centerX, centerY, pointX, pointY);
	circumference = calcCircumference(radius);
	area = calcArea(radius);

	// Output the radius, circumference, and area of the circle
	std::cout << "Radius: " << radius << std::endl;
	std::cout << "Circumference: " << circumference << std::endl;
	std::cout << "Area: " << area << std::endl;

	return 0;
}

// Calculate the distance between the two given points 
// Preconditions: takes as input, the coordinates of two points on the cartesian plane
// Postconditions: returns the distance between these two points
double calcDistance(int x1, int y1, int x2, int y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
// Calculate the radius of the circle 
// Preconditions: takes as input the coordinates for the center of a circle and the coordinates of a point on the circumference
// Postconditions: returns the radius of the circle
double calcRadius(int centerX, int centerY, int pointX, int pointY) {
	return calcDistance(centerX, centerY, pointX, pointY);
}
// Calculate the circumference
// Preconditions:  takes as input the radius of the circle
// Postconditions: returns the circumference
double calcCircumference(double radius) {
	return 2 * 3.1416 * radius;
}
// Calculate the area of the circle 
// Preconditions: takes as input the radius of the circle
// Postconditions: returns the area
double calcArea(double radius) {
	return 3.1416 * pow(radius, 2);
}