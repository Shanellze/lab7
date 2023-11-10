#include <iostream>
#include <string>
using namespace std;

int main(){

    int size;

    struct employeeDetails {
        string fname ;
        string lname;
        int ID;
        string email;
        string phoneNum;
        int salary;
        employeeDetails* manager;
    };

    cout << "Number of staff: ";
    cin >> size;
    cout << "\n";
    employeeDetails* EmployeeList = new employeeDetails[size];

    for (int i=0; i<size; i++){
        cout << "First name: ";
        cin >> EmployeeList[i].fname;
        cout << "Last name: ";
        cin >> EmployeeList[i].lname;
        cout << "Email: ";
        cin >> EmployeeList[i].email;
        cout << "Phone number: ";
        cin >> EmployeeList[i].phoneNum;
        cout << "Salary: ";
        cin >> EmployeeList[i].salary;
        EmployeeList[i].ID = i+1;
        cout << "\n";
    }

    cout << "ID\tName\n" ;
    for (int i = 0; i <size; i++) {
        cout << EmployeeList[i].ID << "\t" << EmployeeList[i].fname << " " << EmployeeList[i].lname << "\n";
    }

    delete[] EmployeeList;
}