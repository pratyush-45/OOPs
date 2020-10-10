/* Program to input a person's age and predict their 
chances of getting infected by the corona virus */
#include <iostream>
using namespace std;

int main ()
{
    int age;
    cout<<"Enter Your Age :"<<endl;
    cin>>age;

    try 
    {
        if (age>0 && age<120)
        {
            if (age<10 || age>80)
                throw age;
            else
                throw (float)age;
        }
        else
        {
            throw 'e';
        }
    }

    catch (int i)
    {
        cout<<"You have higher chances of getting chances infected by the corona virus.\nPlease stay home if possible.";
    }
    catch (float f)
    {
        cout<<"You have low to medium chances of getting infected by the corona virus.\nPlease go out only if it's necessary.";
    }

    catch (char c)
    {
        cout<<"You do not belong to the age group of humans.\nRelax. There has been no known reporting of corona virus infection among non-humans";
    }

    catch (...)
    {
        cout<<"Exception : Unknown";
    }
}