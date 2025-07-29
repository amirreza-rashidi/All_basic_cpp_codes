#include <iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	bool isprime=true;
	for (int i=2;i<=x/2;i++){
		if(x%i==0){
		cout<<"\n x is not prime";
		isprime=false;
		break;
		}
	}
	if (isprime==true)
		cout<<"\n x is  prime";
	return 0;
}