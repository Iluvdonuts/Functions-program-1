// This program asks the user to input the coordinates of the center point and a point on the circumfernce of a circle
// It calculates the distance between these points to determine the circles radius. With the radius, it computes the circumferance and area of the circle
// The program displays the radius, circumference, and area as output


#include <iostream>
#include <cmath>

using namespace std;

#define M_PI 3.1416

double calcDistance(double x1, double y1, double x2, double y2);
double calcRadius(double cneterX, double centerY, double x, double y);
double calcCircumference(double radius);
double calcArea(double radius);

int main() {
	double centerX, centerY, x, y;

	cout << "Enter the coordinates of the center point (x, y): ";
	cin >> centerX >> centerY;

	cout << "Enter the coordinates of a point on the circumference (x, y): ";
	cin >> x >> y;

	double radius = calcRadius(centerX, centerY, x, y);
	double circumference = calcCircumference(radius);
	double area = calcArea(radius);

	cout << "Radius of the circle: " << radius << endl;
	cout << "Circumference of the circle: " << circumference << endl;
	cout << "Area of the circle: " << area << endl;

	return 0;
}

double calcDistance(double x1, double y1, double x2, double y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double calcRadius(double centerX, double centerY, double x, double y) {
	return calcDistance(centerX, centerY, x, y);
}

double calcCircumference(double radius) {
	return 2 * M_PI * radius;
}

double calcArea(double radius) {
	return M_PI * pow(radius, 2);
}
