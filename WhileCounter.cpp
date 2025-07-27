#include <iostream>
using namespace std;

int main() {      
   unsigned int counter{1}; // declare and initialize control variable

   while (counter <= 10) { // loop-continuation condition
      cout << counter << "  ";
      ++counter; // increment control variable 
   } 

   cout << endl; 
} 
