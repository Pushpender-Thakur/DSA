// Selection Sort
// https://www.geeksforgeeks.org/selection-sort/

#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int i, j, min;

    i = 0;

    while (i < n - 1)
    {
        j = i + 1;
        min = i;
        while (j < n)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            j++;
        }

        swap(arr[i], arr[min]);
        i++;
    }

    for (i = 0; i < n; ++i)
        cout << arr[i] << " ";

    cout << endl;
}