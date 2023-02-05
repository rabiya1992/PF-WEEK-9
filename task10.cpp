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

     for(int idx = counter - 1; idx >= 0 ; idx = idx - 1)
     {
        cout << name[idx];
     }


}