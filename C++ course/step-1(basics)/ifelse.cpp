#include <iostream>
using namespace std;

int main(){
    int unit,bill;
    cout<<"enter the units"<<endl;
    cin>>unit;
    if(unit<=100 && unit>0){
       bill= unit*5;
    }
    else if(unit<=101&&unit<=200){
        bill=unit*7;

    }
    else{
       bill=unit*10;
    }
    if(bill<100){
        cout<<"the bill is "<<bill<<endl;
    }
    else{
        bill=bill+0.1*bill;
        cout<<"the bill is"<<bill<<endl;
    }
    }
