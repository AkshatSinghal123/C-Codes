//program to demonstrate operator overloading
//•Operators can be overloaded on our classes
//•We can define operator for our own classes
//•Operators can be overloaded using member functions or friend functions
//•Global functions can also access private and protected members of an object if they are declared as friend inside a class
#include<iostream>
using namespace std;
class Complex{
 private:
 int real;
 int img;
 public:
 Complex(int r=0,int i=0){
   real=r;
   img=i;
 }
 void display(){
  cout<<real<<"+i"<<img<<endl;
   }
Complex operator+(Complex x){
 Complex temp;
 temp.real=real+x.real;
 temp.img=img+x.img;
 return temp;
}
};
int main(){
 Complex c1(3,4);
 Complex c2(7,7);
 Complex c3=c1+c2;
 c3.display();
}
