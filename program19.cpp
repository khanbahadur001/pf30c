#include <iostream>
using namespace std;
 
int main() {
    int age_years = 25;
     
    int age_months = age_years * 12;
    int age_days = age_years * 365;
     
    cout << "Age in years: " << age_years << endl;
    cout << "Age in months: " << age_months << endl;
    cout << "Age in days: " << age_days << endl;
     
    return 0;
}