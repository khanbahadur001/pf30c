#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    double a = 3, b = 4, c = 5;
    double s = (a + b + c) / 2.0;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
     
    cout << "Sides: a=" << a << " b=" << b << " c=" << c << endl;
    cout << "Area: " << area << endl;
     
    return 0;
}