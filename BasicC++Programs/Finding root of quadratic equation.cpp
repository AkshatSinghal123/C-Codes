#include<iostream>
#include<math.h>
using namespace std;
int main(){
 int r1,r2,b,a,c;
 cout<<"Enter the coefficients of a quadratic equation(a,b,c) of the form ax^2+bx+c"<<endl;
 cin>>a>>b>>c;
 r1=((-b+sqrt(b*b-4*a*c))/2*a);
 r2=((-b-sqrt(b*b-4*a*c))/2*a);
 cout<<"Roots of the equation is "<<r1<<" "<<r2;
}
