// Unscoped Enums and Scoped Enums (enum class)

#include <iostream>
using namespace std;

enum color // default int 4 bytes
{
    RED,
    GREEN,
    BLUE
};

enum class color_class : unsigned int 
{
    RED,
    GREEN,
    BLUE
};

int main()
{
    cout << "Color is " << RED;
    return 0;
}