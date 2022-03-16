#include <iostream>
#include <climits>
using namespace std;
int main() {
    
  int n = 0;
  int num = 0;
  int nthPower = 1;
  float invertnthPower = 0.0;
  int i = 0;
  
  cout << "Enter a number" << endl;
  cin >> n;
  cin.clear();
  cin.ignore(INT_MAX, '\n');
  
  if(0 < n) {
    num = n;    
  }
  else if (0 > n) {
    num = n*-1;    
  }
  else {
    
    return 0;
  }
  
  for (int i = 0; i < num; i++)
    {
        
      nthPower*=2;
      cout << nthPower << endl;
      if (n < 0) {
          invertnthPower = 1.0/nthPower;
          cout << invertnthPower << endl;
          
        }
    }  
  return 0;
  
}