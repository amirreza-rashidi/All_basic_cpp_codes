#include <iostream>
using namespace std;

int main() {
   unsigned int counter{1}; 

   do {
      cout << counter << "  ";
      ++counter;
   } while (counter <= 10); // end do...while 

   cout << endl; 
} 

