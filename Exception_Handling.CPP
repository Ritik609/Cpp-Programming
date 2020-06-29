#include<iostream.h>
#include<conio.h>
void main()
{
  int a,b;
  cout<<"enter values"  ;
  cin>>a>>b;
  try
  {
    if(b!=0)
    {
      cout<<endl<<"R "<<a/b;
    }
    else
    {
      throw(b);
    }
 }
 catch(int g)
  {
    cout<<"exception";
    }
 getch();
 }