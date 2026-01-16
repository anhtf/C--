

// "auto"     storage class     -> default storage class for all local variables
// "register" storage class     -> should be stored in a register instead of RAM -> maximum size equal to the register size
// "static"   storage class     -> keep a local variable in existence during the life-time 
// "extern"   storage class     -> reference of a global variable that is visible to ALL the program files


#include <iostream>
 
// Function declaration
void func(void);
 
static int count = 10; /* Global variable */
 
main() {
   while(count--) {
      func();
   }
   
   return 0;
}

// Function definition
void func( void ) {
   static int i = 5; // local static variable
   i++;
   std::cout << "i is " << i ;
   std::cout << " and count is " << count << std::endl;
}