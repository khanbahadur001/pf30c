#include <iostream>
using namespace std;
int main() {
    int a = 15, b = 25;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    int temp = a;
    a = b;
    b = temp;     
    cout << "After swap: a = " << a << ", b = " << b << endl;
    return 0;
}