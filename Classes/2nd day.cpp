#include <iostream>
using namespace std;


int square(int x)
{
    return x*x;
}

float area( float f)
{
    const float pi=3.1515;
    return pi*square(f);
}
void radius()
{
    cout<< " radius number";
    int c;
    cin>>c;

    cout<< " area of radius"<< area(c)<<endl;
}

int main()
{
   cout<<"wellcome mr."<<endl;
   cout<< "enter a number"<<endl;
   int a;
   cin>>a;
   int r= square(a);
   cout<< "square of your number is    "<< r<<endl;
     radius();
   return 0;
}
