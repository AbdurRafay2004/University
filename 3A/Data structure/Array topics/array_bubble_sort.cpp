#include <bits/stdc++.h>
using namespace std;

//using multiplication and division
void swap_type1(int &a, int &b){//pass by reference using &
    a = a*b;
    b = a/b;
    a = a/b;
}
//using addition and subtraction
void swap_type2(int &a, int &b){
    a = a+b;
    b = a-b;
    a = a-b;
}
//using std::swap fucntion
void swap_type3(int &a, int &b){
    swap(a,b);
}

//using third variable
void swap_type4(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    //bubble sort

    array<int, 10>arr = {5, 2, 10, 8, 1, 6, 7, 9, 4, 3};//declaring an array 'arr'
    //print
    for(int i=0; i<10; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    int count = 0;
    for(int j = 0; j<9; j++){
        bool swapable = false;
        for(int i = 0; i < 9; i++){
            if(arr[i]>arr[i+1]){
                swapable = true;
                swap_type2(arr[i], arr[i+1]);//function call
            }
        }

        if(!swapable){
             break;
             }
        count += 1;
    }

    for(int i=0; i<10; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    cout<< "total rotation of the loop: "<<count<<endl;


    return 0;
}