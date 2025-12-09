#include <iostream>
using namespace std;
 
int main() {
    int age_years;
     
    cout << "Enter age in years: ";
    cin >> age_years;
     
    int age_months = age_years * 12;
     
    cout << "Age in months: " << age_months << endl;
     
    return 0;
}