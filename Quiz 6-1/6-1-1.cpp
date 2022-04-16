#include<iostream>
using namespace std;
int main()
{
    int num1 = 0, num2 = 0;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;
    swap(num1, num2);

    float fl1 = 0, fl2 = 0;
    cout << "Enter two float numbers: " << endl;
    cin >> fl1 >> fl2;
    swap(fl1, fl2);

    cout << "Num1 is: " << num1 << "Num2 is: " << num2 << endl;
    cout << "Float1 is: " << fl1 << "Float2 is: " << fl2 << endl;

}
void swapTwoValues(int num1, int num2)
{
    int a;
    a = num1;
    num1 = num2;
    num2 = a;
   
}
void swapTwoValues(float fl1, float fl2)
{
    float a;
    a = fl1;
    fl1 = fl2;
    fl2 = a;
}