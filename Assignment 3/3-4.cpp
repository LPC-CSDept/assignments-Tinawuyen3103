#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
{
    string Month1, Month2, Month3;
    double first, second, third;
    cout << "Enter the first month and rain fall " << endl;
    cin >> Month1 >> first;
    cout << "Enter the second month and rain fall " << endl;
    cin >> Month2 >> second; 
    cout << "Enter the third month and rain fall " << endl;
    cin >> Month3 >> third;
    
    cout << "The average rainfall for " << Month1 << ", " << Month2 << ", " << "and " << Month3;
    cout << ", is " << fixed << setprecision(2) << (first + second + third)/3 << endl;
    
    return 0;
}
