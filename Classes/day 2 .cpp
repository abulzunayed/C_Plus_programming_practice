#include<iostream>
#include <conio.h>
using namespace std;

int main()
{

   int n, row,col;
   cout<< "Enter number of line: ";
   cin>>n;

   for(int row=1;row<=n;row++)
   {
       for (col=1; col<=row; col++)
       {
           cout<< "   "<<col;
       }
       cout<<endl;


   }




    getch();
}









