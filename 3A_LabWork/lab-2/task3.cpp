#include <bits/stdc++.h>
using namespace std;
class GreenPhone{
    private:
    string modelName,phoneCompany;
    int androidVersion = 0, cameras = 0;
    public:
    GreenPhone(string mn,int av, int c){
        modelName = mn;
        androidVersion = av;
        cameras = c;
        phoneCompany = "GreenPhone";
    }

    void showSpecification(){
        cout<<"Phone Company: "<< phoneCompany<<endl;
        cout<<"Model Name: "<< modelName<<endl;
        cout<<"Android Version: "<< androidVersion<<endl;
        cout<<"Number of Cameras: "<< cameras<< endl;
    }
    void updatePhone(){
        int years;
        //assigning the software update that will be given 
        if(modelName[0]=='A'){
            years = 2;
        }
        else if(modelName[0]=='M'){
            years = 3;
        }
        else if(modelName[0]=='U'){
            years = 4;
        }
    //changing the android version based on condition
        if(androidVersion<12+years){
            androidVersion++;
            cout<<"Your phone "<<phoneCompany<<" "<<modelName<< " is upgraded to Android Version: "<<androidVersion<<"."<<endl;
        }else {
            cout<<"Your Phone "<<phoneCompany<<" "<<modelName<< " is already up to date."<<endl;
        }
    }
    
};
int main(){
cout<<"1-------------------------\n";
GreenPhone p1("A1", 12, 3);
GreenPhone p2("M11", 12, 4);
GreenPhone p3("U20", 12, 5);
p1.showSpecification();
cout<<"2-------------------------\n";
p2.showSpecification();
cout<<"3-------------------------\n";
p1.updatePhone();
cout<<"4-------------------------\n";
p1.updatePhone();
p2.updatePhone();
p3.updatePhone();
cout<<"5-------------------------\n";
p1.updatePhone();
p2.updatePhone();
p3.updatePhone();
cout<<"6-------------------------\n";
p2.updatePhone();
p3.updatePhone();
cout<<"7-------------------------\n";
p1.showSpecification();
p3.showSpecification();
}