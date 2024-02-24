#include<iostream>
using namespace std;


int main()
{
     int m;

      float A [3]={1.10, 1.60, 2.30};
     cout<< " Welcome Ice cream shop"<<endl;
     cout<< "1. Capri: €1.10"<<endl;
     cout<< "2. Nogger: €1.60"<<endl;
     cout<< "3. Cornetto: €2.30"<<endl;
     cout<< "Enter your order by serial number"<<endl;
     float sum2=0;
      for (int i=0; i<3; i++){
       cin>>m;
        cout<< "Your Product price is"<<A[m-1]<< endl;
        sum2+=A[m-1];
        }
        cout<<endl;
        cout<<"Total Ice cream price  is "<<sum2<<endl;




    return 0;
}
