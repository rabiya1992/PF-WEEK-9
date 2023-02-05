#include <iostream>
using namespace std;

main()
{
    string name;
 

    cout << "Enter the name: ";
    getline(cin,name);

  

    int counter = 0;
    int idx = 0;



    while(name[counter] != '\0')
 { 
        if(name[counter] == 'a' || name[counter] == 'e' || name[counter] == 'i' || name[counter] == 'o' || name[counter] == 'u' )
   {
       idx = idx + 1;
   }
  
  counter = counter + 1;
}
 cout << idx;
 
}