// https://www.geeksforgeeks.org/counting-sort/

#include <iostream>
#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main(void)
{
    int n, i;
    cin >> n;

    int arr[n];
    int count[100] = {};

    // Input of Unsorted Array
    for (i = 0; i < n; ++i)
    {
        cin >> arr[i];
        count[arr[i]]++;
    }

    // Cumulative Sum
    for (i = 1; count[i - 1] != n; ++i)
    {
        count[i] += count[i - 1];
    }

    int sortedArray[n];

    // Put element's to right place
    for (i = n - 1; i >= 0; --i)
    {
        sortedArray[--count[arr[i]]] = arr[i];
    }

    // display
    for (i = 0; i < n; ++i)
        cout << sortedArray[i] << " ";
    cout << endl;
}
