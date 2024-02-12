#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class MangoTree{
    public:
    string variety;
    double height;
    int number_of_mangoes;

    MangoTree(string v){
        variety = v;
        height = 1;
        number_of_mangoes = 0;
    }
};

int main(){
    MangoTree mangoTree1("Gopalbhog");
    MangoTree mangoTree2("Amrapali");
    //Details of the mango tree
    cout<<"================================"<<endl;
    cout<<"Mango Tree Details:"<<" ";
    cout<<"Variety: "<<mangoTree1.variety<<endl;
    cout<<"Height: "<<mangoTree1.height<<" meter(s)"<<endl;
    cout<<"Number of mangoes on the trees:"<<" "<<mangoTree1.number_of_mangoes<<endl;
    cout<<"================================"<<endl;

    //Details of the mango tree
    cout<<"Mango Tree Details:"<<" ";
    cout<<"Variety: "<<mangoTree2.variety<<endl;
    cout<<"Height: "<<mangoTree2.height<<" meter(s)"<<endl;
    cout<<"Number of mangoes on the trees:"<<" "<<mangoTree2.number_of_mangoes<<endl;
    cout<<"================================"<<endl;
    return 0;
}