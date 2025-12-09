#include <iostream>
using namespace std;
 
int main() {
    const double PI = 3.1417;
    double radius, height;
     
    cout << "Enter radius: ";
    cin >> radius;
    cout << "Enter height: ";
    cin >> height;
     
    double volume = PI * radius * radius * height;
    cout << "Volume of cylinder: " << volume << endl;
     
    return 0;
}