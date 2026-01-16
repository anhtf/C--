#include <iostream>
using namespace std;

class Box
{
public:
    double getVolume(void)
    {
        return length * breadth * height;
    }

    void setLength(double len)
    {
        length = len;
    }
    void setBreadth(double bre)
    {
        breadth = bre;
    }
    void setHeight(double hei)
    {
        height = hei;
    }

    Box operator+(const Box& _box)
    {
        Box box;

        box.length = this->length + _box.length;
        box.breadth = this->breadth + _box.breadth;
        box.height = this->height + _box.height;

        return box;
    }

    Box operator-(const Box& _box)
    {
         Box box;

        box.length = this->length - _box.length;
        box.breadth = this->breadth - _box.breadth;
        box.height = this->height - _box.height;

        return box;
    }

private:
    double length;
    double breadth;
    double height;
};

int main() {
   Box Box1;                // Declare Box1 of type Box
   Box Box2;                // Declare Box2 of type Box
   Box Box3;                // Declare Box3 of type Box
   Box Box4;
   double volume1, volume2, volume3, volume4 = 0.0;     // Store the volume of a box here
 
   // box 1 specification
   Box1.setLength(6.0); 
   Box1.setBreadth(7.0); 
   Box1.setHeight(5.0);
 
   // box 2 specification
   Box2.setLength(12.0); 
   Box2.setBreadth(13.0); 
   Box2.setHeight(10.0);
 
   // volume of box 1
   volume1 = Box1.getVolume();
   cout << "Volume of Box1 : " << volume1 <<endl;
 
   // volume of box 2
   volume2 = Box2.getVolume();
   cout << "Volume of Box2 : " << volume2 <<endl;

   // Add two object as follows:
   Box3 = Box1 + Box2;
   Box4 = Box3 - Box1;
   // volume of box 3
   volume3 = Box3.getVolume();
   cout << "Volume of Box3 : " << volume3 <<endl;

   volume4 = Box4.getVolume();
   cout << "Volume of Box4 : " << volume4 <<endl;

   return 0;
}