#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=0, arr[n], largestElement = 0, secondlargestElement = 0, thirdlargestElement = 0;
    cout<<"Enter array size: ";
    cin>>n;
    if(n<3){
        cout<<"Envalid input"<<endl;
        return 0;
        }
    cout<<"Enter array elements: "<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        if(arr[i]>largestElement){
            thirdlargestElement = secondlargestElement;
            secondlargestElement = largestElement;
            largestElement = arr[i];
        }else if(arr[i]>secondlargestElement){
            thirdlargestElement = secondlargestElement;
            secondlargestElement = arr[i];
        }else if(arr[i]>thirdlargestElement){
            thirdlargestElement = arr[i];
        }
    }
    cout<<endl;
    cout<<"Three largest elements:"<<" "<<largestElement<<", "<<secondlargestElement<<", "<<thirdlargestElement<<endl;

    return 0;
}