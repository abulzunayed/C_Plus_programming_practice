#include<iostream>
using namespace std;
int main ()
{
   int matrix_1 [3][3], matrix_2[3][3];
   int i,j;
   cout<<" enter 1st matrix value";
   for (i=0; i<3;i++)
    {  for (j=0;j<3;j++)
        {
            cin>> matrix_1[i][j];
        }

    }
   cout<<" enter 2nd matrix value";
    for (i=0; i<3;i++)
    {  for (j=0;j<3;j++)
        {
            cin>> matrix_2[i][j];
        }

     }
    for (i=0; i<3;i++)
    {  for (j=0;j<3;j++)
        {
            cout<< matrix_1[i][j]<<"\t";
        }cout<<endl;

     } cout<<endl;

       for (i=0; i<3;i++)
    {  for (j=0;j<3;j++)
        {
            cout<< matrix_2[i][j]<<"\t";
        }cout<<endl;

     } cout<< endl;

     int matrix_3[3][3];
       for (i=0; i<3;i++)
       {  for (j=0;j<3;j++)
        {
           matrix_3 [i][j] =matrix_1[i][j]+ matrix_2[i][j];
            cout<< matrix_3[i][j]<<"\t";
        }cout<<endl;

    }


    return 0;

}
