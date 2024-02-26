/*
Question from/
https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/min-max-difference/

*/


#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int t;//testcase or test rotations
    cout<< "Enter testcase times: ";
    cin >> t;
    while (t--)
    {
        cout<< "Enter N and M using space in between: ";
        int n;//array size
        cin >> n;
        int m;//just an integer
        cin >> m;

        cout<<"Enter the elments of N (using space in between):"<<" ";
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];//getting the array
        }
        int diff = n - m;

        //bubble sorting the unorganized array
        for (int i = 0; i < n - 1; i++)
        {
            bool swapped = false;
            for (int j = 0; j < n - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }
            if (swapped == false)
            {
                break;
            }
        }
        int maxsum = 0;
        int minsum = 0;
        for (int i = 0; i < diff; i++)//minsum
        {
            minsum = minsum + arr[i];
        }
        for (int i = n - 1; i >= n - diff; i--)//maxsum
        {
            maxsum = maxsum + arr[i];
        }

        int d = (maxsum - minsum);
        cout <<"Differnce between Maximum sum and Minimum sum: "<<d << endl;
    }
}