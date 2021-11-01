//Local vs Global variable
#include<iostream>
using namespace std;
int g=0;//global variable accessed anywhere outside the function
void fun(){
 int a=5;//local variable can only be accessed only within the block of the function
 g=g+a;
 cout<<g<<endl;
}
int main(){
 g=15;
 fun();
 g++;
 cout<<g<<endl;
}
