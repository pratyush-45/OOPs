// To create a Structere Student and and generate student Record
#include <iostream>
using namespace std;

typedef struct Student
{
    int rollno;
    string name, course;
    float percent;
    void accept();
    void display();
}stu;

void stu:: accept()
{
    cout<<"Enter Student's Roll No : \n";
    cin>>rollno;
    cout<<"Enter Student's Name : \n";
    cin>>name;
    cout<<"Enter Student's Course : \n";
    cin>>course;
    cout<<"Enter Student's Percentage : \n";
    cin>>percent;
}

void stu:: display()
{
    cout<<"Roll Number : "<<rollno<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Course : "<<course<<endl;
    cout<<"Percentage : "<<percent<<endl;
}

int main()
{
    stu s;
    s.accept();
    s.display();
}