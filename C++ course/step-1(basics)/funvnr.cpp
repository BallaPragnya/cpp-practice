#include<iostream>
using namespace std;
void swapv(int a,int b){
int temp=a;
a=b;
b=temp;

} 
void swapr(int &a,int &b){
int temp=a;
a=b;
b=temp;


}

int main(){
    int a=10,b=20;
    swapv(a,b);
    cout<<a<<" "<<b<<endl;
    swapr(a,b);
    cout<<a<<" "<<b<<endl;
}