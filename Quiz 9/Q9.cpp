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

void ConditionedEmployees(EmployeeInfos e[], int N) {
    for (int i = 0; i < N; i++)
    {
        if (e[i].salary > 100000)
        cout << "The employee with salary higher than $100,000 are : " << e[i].firstname << " " << e[i].lastname;
        if (e[i].DepName == "Computer")
        cout << "The employee who works in the Computer Department are : " << e[i].firstname << " " << e[i].lastname;
    }
}
 
int main() {
    EmployeeInfos e;
    ofstream ofs;
    int N;
    
    ofs.open("employee.txt");
    if (!ofs){
        cout << "File Open Error\n";
        exit(0);
    }
    
    cout << "Enter the number of employees : ";
    cin >> N;
    
    for (int i = 0; i < N; i++) 
    {
    cout << "Enter employee ID " << i + 1 << ": ";
    cin >> e.ID;
    cout << "Enter the first name and last name of employee with the ID of " << e.ID << ": ";
    cin >> (e.firstname) >> (e.lastname);
    cout << "Enter salary of employee : ";
    cin >> e.salary;
    cout << "Enter working department name : ";
    cin >> e.DepName;
    cout << "Enter the date which the employee starts to work in this company(Mon Day Year) : ";
    cin >> e.month >> e.day >> e.year;
    ofs << e.ID << " " << e.firstname << " " << e.lastname << " " << e.salary << " " << e.DepName << " " << e.month << " " << e.day << " " << e.year << endl;
    }
        ofs.close();
     
    // Printing ConditionedEmployees
    
    return 0;
}
