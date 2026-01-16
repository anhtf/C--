#include <iostream>
using namespace std;

/*
Overloading == Same name, different parameter(return type)
Overriding  == 
*/

class Addition
{
    public:
    virtual int addition(int a, int b);
    private:
    int a, b;
};

class FloatAddition: public Addition
{
    public:
    int addition(int a, int b) override
    {
        return a - b;
    }
};

int Addition::addition(int a, int b)
{
    return a + b;
}

int addition(int a, int b)
{
    return a + b;
}

int addition(int a, int b, int c)
{
    return a + b + c;
}

float addition(float a, float b)
{
    return a + b;
}

int main()
{
    // Test function overloading
    cout << "Test Overloading:" << endl;
    cout << "addition(5, 10) = " << addition(5, 10) << endl;
    cout << "addition(5, 10, 15) = " << addition(5, 10, 15) << endl;
    cout << "addition(5.5f, 10.5f) = " << addition(5.5f, 10.5f) << endl;
    
    // Test method overriding
    cout << "\nTest Overriding:" << endl;
    Addition add;
    cout << "Addition::addition(5, 10) = " << add.addition(5, 10) << endl;
    
    FloatAddition fadd;
    cout << "FloatAddition::addition(5, 10) = " << fadd.addition(5, 10) << endl;
    
    return 0;
}
