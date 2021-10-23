//Program to Demonstrate Pointer Arithmetic
#include <iostream>
using namespace std;
int main ()
{
  int A[5] = { 2, 4, 6, 8, 10 };
  int *p = A, *q = &A[4];
  cout << *p << endl;//2
  cout << endl;
  p++;
  cout << *p << endl;//4
  cout << endl;
  p--;
  cout << *p << endl;//2
  cout << endl;
  cout << p << endl;//0x61fdf0
  cout << p + 2 << endl;//0x61fdf8
  cout << endl;
  cout << *p << endl;//2
  cout << *(p + 2) << endl;//6
  cout << endl;
  cout << q - p << endl;//4(Tells position of q from p)
  cout << p - q << endl;//-4(Tells position of p from q)
  return 0;
}
