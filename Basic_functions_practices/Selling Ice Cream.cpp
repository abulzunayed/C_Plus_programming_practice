#include<iostream>
 using namespace std;

int main()
{
     float sum1=0;
    cout<< "A. ngg, price :1.0"<<endl;
    cout<< "B. Accc, price :2.3"<<endl;
    cout<< "C. Xccc, price =3.0"<<endl;

      int v[10];



       for (int i=0; i<3; i++)
        {cout<< "enter your oder price"<<endl;
          cin>> v[i];

        }
        for (int i=0; i<3; i++)
        {
         int val= v[i];
         sum1= sum1+ val;
        }
        cout <<" total value"<<sum1;

     return 0;
 }
