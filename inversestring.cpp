#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char s[50],inverses[50];
	gets(s)	;

	int n=strlen(s);
	for(int i=0;i<=n;i++)
		inverses[i]=s[n-i-1];
	cout<<inverses;
		
	return 0;
}