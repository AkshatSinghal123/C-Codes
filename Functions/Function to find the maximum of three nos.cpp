//Function to find the maximum of three nos
#include<iostream>
using namespace std;
int maxim(int a,int b,int c){
   if(a>b && a>c){
     return a;}
   else if(b>c){
    return b;
   }
   else{
     return c;
   }
}
int main(){
 int num1,num2,num3;
 cout<<"Enter three nos for which you want to find the maximum ";
 cin>>num1>>num2>>num3;
 cout<<"The maximum of three numbers is:- "<<maxim(num1,num2,num3);
 return 0;
}
