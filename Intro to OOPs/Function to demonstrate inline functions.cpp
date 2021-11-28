//Inline Functions
#include<iostream>
using namespace std;
class Test{
 public:
 void fun1(){
   cout<<"inline"<<endl;
 }
 void fun2();
 inline void fun3();
};
void Test::fun2(){
 cout<<"non-inline"<<endl;
}
void Test::fun3(){
 cout<<"inline";
}
int main(){
 Test t;
 t.fun1();
 t.fun2();
 t.fun3();
}
