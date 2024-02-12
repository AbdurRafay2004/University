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
    void growthUpdate(int i){
        for(int j = i; j>0; j-- ){
            height = height+ 3;//3 mt per year
        }
        if(variety=="Gopalbhog"){
        number_of_mangoes = height*10;
        }
        else if(variety == "Amrapali"){
            number_of_mangoes = height*15;
        }
    }
};

int main(){
    MangoTree mangoTree1("Gopalbhog");
    MangoTree mangoTree2("Amrapali");
    cout<<"Updated details after 5 years:"<<endl;
    //Details of the mango tree
    cout<<"================================"<<endl;
    mangoTree1.growthUpdate(5);
    cout<<"Mango Tree Details:"<<" ";
    cout<<"Variety: "<<mangoTree1.variety<<endl;
    cout<<"Height: "<<mangoTree1.height<<" meter(s)"<<endl;
    cout<<"Number of mangoes on the trees:"<<" "<<mangoTree1.number_of_mangoes<<endl;
    cout<<"================================"<<endl;

    //Details of the mango tree
    mangoTree2.growthUpdate(5);
    cout<<"Mango Tree Details:"<<" ";
    cout<<"Variety: "<<mangoTree2.variety<<endl;
    cout<<"Height: "<<mangoTree2.height<<" meter(s)"<<endl;
    cout<<"Number of mangoes on the trees:"<<" "<<mangoTree2.number_of_mangoes<<endl;
    cout<<"================================"<<endl;
    return 0;
}