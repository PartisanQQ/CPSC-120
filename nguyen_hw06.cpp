#include <iostream>
#include <cmath>
using namespace std;

enum Color
{
    RED,
    BLUE,
    GREEN,
    YELLOW
};

class Circle
{
private:
    double radius;
    Color circle_color;
public:
    Circle();
    Circle(double);
    void setRadius(double);
    void setDiameter(double);
    double calcCircumference();
    double calcArea();
    void printOut();
    Color setColor(Color);
};

const double PI = 3.141592654;
const string output_colors[4]=
{
    "RED",
    "BLUE",
    "GREEN",
    "YELLOW"
};

int main()
{
    //Creating circle objects using circle class
    Circle circle_1;
    Circle circle_2;
    Circle circle_3;
    Circle circle_4;

    //Changing radius or converting diameter to radius for calculations
    circle_1.setRadius(4.0);
    circle_2.setRadius(3.2);
    circle_3.setDiameter(17.6);
    circle_4.setRadius(0.3);

    //Giving the circles colors
    circle_1.setColor(RED);
    circle_2.setColor(BLUE);
    circle_3.setColor(GREEN);
    circle_4.setColor(YELLOW);

    //Print out circumference and area
    circle_1.printOut();
    circle_2.printOut();
    circle_3.printOut();
    circle_4.printOut();

    return 0;
}

Circle::Circle()
{
    radius = 1;
}

Circle::Circle(double new_radius)
{
    radius = new_radius;
}

void Circle::setRadius(double new_radius)
{
    radius = new_radius;
}

void Circle::setDiameter(double new_diameter)
{
    radius = new_diameter/2;
}
double Circle::calcCircumference()
{
    return 2 * PI * radius;
}

double Circle::calcArea()
{
    return PI * pow(radius, 2);
}

Color Circle::setColor(Color new_color)
{
    circle_color = new_color;
}

void Circle::printOut()
{
    double circ = calcCircumference();
    double area = calcArea();

    cout << "Color: " << output_colors[circle_color] << endl;
    cout << "Circumference: " << circ << endl;
    cout << "Area: " << area << endl << endl;
}
