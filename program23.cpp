#include <iostream>
using namespace std;
 
#define PI 3.1417
 
int main() {
    double radius = 5;
     
    double area = PI * radius * radius;
    double circumference = 2 * PI * radius;
     
    cout << "Enter radius: " << radius << endl;
    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;
     
    return 0;
}