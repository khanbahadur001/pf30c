#include <iostream>
using namespace std;
 
int main() {
    int eng = 85, math = 92, sci = 78, urdu = 88, isl = 90;
     
    int total = eng + math + sci + urdu + isl;
    double average = total / 5.0;
     
    cout << "Marks: Eng=" << eng << " Math=" << math << " Sci=" << sci 
         << " Urdu=" << urdu << " Isl=" << isl << endl;
    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
     
    return 0;
}