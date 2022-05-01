#include <iostream>
#include <cmath>
using namespace std;
int main() {
    
    int begin, end;
    int i;
    
    cout << "Please input the range: " << endl;
    cin >> begin >> end;
    
    if (begin > 0 && end <= 1300)
    
    for (i = begin; i < end; i *= 2)
  {
      cout << i << endl;
  }
  
  else if (begin < 0 || end < 2)
  cout << "Not Found" << endl;
  
  else if (begin < end)
  cout << "Not Found" << endl;
  
  return 0;
}