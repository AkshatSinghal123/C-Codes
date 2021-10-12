/*Increment Decrement operator concept
int x=2;
x++;
cout<<x;//2
------------
int x=2;
++x;
cout<<x;//3*/
#include <iostream>
using namespace std;
int main()
{
int i=5,j;
 j=i++;
 cout<<j<<" "<<i<<endl;// 5  6
int k=5,l;
 l=++k;
 cout<<l<<" "<<k<<endl;// 6   6
int a=5,b;
 b=2*++a + 2*a++;
 cout<<b<<" "<<a<<endl;;// 26  7
int c=5,d;
 d=2*c++ + 2*c++;
 cout<<d<<" "<<c<<endl;// 22  7
return 0;
}
