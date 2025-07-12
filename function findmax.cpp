#include <iostream>
using namespace std;
void findmax(int, int, int);
int main()
{
	int x,y,z;
	cout<<"please enter 3 numbers:";
	cin>>x>>y>>z;
	findmax(x,y,z);
	return 0;
}
void findmax(int n1, int n2, int n3)
{
	int maxnumber;
	maxnumber=(n1>n2)?n1:n2;
	maxnumber=(n3>maxnumber)?n3:maxnumber;
	cout<<"maximum="<<maxnumber;
}