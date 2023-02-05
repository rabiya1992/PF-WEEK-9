#include <iostream>
using namespace std;

main()
{
    int number;
    float sum = 0.0;
    float average; 

    cout << "Enter a number: ";
    cin >> number;

    int arr[number];
    
  

    for(int idx = 0; idx < number; idx = idx + 1)
    {
        cout << "Enter element: ";
        cin >> arr[idx];
        sum = sum + arr[idx];
    }

    
      average = sum / number;
     cout << "Average of " << number << " Numbers is = " << average <<endl;

}