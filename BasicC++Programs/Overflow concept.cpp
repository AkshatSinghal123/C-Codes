//Overflow:- if the value is more than capacity then it will take the value from the begining
#include <iostream>
using namespace std;
int main()
{
char a=128;
 cout<<(int)a<<endl;//-128
char b=127;
 b++;
 cout<<(int)b<<endl;//-128
char c=-129;
 cout<<(int)c<<endl;//127
char d=-128;
 d--;
 cout<<(int)d<<endl;//127
int e=INT_MAX;
 e++;
 cout<<(int)e<<endl;//-2147482648
return 0;
}
