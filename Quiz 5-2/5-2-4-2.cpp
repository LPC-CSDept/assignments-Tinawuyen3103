#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream ifs;
    int ID1, ID2, ID3;
    string Em_name1,Em_name2,Em_name3;
    string De_name1,De_name2, De_name3;
    double salary1, salary2, salary3;
    double sum, avg;
    double tsum, tavg;

    ifs. open("employee.txt");

    // When you read the string value from a file,
    // You should keep the same order as it is written in that file.
    // In your file, first string is ID, and then name, dept, and salrary.

    // Instead of cin, you should use "ifs" as you declcared at line 15.
    // ifs >> ID1 >> Em_name1 >> De_name1 >> salary ;
    
    cout << "Employee_ID 1: ";
    cin >> ID1;
    cout << "Employee_ID 2: ";
    cin >> ID2;
    cout << "Employee_ID 3: ";
    cin >> ID3;

    cout << "Employee name 1: ";
    cin >> Em_name1;
    cout << "Employee name 2: ";
    cin >> Em_name2;
    cout << "Employee name 3: ";
    cin >> Em_name3;

    cout << "Department name 1: ";
    cin >> De_name1;
    cout << "Department name 2: ";
    cin >> De_name2;
    cout << "Department name 3: ";
    cin >> De_name3;

    cout << "Salary 1: ";
    cin >> salary1;
    cout << "Salary 2: ";
    cin >> salary2;
    cout << "Salary 3: ";
    cin >> salary3;


    if (!ifs){
        cerr <<"File open error \n";
        exit(0);

    }
    sum = salary1+ salary2+ salary3;
    avg = sum/2;
    tsum +=sum;

    cout << "Total sum :\t"<< tsum <<"\t" <<"Average:\t"<< avg <<endl;
    
}