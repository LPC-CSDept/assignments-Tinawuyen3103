#include <iostream>
#include <fstream>
using namespace std;

int main()
{
ofstream ofs;
    int Employee_ID;
    string Employee_Name;
    string Department_name;
    double salary;

    ofs.open("employee.txt");
    if(!ofs){
        cerr <<"File open Error \n";
        exit(0);
    } 

    // You should repeat 3 times to write down below
//     3
// 10981011  John Computer 100000
// 10981012  Johny Network 110000
// 10981013  Johnn HR 90000

    cout << "Employee ID: ";
    cin >> Employee_ID;
    ofs << Employee_ID << endl;
    
    cout << "Employee Name: ";
    cin >> Employee_Name;
    ofs << Employee_Name << endl;
    
    cout << "Department: ";
    cin >> Department_name;
    ofs << Department_name << endl;
    
    cout << "Salary: ";
    cin >> salary;
    ofs << salary << endl; 

}