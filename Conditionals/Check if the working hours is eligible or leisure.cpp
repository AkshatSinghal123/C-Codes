//Check if the working hours is eligible or leisure
#include<iostream>
using namespace std;
int main(){
 int hours;
 cout<<"Enter the hours(24-hour format)";
 cin>>hours;
 if(hours>=9 && hours<=18){
   cout<<"Eligible hours";
 }
 else{
   cout<<"leisure hours";
 }
}
