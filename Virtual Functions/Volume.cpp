/* To define an abstract class Volume and use it 
to find the volumes of a cone and a cylinder */
#include <iostream>
using namespace std;

class Volume
{
    public:
        double radius, height, volume;
        void getValue(double r, double h)
        {
            this->radius = r;
            this->height = h;
        }
        void showValue()
        {
            cout<<"Volume of the figure is - "<<volume<<endl;
        }
        virtual void calcVol() = 0; 
};

class Cone : public Volume
{
    public:
        void calcVol()
        {
            volume = 3.14*(radius*radius)*(height/3);
        }
};

class Cylinder : public Volume
{
    public:
        void calcVol()
        {
            volume = 3.14*(radius*radius)*height;
        }
};

int main()
{
    Cone cone;
    cone.getValue(14.8, 15);
    cone.calcVol();
    cone.showValue();

    Cylinder cylinder;
    cylinder.getValue(12.6, 16.4);
    cylinder.calcVol();
    cylinder.showValue();
}