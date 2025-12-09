#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int b = 20;
    int temp;
  cout << "Before interchange: a = " << a << ", b = " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "After interchange: a = " << a << ", b = " << b << endl;
  return 0;
}