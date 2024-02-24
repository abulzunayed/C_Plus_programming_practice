#include <iostream>
using namespace std;

  const m=50;
 class item
 {
    int itemcode[m];
    float itemPrice[m];
    int count;
    public:
     void CNT(){count =0;};
     void getitem();
     void displaysum();
     void remove();
     void displayitem();
 };

 void item:: getitem(void)
 {
     cout<< " Enter item code  :";
     cin>>intemcode[count];
     cout<< " Enter item cost[m]  :";
     cin>>intemPrice[count];
     count++;
 }

int main()
{  item order;
   order . CNT();
   int x;
   do{
    cout<< "enter appropiate number"<<endl;
    cout<< "n1:add item"<<endl;
    cout<< "n2:Display total value"<<endl;
    cout<< "n3:Delete an item"<<endl;
    cout<< "n4: Display all item"<<endl;
    cout<< "n5: Quit"<<endl;
    cout<< "what is your option?"<<endl;
    cin>>x;
    switch(x)
    {
        case 1: order. getitem(); break;
        case 2: order. displaysum(); brak;
        case 3: order. remove(); break;
        case 4: order. displayitem(); break;
        case 5: break;
        default: cout<< "Error try again";
    } while(x!=5);
   }

    return 0;
}
