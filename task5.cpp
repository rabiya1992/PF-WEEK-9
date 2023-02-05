#include <iostream>
using namespace std;

main()
{
    int size;
    int number;
    cout << "Enter the range: ";
    cin >> size;
    cout << "Enter the number: ";
    cin >> number;
 

    int arr[size];

   for(int idx = 0; idx < size ; idx = idx + 1)
  {
    cout << "Enter element: ";
    cin >> arr[idx];
  }
   
   bool flag = false;

   for(int idx = 0; idx < size ; idx = idx + 1)
   {
     if(arr[idx] == number)
     {
        flag = true;
        break;
     }
   }
     
     if(flag == true)
     {
        cout << "Number found." <<endl;
     }

     else
     {
        cout << "Number does not exist." <<endl;
     }


}