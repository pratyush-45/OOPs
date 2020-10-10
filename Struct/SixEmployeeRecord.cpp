/* To create a Structure to store six Employee records
and print about those whose salary is greater than 20000 */
#include <iostream>
using namespace std;

typedef struct Employee
{
    int empid, salary;
    string name;
    void accept();
    void display();
}emp;

void emp:: accept()
{
    cout<<"Enter Employee ID : \n";
    cin>>empid;
    cout<<"Enter Employee Name : \n";
    cin>>name;
    cout<<"Enter Employee Salary : \n";
    cin>>salary;
}

void emp:: display()
{
    cout<<"Employee ID : "<<empid<<endl;
    cout<<"Employee Name : "<<name<<endl;
    cout<<"Employee Salary : "<<salary<<endl;
}

int main()
{
    emp e1,e2, e3, e4, e5, e6;
    e1.accept();
    e2.accept();
    e3.accept();
    e4.accept();
    e5.accept();
    e6.accept();

    if(e1.salary > 20000)
    e1.display();
    if(e2.salary > 20000)
    e2.display();
    if(e3.salary > 20000)
    e3.display();
    if(e4.salary > 20000)
    e4.display();
    if(e5.salary > 20000)
    e5.display();
    if(e6.salary > 20000)
    e6.display();
    
}