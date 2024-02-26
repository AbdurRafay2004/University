/*
Question/
https://www.hackerearth.com/practice/algorithms/sorting/bubble-sort/practice-problems/algorithm/the-best-player-1/
*/

//which fans to meet
#include <bits/stdc++.h>
using namespace std;
struct fan
{
    string Name;
    int FanQuotient;
};

bool compare(fan f1, fan f2)
{
    if (f1.FanQuotient > f2.FanQuotient)
        return true;
    else if (f1.FanQuotient == f2.FanQuotient)
    {
        return f1.Name < f2.Name;//lexicographical comparisn on strings
    }
    else
        return false;
}

void bubbleSort(fan fans[], int N)
{
    bool swapped;
    for (int i = 0; i < N - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < N - i - 1; j++)
        {
            if (compare(fans[j + 1], fans[j]))
            {
                swap(fans[j], fans[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

int main()
{
    int N, T;
    cin >> N >> T;
    fan fans[N];
    for (int i = 0; i < N; i++)
    {
        cin >> fans[i].Name >> fans[i].FanQuotient;
    }
    bubbleSort(fans, N);
    for (int i = 0; i < T; i++)
    {
        cout << fans[i].Name << endl;
    }
    return 0;
}
