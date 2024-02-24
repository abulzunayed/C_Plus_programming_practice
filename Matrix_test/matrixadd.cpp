#include <iostream>
using namespace std;


int main ()
{
      int matrix1 [10][10], matrix2 [10][10],matrix3 [10][10];
      int i, j;
      int numberofRow;
      int numberofcol;

      cout<< "Enter number of Row ";
      cin >> numberofRow;
       cout<< "Enter number of col ";
      cin >> numberofcol;

     cout<< "Enter 1st Matrix elements";
         for (i=0; i<numberofRow; ++i)
          { for ( j=0; j<numberofcol; ++j)
            {
                cout<< "matrix1 ["<<i<<"] ["<< j<<"] =";
                cin>> matrix1[i][j];
            }cout<<endl;
          }cout<<endl;

      cout<< "Enter 2nd Matrix elements";
          for (i=0; i<numberofRow; ++i)
          { for ( j=0; j<numberofcol; ++j)
            {
                cout<< "matrix2 ["<<i<<"] ["<< j<<"] =";
                cin>> matrix2[i][j];
            }cout<<endl;
          }cout<<endl;

      cout<<"1st matrix1=    ";
      for (i=0; i<numberofRow; ++i)
          {
             for ( j=0; j<numberofcol; ++j)
            {
            cout<< matrix1[i][j]<<"\t";
            }cout<<endl; cout<<"\t"; cout<<"\t";
          }cout<<endl;


      cout<<"2nd matrix1=    ";
      for (i=0; i<numberofRow; ++i)
          {
             for ( j=0; j<numberofcol; ++j)
            {
            cout<< matrix2[i][j]<<"\t";
            }cout<<endl; cout<<"\t"; cout<<"\t";
          }cout<<endl;

      // Matrix addition
         for (i=0; i<numberofRow; ++i)
          { for ( j=0; j<numberofcol; ++j)
            {
               matrix3[i][j]= matrix1[i][j]+ matrix2[i][j];
            }
          }
        cout<<"Add matrix3=    ";
           for (i=0; i<numberofRow; ++i)
          {
             for ( j=0; j<numberofcol; ++j)
            {
            cout<< matrix3[i][j]<<"\t";
            }cout<<endl; cout<<"\t"; cout<<"\t";
          }cout<<endl;

 // Matrix subtraction
          int matrix4 [10][10];
         for (i=0; i<numberofRow; ++i)
          { for ( j=0; j<numberofcol; ++j)
            {
               matrix4[i][j]= matrix1[i][j]- matrix2[i][j];
            }
          }
        cout<<"Sub matrix4=    ";
           for (i=0; i<numberofRow; ++i)
          {
             for ( j=0; j<numberofcol; ++j)
            {
            cout<< matrix4[i][j]<<"\t";
            }cout<<endl; cout<<"\t"; cout<<"\t";
          }cout<<endl;

// multiplication

           int k, sum=0, matrix5 [10][10];

           for (i=0; i<numberofRow; ++i)
           {
               for ( j=0; j<numberofcol; ++j)
               {
                   for ( k=0; k<numberofcol; ++k)
                   {
                       sum= sum+ matrix1 [i][k]* matrix2[k][j];
                   } matrix5[i][j]= sum; sum=0;

               }
           }
           cout<<"Multi matrix5=   ";
           for (i=0; i<numberofRow; ++i)
          {
             for ( j=0; j<numberofcol; ++j)
            {
            cout<< matrix5[i][j]<<"\t";
            }cout<<endl; cout<<"\t"; cout<<"\t";
          }cout<<endl;


      return 0;
}
