//Function to add two numbers
#include<iostream>
using namespace std;
int add(int a,int b){
   int c=a+b;
   return c;
}
int main(){
 int num1,num2;
 cout<<"Enter two nos for which you want to find the sum ";
 cin>>num1>>num2;
 cout<<"The sum of two numbers is:- "<<add(num1,num2);
 return 0;
}
