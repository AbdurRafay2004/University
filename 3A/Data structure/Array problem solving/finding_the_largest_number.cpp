#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 0,arr[n], largestElement = 0;
    
    cout<<"Enter array size: ";
    cin >> n;
    cout<<endl;
    //input array elements
    cout<<"Enter array elements: "<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>largestElement) largestElement = arr[i];
    }
    cout<<endl;

    cout<<"Largest element:"<<" "<<largestElement<<endl;

    return 0;
}