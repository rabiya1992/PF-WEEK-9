#include <iostream>
using namespace std;

main()
{
    int number;
    float sumOfResistors = 0;
    

    cout << "Enter a number: ";
    cin >> number;

    float arr[number];
    
  

    for(int idx = 0; idx < number; idx = idx + 1)
    {
        cout << "Enter element: ";
        cin >> arr[idx];

        sumOfResistors = sumOfResistors + arr[idx];

    }

   
   cout << sumOfResistors << " ohms ";
   
}