#include <iostream>
using namespace std;

int main()
{
int a;
  cout<<"Enter the quantity"<<endl;
  cin>>a;
  double cost1 = (99*a)*(0.8);
  double cost2 = (99*a)*(0.7);
  double cost3 = (99*a)*(0.6);
  double cost4 = (99*a)*(0.5);
  if (a > -1) {
    
    if(a > 0 && a <= 19)
    cout << "The total cost is $" << cost1 << endl;

    else if (a > 19 && a <= 49)
    cout << "The total cost is $" << cost2 << endl;

    else if (a > 49 && a <= 99)
    cout << "The total cost is $" << cost3 << endl;
  
    else
    cout << "The total cost is $" << cost4 << endl;

}

  return 0;
}