#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <list>

using namespace std;

struct EmployeeInfos {
    int ID;
    string firstname, lastname;
    int salary;
    string DepName;
    string month;
    int day, year;
};

void ConstructStructure(EmployeeInfos employee[], int N)
{
    list<EmployeeInfos> employees;
    fstream newfile;
    newfile.open("employee.txt", ios::in);
    if (newfile.is_open()) {
        string tp;
        while (getline(newfile, tp)) {
            int i = 0;
            EmployeeInfos employee;
            size_t pos = 0;
            while ((pos = tp.find(" ")) != string::npos) {
                if (i == 0) {
                    employee.ID = stoi(tp.substr(0, pos));
                }
                else if (i == 1) {
                    employee.firstname = tp.substr(0, pos);
                }
                else if (i == 2) {
                    employee.lastname = tp.substr(0, pos);
                }
                else if (i == 3) {
                    employee.salary = stoi(tp.substr(0, pos));
                }
                else if (i == 4) {
                    employee.DepName = tp.substr(0, pos);
                }
                else if (i == 5) {
                    employee.month = tp.substr(0, pos);
                }
                else if (i == 6) {
                    employee.day = stoi(tp.substr(0, pos));
                }
                else if (i == 7) {
                    employee.year = stoi(tp.substr(0, pos));
                }
                tp.erase(0, pos + 1);
                i ++;
            }
            employees.push_back(employee);
        }
    }
        newfile.close();
}

void GreaterSalary(EmployeeInfos employees[], int N)
{

    cout << "Employees with salary higher than $100,000 are:" << endl;
    for (int i = 0; i < N; i++) {
        if (employees[i].salary > 100000) {
            cout << employees[i].firstname << " " << employees[i].lastname << endl;
        }
    }
}

void ComputerDepartment(EmployeeInfos employees[], int N)
{
    
    cout << "Employees who work in the Computer Department are:" << endl;
    for (int i = 0; i < N; i++) {
        if (employees[i].DepName == "Computer") {
            cout << employees[i].firstname << " " << employees[i].lastname << endl;
        }
    }
}
int main() {
    fstream newfile;
    int N;

    newfile.open("employee.txt", ios::out);
    if (newfile.is_open()) {
        cout << "Enter the number of employees : ";
        cin >> N;

        for (int i = 0; i < N; i++) 
        {
            EmployeeInfos e;
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
            newfile << e.ID << " " << e.firstname << " " << e.lastname << " " << e.salary << " " << e.DepName << " " << e.month << " " << e.day << " " << e.year << endl;
        }
        newfile.close();
    }
    
    EmployeeInfos e[0];
    
	ConstructStructure(e, N);
	GreaterSalary(e, N);
	ComputerDepartment(e, N);
	
	return 0;
}
