#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main() 
{
   int max;
   max = 99;
   srand(time(0));
   int num1 = rand()%max;
   cout << "The random number is: "<< num1;
   int num2 = rand()%max;
   cout << "\nThe random number is: "<< num2;
   int num3 = rand()%max;
   cout << "\nThe random number is: "<< num3;
   
   int sum = num1 + num2 + num3;
   cout << "\nThe sum is : " << sum << endl;
   
   double average = sum/3;
   cout << "The average is : " << fixed << setprecision(2) << average;
   return 0;
   
}
