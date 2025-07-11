#include <iostream>
using namespace std;
int main()
{
	int grade;
	cin>>grade;
	if (grade>=17 && grade<=20)
	   cout<<"grade="<<grade<<"score="<<'A';
	else if (grade>=15 && grade<17)
	   cout<<"grade="<<grade<<"score="<<'B';
	else if (grade>=12 && grade<15)
	   cout<<"grade="<<grade<<"score="<<'C';   
	else 
	   cout<<"grade="<<grade<<"score="<<'D';
	return 0;
}