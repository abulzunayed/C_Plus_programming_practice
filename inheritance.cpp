#include<iostream>
using namespace std;


class student
{
      public:
         string name;
         int age;

         void display ()
         {
             cout<< "name :"<< name<< endl;
             cout << "age  :"<< age<<endl;
         }

};



class person: public student
{
    //name, age, dispaly ();
     public:
       int id;
       void display2 ()
       {
         cout<< " id is  :"<< id<<endl;
        }


};
int main()
{
    person s1;
    s1. age=23;
    s1.name= "anisul";
    s1.id=234;
    s1. display();
    s1.display2();





    return 0;
}

