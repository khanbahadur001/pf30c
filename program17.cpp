#include <iostream>
using namespace std;
 
int main() {
    double num = 15.58971;
    int integral = (int)num;             
    double fractional = num - integral;
 
    cout << "Number: " << num << endl;
    cout << "Integral part: " << integral << endl;
    cout << "Fractional part: " << fractional << endl;
 
    return 0;
}