#include <iostream>
using namespace std;
int main()
{
	int num1,num2;
	char op;
	int flag=1;
	while(flag)
	{
	cout<<"enter num1,operator,num2\n";
	cin>>num1>>op>>num2;
	switch(op){
	case '+':
		cout<<"\nsum="<<num1+num2<<endl;	
		break;
	case '-':
		cout<<"\nminus="<<num1-num2<<endl;	
		break;
	case '*':
		cout<<"\nmutiply="<<num1*num2<<endl;	
		break;
	case '/':
		cout<<"\ndivision="<<num1/num2<<endl;	
		break;
	case '%':
		cout<<"\nmod="<<num1%num2<<endl;	
		break;
	default:
		cout<<"\n operator is illegal";	
		flag=0;
	}
   }
	return 0;
}