#include<iostream>
using namespace std;
int main(){
    int a,b,operation;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    cout<<"enter 1 for +,2 for -,3 for * and 4 for /"<<endl;
    cin>>operation;
    switch(operation){
        case 1:{
            cout<<"sum is"<<a+b;
        break;
        }
        case 2:{
            cout<<"difference is"<<a-b;
        break;
        }
        case 3:{
            cout<<"multiplication is "<<a*b;
        break;
        }
        case 4:{
            cout<<"division is"<<a/b;
        break;
        }
        default:
        cout<<"invalid operator"<<endl;
    }
}