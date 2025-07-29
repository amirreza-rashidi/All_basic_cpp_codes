#include <iostream>
using namespace std;
int main()
{
	int digit, num=0;
	cout<<"Please enter a number:";
	cin>>num;
	do{
		digit=num%10;
		cout<<digit;
		num/=10;
	}while(num!=0);

	return 0;
}