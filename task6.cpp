#include <iostream>
using namespace std;

main()
{
    int size;
    int number;
    int product;
    
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

   for(int idx = 0; idx < size ; idx = idx + 1)
   {
     product = arr[idx] * number;
     cout << product;
   }
 
     
  


}