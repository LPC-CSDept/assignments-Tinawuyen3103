#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a = 28;
    int b = 32;
    int c = 37;
    int d = 24;
    int e = 33;
    int sum = a + b + c + d + e;
    float average = sum/5;
    cout << "The sum is:" << sum << endl;
    cout << "The average is:" << setprecision(3) << average;
    return 0;
}
