#include <iostream>
using namespace std;
int product(int ,int);
int main()
{
	int a,b;
	cout<<"pleaes enter 2 number\n";
	cin>>a>>b;
	cout<<product(a,b);
	return 0;
}
int product(int x,int y)
{
	if(y==1)
	return x;
	if (y==0)
	return 0;
	return x+product(x,y-1);
}