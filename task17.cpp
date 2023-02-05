#include <iostream>
using namespace std;

main()
{
    float amount;
    cout << "Enter the due amount of the item: ";
    cin >> amount;

    float arr[4];
    float sum = 0;

    for(int idx = 0; idx < 4; idx = idx + 1)
    {
      float price = 0;

      if(idx == 0)
      {
        cout << "Enter quarters: ";
        cin >> arr[0];
        price = 0.25 * arr[0];
      }
      if(idx == 1)
      {
        cout << "Enter dimes: ";
        cin >> arr[1];
        price = 0.10 * arr[1];
      }

      if(idx == 2)
      {
        cout << "Enter nickles: ";
        cin >> arr[2];
        price = 0.05 * arr[2];
      }

      if(idx == 3)
      {
        cout << "Enter pennies: ";
        cin >> arr[3];
        price = 0.01 * arr[3];
      }

       sum = price + sum;
    }

    if( amount <= sum )
    {
        cout << "True";
    }

    else
    {
       cout << "False";
    }
    
}