#include <iostream>
#include <string>
using namespace std;

int main(){
    struct employeeDetails {
        string fname ;
        string lname;
        int ID;
        string email;
        string phoneNum;
        int salary;
        employeeDetails* manager;
    };

    employeeDetails employee1; //Manager
    employeeDetails employee2;
    employeeDetails employee3;

    //Employee 1 - manager
    employee1.fname = "Sara";
    employee1.lname = "Smith";
    employee1.ID = 1;
    employee1.email = "saraSmith@email.co.uk";
    employee1.phoneNum = "07237213483";
    employee1.salary = 25000;

    //Employee 2
    employee2.fname = "John";
    employee2.lname = "doe";
    employee2.ID = 2;
    employee2.email = "johnDoe@email.co.uk";
    employee2.phoneNum = "07437233485";
    employee2.salary = 18000;
    employee2.manager = &employee1;

    //Employee 3
    employee3.fname = "Tasha";
    employee3.lname = "bell";
    employee3.ID = 3;
    employee3.email = "tashaBell@email.co.uk";
    employee3.phoneNum = "07227243489";
    employee3.salary = 20000;
    employee3.manager = &employee1;



    cout << "Name: " << employee3.fname << " " << employee3.lname << "\n";
    cout << "ID: " << employee3.ID << "\n";
    cout << "Email: " << employee3.email << "\n";
    cout << "Phone Number: " << employee3.phoneNum << "\n";
    cout << "Salary: £" << employee3.salary << "\n";
    cout << "Manager: " << employee3.manager->fname;

}