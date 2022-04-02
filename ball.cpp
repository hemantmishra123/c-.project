#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<iostream>
#include<vector>
#include<windows.h>
#include<dos.h>
void fun();
using namespace std;
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void fun()
{
    int setx,base;
    base=40;
    setx=80;
    for(int k=0;k<5;k++)
    {
        gotoxy(setx,base+k);
        cout<<"*";

    }
}
int main()
{
  int x=0,y=42;
  cout<<"it is before the big banng ";
  int t,setx,base;
  gotoxy(x,y);
  cout<<"->>>";
  base=40;
  setx=80;
  fun();
  for(int i=1;i<setx;i++)
  {
      gotoxy(x+i,y);
      system("cls");
      cout<<"->>>";
      fun();

  }
}