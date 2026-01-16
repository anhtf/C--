#include <iostream>
#include <string>
using namespace std;

/*
2 type of declare a string 
--- C-type:           char name_str[str-lenght] = {,,,,,...}
--- C++ class String: string name_string = "hello"; auto add \0 to end of string  
*/
int main()
{
    string my_string = "My name is anhtdh, is an embedded software engineer.";
    my_string.append("Hello");
    cout << my_string << endl;
    my_string.push_back('e');
    cout << my_string << endl;
    my_string.pop_back();
    cout << my_string << endl;

    string your_string;

    getline(cin, your_string);
    cout << your_string << endl;
    return 0;
}