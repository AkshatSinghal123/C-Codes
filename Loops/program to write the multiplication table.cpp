//Program to write the multiplication table
#include <iostream>
using namespace std;
int main()
{
  int i,a;
  cin>>a;
  for(i=1;i<=10;i++)
  {
    cout<<a<<" x "<<i<<" = "<<(a*i)<<endl;
  }
  return 0;
}
