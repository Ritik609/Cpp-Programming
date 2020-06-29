#include<iostream.h>
#include<conio.h>
void main()
 {
   clrscr();
   int n;
   cin>>n;
   int i=2;
   while(i<=n)
    {
      if((n%i)==0)
       {
	 cout<<i<<"*";
	 n=n/i;
       }
      else
       {
	i++;
       }
    }
   getch();
 }