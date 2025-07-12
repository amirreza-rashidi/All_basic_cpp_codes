#include <iostream>
using namespace std;

int main() {
	//The second method for initializing a variable
   unsigned int x{1};
   unsigned int total{0};

   while (x <= 10) {
      int y = x * x;
      cout << y << endl;
      total += y;
      ++x;
   } 

   cout << "Total is " << total << endl;
} 


