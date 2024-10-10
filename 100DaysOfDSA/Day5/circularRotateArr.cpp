#include <bits/stdc++.h>
void rotate(vector<int> &arr, int n)
{
    if (n <= 1)
        return;
    int last = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    { // solution 1
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}

// solution 2

#include <bits/stdc++.h>
void rotate(vector<int> &arr, int n)
{

    int high = n - 1;
    swap(arr[0], arr[high]);
    int low = 1;
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
    }
}