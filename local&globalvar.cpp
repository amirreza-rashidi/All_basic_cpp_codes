#include <iostream>
using namespace std;
int x=800;
void fn1();
void fn2();
int main()
{
	int x=20;
	fn1();
	fn2();
	cout<<"\n in main x is:"<<x;
	return 0;
}
void fn1()
{
	int x=15;
	cout<<"\n in fn1 x is:"<<x;
}

void fn2()
{
	int x=70;	
	cout<<"\n in fn2 x changes:"<<x;
	for (x=1;x<=3;x++)
		cout<<x;
	cout<<"\n Global x in fn2 is:"<<::x;

}