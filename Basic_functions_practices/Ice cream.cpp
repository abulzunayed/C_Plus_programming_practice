#include<iostream>
using namespace std;


int main()
{
     int m; const float n=5.00;

      float A [3]={1.10, 1.60, 2.30};
     cout<< " Welcome Ice cream shop"<<endl;
     cout<< "\t1. Capri: €1.10"<<endl;
     cout<< "\t2. Nogger: €1.60"<<endl;
     cout<< "\t3. Cornetto: €2.30"<<endl;
     cout<< "Give order for friend by serial number"<<"\n";
     float sum2=0;
          for (int i=0; i<2; i++)
           {
          cin>>m;
          cout<< "\tYour Product price is"<<A[m-1]<< "\n";
           sum2+=A[m-1];
           };
        cout<<endl;
        cout<< "Order yourself by serial number"<<endl;
        cin>> m;
        cout<< "\tYour Product price is"<<A[m-1]<< endl;
        float sum=sum2+A[m-1];
        cout<<endl;
        cout<<"\tTotal Ice cream price  is "<<sum<<endl;
         float r;
         r=n-sum;
        if (r>1.10 && r<n)
           {   cout << "\tStill you can purchase"<<endl;

            cout<< "Again Choose order by serial number"<<endl;
            cin>> m;
            cout<< "Your Product price is"<<A[m-1]<<"\n";
            float sum3=sum+A[m-1];
            cout<<endl;
            cout<<"\tFinal Total  price  is "<<sum3<<endl;
            cout<< "\t Thanks for purchase"<<endl;
            }
            else cout<< "Sorry No More order"<<endl<<"\n";

    return 0;
}
