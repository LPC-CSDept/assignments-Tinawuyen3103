#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main()
{
    int Celcius;
 
     cout << "Enter the temperature by Celcius " << endl;
     cin >> Celcius;
     
     int F = ((9*Celcius)/5) + 32;
     cout << "Celcius " << Celcius << " is " << F << " Fahrenheit" << endl;
    return 0;
}
