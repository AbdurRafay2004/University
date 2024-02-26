#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n-1; i++) {
            bool swaped = false;
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
                swaped = true;
            }
        }
        if(!(swaped)){
            break;
        }
    }

    cout << "New array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int maxCount = 0, maxNum = arr[0], currCount = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[i-1]) {
            currCount++;
        } else {
            if(currCount > maxCount) {
                maxCount = currCount;
                maxNum = arr[i-1];
            }
            currCount = 1;
        }
    }
    if(currCount > maxCount) {
        maxCount = currCount;
        maxNum = arr[n-1];
    }

    cout << "Number " << maxNum << " occurs most frequently." << endl;
    cout << "Its index are: ";
    for(int i = 0; i < n; i++) {
        if(arr[i] == maxNum) {
            cout << i << " ";
        }
    }
    return 0;
}

