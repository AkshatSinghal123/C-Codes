//Inheritance
//•It is a process of acquiring features of an existing class into a new class
//•It is used for achieving reusability
//•features of base class will be available in derived class
//Basic program for inheritance
#include<iostream>
using namespace std;
class Base{
 public:
 int x;
 void show(){
  cout<<x<<endl;
 }
};
class Derived:public Base{
public:
    int y;
  void show(){
   cout<<x<<" "<<y;
  }
};
int main(){
 cout<<"Parent class: ";
 Base b;
 b.x=10;
 b.show();
 Derived d;
 cout<<"Derived Class: ";
 d.x=18;
 d.y=20;
 d.show();
}
