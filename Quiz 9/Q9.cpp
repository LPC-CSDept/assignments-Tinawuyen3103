#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct EmployeeInfos {
    int ID;
    string firstname, lastname;
    int salary;
    string DepName;
    string month;
    int day, year;
};
 
int main() {
    EmployeeInfos e;
    ofstream ofs;
    
    cout << "Enter employee ID : ";
    cin >> e.ID;
    cout << "Enter the first name and last name of employee : ";
    cin >> (e.firstname) >> (e.lastname);
    cout << "Enter salary of employee : ";
    cin >> e.salary;
    cout << "Enter working department name : ";
    cin >> e.DepName;
    cout << "Enter the date which the employee starts to work in this company(Mon Day Year) : ";
    cin >> e.month >> e.day >> e.year;
    
    ofs.open("employee.txt");
    if (!ofs){
        cout << "File Open Error\n";
        exit(0);
    }
        ofs << e.ID << " " << e.firstname << " " << e.lastname << " " << e.salary << " " << e.DepName << " " << e.month << " " << e.day << " " << e.year << endl;
    ofs.close();
     
    // Printing employee details 
    cout << "\n*** Employee Details ***" << endl;
    cout << "Name : " << e.firstname << " " << e.lastname << endl << "Salary : " << e.salary << endl;
    cout << "Employee ID : " << e.ID << endl << "Department : " << e.DepName;
    return 0;
}
