
#include <iostream>
using namespace std;


int main ()
{
     int i,j, r1,c1, r2, c2,k, A [10][10], B[10][10], result [10][10];
          int sum=0;
          cout<< "Enter number of row and col for 1st matrix";
          cin>>r1>>c1;
          cout<< "Enter number of row and col for second matrix";
          cin>>r2>>c2;

          while (c1 !=r2)
          {
               cout<< "ERROR, please enter same number of row and col ";
               cout<< "Enter number of row and col for 1st matrix";
               cin>>r1>>c1;
               cout<< "Enter number of row and col for second matrix";
               cin>>r2>>c2;
          }
     cout<< "Enter 1st Matrix elements";
         for (i=0; i<r1; ++i)
          { for ( j=0; j<c1; ++j)
            {
                cout<< "A ["<<i<<"] ["<< j<<"] =";
                cin>> A[i][j];
            }cout<<endl;
          }cout<<endl;

      cout<< "Enter 2nd Matrix elements";
          for (i=0; i<r2; ++i)
          { for ( j=0; j<c2; ++j)
            {
                cout<< "B ["<<i<<"] ["<< j<<"] =";
                cin>> B[i][j];
            }cout<<endl;
          }cout<<endl;

         // multi

        for (i=0; i<r1; ++i)
          { for ( j=0; j<c2; ++j)
            {
                for ( k=0; k<c1; ++k)
                {
                    sum= sum+A[i][k]*B[k][j];
                }
                result[i][j]=sum;
                sum=0;


            }
          }
         cout<<"Multiplication= ";
           for (i=0; i<r1; ++i)
          {
             for ( j=0; j<c2; ++j)
            {
            cout<< result[i][j]<<"\t";
            }cout<<endl;cout<<"\t"; cout<<"\t";
          }cout<<endl;


    return 0;

}
