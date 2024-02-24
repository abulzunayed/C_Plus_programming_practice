
#include<iostream>
using namespace std;
int main ()
{
   int matrix_1 [2][2];
   int i,j;
   cout<<" enter 1st matrix value";
   for (i=0; i<2;i++)
    {  for (j=0;j<2;j++)
        {
            cin>> matrix_1[i][j];
        }

    }
    for (i=0; i<2;i++)
    {  for (j=0;j<2;j++)
        {
            cout<< matrix_1[i][j]<<"\t";
        }cout<< endl;

    }cout<< endl;

    return 0;
}
