#include<iostream>
using namespace std;
int main(){
    int num;
    int revnum=0;
    int rem=0;
    cout<<"Enter your number"<<endl;
    cin>>num;
    while(num>0){
        rem=num%10;
        num=num/10;
        revnum=revnum*10+rem;
    }
    cout<<revnum<<endl;
}