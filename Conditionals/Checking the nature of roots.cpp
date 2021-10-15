//Checking the nature of the root
#include<iostream>
using namespace std;
int main(){
int a,b,c,d;
cout<<"Enter the coefficients of the quadratic equation";
cin>>a>>b>>c;
d=((b*b)-(4*a*c));
if(d=0){
 cout<<"Roots are Real and Equal";
}
else if(d>0){
 cout<<"Roots are Real and Distinct";
}
else{
  cout<<"Roots are Imaginary";
 }
}
