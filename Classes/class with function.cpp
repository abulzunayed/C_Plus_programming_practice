#include <iostream>
using namespace std;
class class2;
class class1
{
    int val;
    public:
        void indata(int a){val=a;}
        void display(void){cout<< "val  :"<<val<<endl;}
        friend void exchange(class1, class2 );

};
class class2
{
    int val2;
    public:
        void indata(int a){val2=a;}
        void display(){cout<< "val2  :"<<val2<<endl;}
        friend void exchange(class1 , class2 );

};
 void exchange (class1 s, class2 g)
 {
     int tem=s.val;
     s.val=g.val2;
     g.val2=tem;
 }
int main()
{
     class1 c1;
     class2 c2;
     c1. indata(100);
     c2.indata(200);
     c1.display();
     c2.display();



     exchange(c1, c2);
       c1.display();
     c2.display();

    return 0;
}
