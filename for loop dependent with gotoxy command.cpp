#include <iostream>
#include<windows.h>
//Console::SetWindowSize( 80, 25 );
void gotoxy(int x,int y){
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
using namespace std;

int main()
{
	int lineNumX = 42;
	int lineNumY = 12;
	gotoxy(lineNumX,lineNumY);
	for (int i=5;i>=1;i--){
		for (int j=1;j<=i;j++)
	   		cout<<'*';
	cout<<endl;
		lineNumY++;
		gotoxy(lineNumX,lineNumY);
	}
   		
	return 0;
}