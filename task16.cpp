#include <iostream>
using namespace std;

main()
{
    string name;
 

    cout << "Enter the name: ";
    getline(cin,name);

  

    for(int idx = 0; idx < name.length(); idx = idx + 1)
   { 
        if(name[idx] == 'a' || name[idx] == 'e' || name[idx] == 'i' || name[idx] == 'o' || name[idx] == 'u' )
   {
       cout << "";

   }
  
   else
   {
     cout << name[idx];
   }

}

 
}