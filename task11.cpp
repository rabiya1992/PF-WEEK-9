#include <iostream>
using namespace std;

main()
{
    string name;
    char letter;

    cout << "Enter the name: ";
    getline(cin,name);

    cout << "Enter the letter: ";
    cin >> letter;

    int counter = 0;



    while(name[counter] != '\0')
    {
        
        counter = counter + 1;
    
    }

    if(name[counter - 1] == letter)
    {
        cout << "true";
    }

    else
    {
        cout << "false";
    }

}