#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of element: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int largest = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }
    cout << "Largest number is: " << largest;
    return 0;
}