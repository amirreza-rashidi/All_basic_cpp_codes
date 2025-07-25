#include <iostream>
using namespace std;
int fact(int);
int main()
{
	int n;
	cin>>n;
	cout<<fact(3);
	return 0;
}
int fact(int x)
{
	if(x!=0)
		return x*fact(x-1);
	else
		return 1;
}