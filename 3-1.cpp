#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int classA;
    int classB;
    int classC; 

    int priceA = 15;
    int priceB = 12;
    int priceC = 9; 

    cout << "Enter number of tickets sold for Class A ";
    cin >> classA; 

    cout << "Enter number of tickets sold for Class B ";
    cin >> classB; 

    cout << "Enter number of tickets sold for Class C ";
    cin >> classC; 

    int total = (classA*priceA)+(classB*priceB)+(classC*priceC);
    cout << "Total price for ticket sold $" << total << endl;
}
