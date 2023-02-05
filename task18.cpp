#include <iostream>
using namespace std;

main()
{
    string name;
    char letter;
    int vowels = 0;
    cout << "Enter the name: ";
    getline(cin, name);
    
    for(int idx = 0; idx < name.length(); idx = idx + 1)
    {
        letter = (name[idx]);

        if(letter == 'a')
        {
            name[idx] = 'b';
        }
       else if(letter == 'b')
        {
            name[idx] = 'c';
        }
       else if(letter == 'c')
        {
            name[idx] = 'd';
        }
       else if(letter == 'd')
        {
            name[idx] = 'e';
        }
       else if(letter == 'e')
        {
            name[idx] = 'f';
        }
       else if(letter == 'f')
        {
            name[idx] = 'g';
        }
       else if(letter == 'g')
        {
            name[idx] = 'h';
        }
       else if(letter == 'h')
        {
            name[idx] = 'i';
        }
       else if(letter == 'i')
        {
            name[idx] = 'j';
        }
       else if(letter == 'j')
        {
            name[idx] = 'k';
        }
       else if(letter == 'k')
        {
            name[idx] = 'l';
        }
       else if(letter == 'l')
        {
            name[idx] = 'm';
        }
       else if(letter == 'm')
        {
            name[idx] = 'n';
        }
       else if(letter == 'n')
        {
            name[idx] = 'o';
        }
       else if(letter == 'o')
        {
            name[idx] = 'p';
        }

        else if(letter == 'p')
        {
            name[idx] = 'q';
        }
       else if(letter == 'q')
        {
            name[idx] = 'r';
        }
       else if(letter == 'r')
        {
            name[idx] = 's';
        }
       else if(letter == 's')
        {
            name[idx] = 't';
        }
       else if(letter == 't')
        {
            name[idx] = 'u';
        }
       else if(letter == 'u')
        {
            name[idx] = 'v';
        }
       else if(letter == 'v')
        {
            name[idx] = 'w';
        }
       else if(letter == 'w')
        {
            name[idx] = 'x';
        }
       else if(letter == 'x')
        {
            name[idx] = 'y';
        }
       else if(letter == 'y')
        {
            name[idx] = 'z';
        }
       else if(letter == 'z')
        {
            name[idx] = 'a';
        }    
       cout << name[idx];
    }
  
        
    
}