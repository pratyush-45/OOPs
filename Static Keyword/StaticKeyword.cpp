// To display the use of static keyword
#include <iostream>
using namespace std;
static int count;
class Student
{
    public :
        int rollno;
        string name;
        
    
    Student (int r, string n)
    {   
        rollno = r;
        name = n;
        ++count;
    }
};

int main ()
{
    Student S1(1, "Bruce Wayne");
    cout<<"Object No. for S1 : "<<count<<endl;

    Student S2(2, "Clark Kent"); 
    cout<<"Object No. for S2 : "<<count<<endl;

    Student S3(3, "Barry Allen");
    cout<<"Object No. for S3 : "<<count<<endl;
}