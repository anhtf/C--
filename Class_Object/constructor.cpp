#include <iostream>
using namespace std;


// Implicit Default Constructor --> automatically called by compiler
// Explicit Default Constructor
// Overloading Default Constructor

class Line
{
public:
    void setLength(double len);
    double getLength(void);
    //Line(double _length, double _height); //constructor
    //explicit Line(double length = 10.0);
    Line(): length(0), height(0)
    {
        cout << "Overloaded constructor (no argument) called" << endl;
    }
    Line(double _length): length(_length), height(0)
    {
        cout << "Overloaded constructor (1 argument) called" << endl;
    }
    ~Line(); // destructor

private:
    double length;
    double height;
};

// Line::Line(double _length, double _height):  length(_length), height(_height)
// {
//     cout << "Object is being created" << endl;
// }

Line::~Line()
{
    cout << "Object is being deleted" << endl;
}

void Line::setLength(double _length)
{
    length = _length;
}

double Line::getLength(void)
{
    return length;
}

int main()
{
   // Line line(10.0, 11.0);
    Line line_2(5.0);
    //cout << "Length of line : " << line.getLength() <<endl; 
    //line.setLength(6.0);
    //cout << "Length of line : " << line.getLength() <<endl;
     cout << "Length of line_2 : " << line_2.getLength() <<endl; 
    return 0;
}