#include <iostream>
using namespace std;
int main() {
 int hours = 2, minutes = 30, seconds = 45;
 
 int totalSeconds = (hours * 3600) + (minutes * 60) + seconds;
 
 cout << "Time: " << hours << "h " << minutes << "m " << seconds << "s" << endl;
 cout << "Total seconds: " << totalSeconds << endl;
 
 return 0;
}