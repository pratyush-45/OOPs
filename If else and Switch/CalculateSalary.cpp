// To calculate salary of an employee
#include <iostream>
using namespace std;

int main()
{
    float salary, TA, DA, grossSalary;
    TA = 0.0;
    DA = 0.0;
    cout<<"Enter the Salary \n";
    cin>>salary;

    if (salary > 0 || salary < 10000.0){
        TA = 0.1 * salary;
        DA = 0.05 * salary;
    }
    else
    {
        TA = 0.12 * salary;
        DA = 0.06 * salary;
    }
    grossSalary = salary + TA + DA;
    cout<<"Gross Salary is Rs "<<grossSalary;
}