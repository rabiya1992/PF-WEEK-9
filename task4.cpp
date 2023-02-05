#include <iostream>
using namespace std;

main()
{
    int size;
    cout << "Enter number: ";
    cin >> size;

    int arr[size];

   for(int idx = 0; idx < size ; idx = idx + 1)
  {
    cout << "Enter element: ";
    cin >> arr[idx];
    
    
  }

     for(int idx = size-1; idx >= 0 ; idx = idx - 1)
  {
    cout << arr[idx] << " ";
  }


}