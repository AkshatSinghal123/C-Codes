//Finding the maximum of three numbers
#include<iostream>
using namespace std;
int main(){
 int num1,num2,num3;
 cout<<"Enter the three numbers";
 cin>>num1>>num2>>num3;
 if(num1>num2 && num1>num3){
    cout<<"The Greatest number among three is "<<num1;
 }
 else if(num2>num3){
    cout<<"The Greatest number among three is "<<num2;
 }
 else{
    cout<<"The Greatest number among three is "<<num3;
 }
}
