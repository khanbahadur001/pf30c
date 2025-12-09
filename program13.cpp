#include <iostream>
using namespace std;
 
#define PI 3.1417
 
int main() {
    double radius = 5;  
     
    double area = PI * radius * radius;
    cout << "Enter radius: " << radius << endl;
    cout << "Area of circle: " << area << endl;
     
    return 0;
}