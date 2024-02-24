#include <iostream>
#include <string.h>
using namespace std;

class mycar
{
     public:

    string model;
    string  manu;
    int year;
    float price;

    void print()
    {
        cout<< "car model:" <<model<< "car manufacturer:" << manu<<"year:"<< year<< "price:"<<price<< endl;
    }

};

int main()
{

    mycar baseinfo= {" farari"," bmw",  2001, 129.23};
    mycar majurinfo= { " round"," tata", 1999, 2098.23};
    baseinfo. print();
    majurinfo.print ();



    return 0;
}






