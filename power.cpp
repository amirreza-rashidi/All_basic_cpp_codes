#include <iostream>
using namespace std;
int power(int ,int);
int main()
{
	int a,b;
	cout<<"pleaes enter 2 number\n";
	cin>>a>>b;
	cout<<power(a,b);
	return 0;
}
int power(int x,int y)
{
	if(y==1)
	return x;
	if (y==0)
	return 1;
	return x*power(x,y-1);
}