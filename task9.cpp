#include <iostream>
using namespace std;

main()
{
    string name;

    cout << "Enter the name: ";
    getline(cin,name);

    int counter = 0;



    while(name[counter] != '\0')
    {
        
        counter = counter + 1;
    }

    if(counter % 2 == 0)
    {
        cout << "true";
    }

    else
    {
        cout << "false";
    }


}