#include <iostream>

using namespace std;

template<class T> struct A {
  void print (T a, char b = '0')       { std::cout << "1" << std::endl; }
  void print (T a) const               { std::cout << "2" << std::endl; }
  static void print (char a)           { std::cout << "3" << std::endl; }
};


template<class T> struct B : A<T> {
  void print (T a)                     { std::cout << "6" << std::endl; }
  static void print (float a)          { std::cout << "7" << std::endl; }
};

template<> void B<int>::print (int a) { std::cout << "8" << std::endl; }

int  main() {
  A<int> a;
  a.print( '1' );
}
