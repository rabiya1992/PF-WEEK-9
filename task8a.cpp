#include <iostream>
using namespace std;

main()
{
    string name;

    cout << "Enter the name: ";
    getline(cin,name);


   for(int idx = 0; name[idx] != '\0'; idx = idx + 1)
   {
    cout << "The character at index " << idx << " is " << name[idx] << endl;
   }
   


}