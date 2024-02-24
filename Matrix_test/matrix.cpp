#include "matrix.h"
#include <iostream>
using namespace std;

Matrix::Matrix()
{
    cout<< " i am constructor"<<endl;
}
void Matrix::print()
{
    cout<< " i am print function"<<endl;
}
 void Matrix:: row()
 {
     int A[100];
     int n;

     cout<<" Enter your number of Row :\n";
     cin>>n;

     cout<<" Enter the elements of Row :\n";
     for (int i=0; i<n;i++)
     {
         cin>>A[i];
     }
    cout<<" You entered these values in 1st Row :\n";
     for (int i=0; i<n;i++)
     {
         cout<<A[i]<<"\t";
     }cout<<endl;

 }

 void Matrix:: row1()
 {
     char ch;
     cout<<" Do you want to take more row then press Y otherwise press n\n"<<endl;
     cin>>ch;

     if (ch=='n'){ cout<< " Goodbye\n";}
     else
     {
       int A[100];
       int n;

        cout<<" Enter your number of 2nd Row :\n";
        cin>>n;

         cout<<" Enter the elements of 2nd Row :\n";
        for (int i=0; i<n;i++)
         {
         cin>>A[i];
         }
          cout<<" You entered these values in 2nd Row :\n";
         for (int i=0; i<n;i++)
         {
         cout<<A[i]<<"\t";
           }cout<<endl;
      }
 }
  void Matrix:: row2()
 {
     char ch;
     cout<<" Do you want to take more row then press Y otherwise press n\n"<<endl;
     cin>>ch;

     if (ch=='n'){ cout<< " Goodbye\n";}
     else
     {
       int A[100];
       int n;

        cout<<" Enter your number of 2nd Row :\n";
        cin>>n;

         cout<<" Enter the elements of 2nd Row :\n";
        for (int i=0; i<n;i++)
         {
         cin>>A[i];
         }
          cout<<" You entered these values in 2nd Row :\n";
         for (int i=0; i<n;i++)
         {
         cout<<A[i]<<"\t";
           }cout<<endl;
      }
 }





void Matrix:: row6()
{
    int r,c;
     cout<<" enter the number of row1";
     cin>>r;
      cout<<" enter the number of colom1";
     cin>>c;
    int matrix_1 [r][c];
   int i,j;
   cout<<" enter 1st matrix value";
   for (i=0; i<r;i++)
    {  for (j=0;j<c;j++)
        {
            cin>> matrix_1[i][j];
        }

    }
    for (i=0; i<r;i++)
    {  for (j=0;j<c;j++)
        {
            cout<< matrix_1[i][j]<<"\t";
        }cout<< endl;

    }cout<< endl;
}
