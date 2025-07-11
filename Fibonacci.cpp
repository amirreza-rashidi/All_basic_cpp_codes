#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int fib1=0;int fib2= 1;
	cout<<"please enter number of elements in Fibonacci Series:";
	int n;
	cin>>n;
	int fib;
	for (int i=1;i<=n;i++)
	{
		cout<<setw(3)<<fib1;
		fib=fib1+fib2;
		fib1=fib2;
		fib2=fib;
	}		
	 
	return 0;
}