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

void OpenFiles(EmployeeInfos Files)
{
    int N;
    int ID;
    string firstname, lastname;
    int salary;
    string DepName;
    string month;
    int day, year;
    ofstream ofs;

    ofs.open("employee.txt");
    if (!ofs){
        cout << "File Open Error\n";
        exit(0);
    }
    cout << "Enter the total number of employees: "<<endl;
    cin >> N;

    for(int i=0; i<N; i++) {
        cout << "Enter the employee's ID " << i+1 << ": " ;
        cin >> ID;
        cout << "Enter the first name and last name for" << ID << ":" ;
        cin >> firstname >> lastname;
        cout << "Enter the employee's salary " << ":";
        cin >> salary;
        cout << "Enter the employee's department name " << ":";
        cin >> DepName;
        cout << "Enter the date which the employee starts to work in this company(Mon Day Year) " << ":";
        cin >> month >> day >> year;
        ofs << ID << " " << firstname << " " << lastname << " " << salary << " " << DepName << " " << month << " " << day << " " << year << endl;
    }
    ofs.close();
}
