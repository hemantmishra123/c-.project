#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
using namespace std;
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
int main()
{
    // it is the start movement of ball in the direction.
    // syntex err
    
    double data;
    char ch;
    int x=20,y=20;
    gotoxy(x,y);
    cout<<"<-O->";
    int flag=1;
    int size;
    cin>>size;
    int *ptr=(int*)malloc(size*sizeof(int));
    for(int k=0;k<size;k++)
    {
        int num;
        cin>>num;
        *(ptr+k)=num;
    }
    //print the dynamically created data 
    for(int k=0;k<size;k++)
    {
        cout<<*(ptr+k);
        cout<<endl;

    }
    // it is th eprograme for memory delete.

    free(ptr);
    int *p=(int*)calloc(size,sizeof(int));
    for(int c=0;c<size;c++)
  {
      int num2;
      cin>>num2;
      *(p+c)=num2;

  }
  // printing the data for given set of the data range
  for(int d=0;d<size;d++)
  {
      cout<<*(p+d);
  }
  free(p);

    while(flag==1)
    {
        ch=getch();
        switch(ch)
        {
            case 'a':
            x-=1;
            gotoxy(x,y);
            cout<<"<-O->";
            break;
            case 'd':
            x+=1;
            gotoxy(x,y);
            cout<<"<-O->";
            break;
            case 's':
            y+=1;
            gotoxy(x,y);
            cout<<"<-O->";
            break;
            case 'w':
            y-=1;
            gotoxy(x,y);
            cout<<"<-O->";
            break;
            case 'e':
            exit(0);
        }

    
    }
}
