#include <bits/stdc++.h>
using namespace std;

///C style array
int array_insertion_type1(){
    //insert 20 at index 1
    int arr[] = {1,2,3,4,5};//C style array

    for(int i=4;i>0;i--){
        arr[i+1] = arr[i];
    }
    arr[1] = 20;

    //print the final array
    for(int i = 0; i<6; i++) cout<<arr[i]<<" ";

    ///disadvantage - buffer overflow
}

///Using vector instead of array
int array_insertion_type2(){
    //insert 20 at index 1 

    //using vector instead of array
    vector<int> arr = {10,11,12,13,14,15};

    arr.insert(arr.begin() + 1, 20);//vector insert method

    //prints the final vector
    for(int i = 0; i<6; i++) cout<<arr[i]<<" ";
}

int array_insertion_type3(){
    //insert 30 at index 2

    int* arr;
    arr = new int[10];
    for(int i = 0; i< 10; i++){
        arr[i] = i +1;
    }

    for(int i = 10; i>2; i--){
        arr[i+1] = arr[i];
    }
    arr[2]=30;
    for(int i = 0; i<=10; i++) cout<<arr[i]<<" ";
    
}
int main(){
    
    array_insertion_type1();
    cout<<endl;
    array_insertion_type2();
    cout<<endl;
    array_insertion_type3();

    return 0;
}