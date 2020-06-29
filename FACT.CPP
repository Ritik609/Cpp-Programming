#include<iostream.h>
#include<conio.h>
void main()
   {
     double fact=1,n;
     cout<<"\nEnter the number whose factorial is to be calculated :";
     cin>>n;
     while(n!=0)
       {
	 fact=fact*n;
	 n--;
       }
     cout<<"\nFactorial of the given number is :"<<fact;
     getch();
   }
