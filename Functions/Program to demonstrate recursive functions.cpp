//Program to demonstrate recursive functions
#include<iostream>
using namespace std;
int fun(int x){
 if(x>0){
  fun(x-1);
  cout<<x<<endl;
 }
}
int main(){
 fun(5);
 return 0;
}
