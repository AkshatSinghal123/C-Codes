//Static variables : They have local scope but remain in memory thru out the execution of program b.
  //created in code section b
  //history - sensitive
#include<iostream>
using namespace std;
void fun ()
{
  static int v = 0;
  int a = 10;
   v++;
  cout << a <<" "<<v<<endl;
}
int main ()
{
  fun ();
  fun ();
  fun ();
}
