#include <iostream>

using namespace std;

int main()
{
    int weight;
    double distance;
    cout << "Enter the weight and distance: " << endl;
    cin >> weight >> distance;
    
    double costdistance1 = distance*1.10;
    double costdistance2 = distance*2.20;
    double costdistance3 = distance*3.70;
    double costdistance4 = distance*4.80;
    
    if (weight > -1 && distance >= 500){
        if (weight > 0 && weight <= 2)
        cout << "The total cost for " << weight << " kg is $" << costdistance1 <<endl;
        
        else if (weight > 2 && weight <= 6)
        cout << "The total cost for " << weight << " kg is $" << costdistance2 <<endl;
        
        else if (weight > 6 && weight <= 10)
        cout << "The total cost for " << weight << " kg is $" << costdistance3 <<endl;
        
        else if (weight > 10 && weight <= 20)
        cout << "The total cost for " << weight << " kg is $" << costdistance4 <<endl;
        
        else
        cout << "Overweight" << endl;
        
    }


    return 0;
}