#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float mealCharge = 88.67,
    tax = mealCharge * 0.0675;
    float total = mealCharge + tax;
    float tip = 0.2 * total;
    cout << "Meal cost: $" << setprecision(2) << mealCharge;
    cout << "\nTax: $" << setprecision(2) << tax;
    cout << "\nTip amount : $" << setprecision(2) << tip;
    cout << "\nTotal bill: $" << setprecision(2) << total;
    return 0;
    
}
