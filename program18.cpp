#include <iostream>
using namespace std;
 
int main() {
    double vi = 10.0;
    double t = 5.0;
    double a = 2.0;
     
    double s = vi * t + 0.5 * a * t * t;
     
    cout << "vi = " << vi << ", t = " << t << ", a = " << a << endl;
    cout << "s = " << s << endl;
     
    return 0;
}