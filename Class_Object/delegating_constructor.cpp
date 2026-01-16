#include <string>
#include <iostream>

/*
A virtual destructor is a destructor declared within the base class with the virtual keyword. 
When deleting a derived class object using a pointer to a base class, the base class should be defined with a virtual destructor.
Virtual destructors help prevent the problem of memory leaks and undefined behavior. 
If a virtual destructor is not used, then only the base class destructor is called, and the resources of derived class is not cleaned up.
*/

class Student {
   public:
   
   // Primary constructor, Constructor Initialization List
   Student(const std::string& name, int age, double grade) 
      : name(name), age(age), grade(grade) {} 

   // Delegating constructor with default grade
   Student(const std::string& name, int age) 
      : Student(name, age, 0.0) {}

   // Delegating constructor with default age and grade
   Student(const std::string& name) 
      : Student(name, 18, 0.0) {}

   void display() const {
      std::cout << "Name: " << name 
      << ", Age: " << age 
      << ", Grade: " << grade << "\n";
   }

   private:
      std::string name;
      int age;
      double grade;
};
int main() {
   Student s1("Navya", 20, 90.5);
   Student s2("Divya", 22);
   Student s3("Kavya");

   s1.display();
   s2.display();
   s3.display();

   return 0;
}