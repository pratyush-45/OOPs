// To create a Structere Employee and store Employee Record
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
    emp e;
    e.accept();
    e.display();
}