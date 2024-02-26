/*
Question from/
https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/bubble-sort-15-8064c987/?purpose=login&source=problem-page&update=github
*/

//returns the number of passes required to sort the array.
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int BubbleSort(int arr[], int n)
{
    int count = 0;
    bool swapped = true;
    while (swapped != false)
    {
        swapped = false;
        count = count + 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }
    }

    return count;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << BubbleSort(arr, n) << endl;

    return 0;
}