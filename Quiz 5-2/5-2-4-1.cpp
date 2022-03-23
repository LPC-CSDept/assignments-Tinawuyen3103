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