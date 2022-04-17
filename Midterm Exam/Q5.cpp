#include <iostream>
#include <fstream>
using namespace std;
int getInput(int &n1, int &n2);
int isSame(int n1, int n2);
int intDivision(int n1, int n2);
int fileWrite(int n1, int n2, int result);
int main()
{
    int n1, n2, result;
    getInput(n1, n2);
    result = intDivision(n1, n2);
    fileWrite(n1, n2, result);
    return 0;
}
int getInput(int &n1, int &n2)
{
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    return 0;
}
int intDivision(int n1, int n2)
{
    int result;
    if(n1 > n2){
    result = n1 / n2;}
   else
   {
    result = n2/n1;
   }
    return result;
}
int fileWrite(int n1, int n2, int result)
{
    ofstream outfile;
    outfile.open("question5.txt");
    outfile << "The division of " << n1 << " and " << n2 << " is " << result << endl;
    outfile.close();
    return 0;
}