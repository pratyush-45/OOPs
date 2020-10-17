/* To define an abstract class Shape and use it 
to find the areas of a rectangle and a circle */
#include <iostream>
using namespace std;

class Shape
{
    public:
        virtual double calcArea() = 0;
};

class Rectangle : public Shape
{
    double length, breadth;
    public:
        void setData(double l, double b)
        {
            this->length = l;
            this->breadth = b;
        }
        double calcArea()
        {
            return (length*breadth);
        }
};

class Circle : public Shape
{
    double radius;
    public:
        void setData(double r)
        {
            this->radius = r;
        }
        double calcArea()
        {
            return (3.14*radius*radius);
        }
};

int main()
{
    Rectangle r;
    r.setData(50.4, 15.9);
    cout<<"Area of Rectangle - "<<r.calcArea()<<endl;
    
    Circle c;
    c.setData(14.5);
    cout<<"Area of Circle - "<<c.calcArea();
}
