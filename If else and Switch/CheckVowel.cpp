// To check if a given character is a vowel or not
#include <iostream>
using namespace std;

bool checkVowel(char c)
{
    switch (c)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u': return true;
        break;
    
    default:  return false;
        break;
    }
}

int main ()
{
    char c;
    cout<<"Enter a Character \n";
    cin>>c;

    if(checkVowel(c))
    cout<<"It is a Vowel";
    else 
    cout<<"It is not a Vowel";
}