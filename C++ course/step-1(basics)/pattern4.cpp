#include<iostream>
using namespace std;
int main(){
    int n=3;
    //upper pyramid
    for(int j=1;j<=n;j++){
    //space1
    for(int k=1;k<=n-j;k++){
        cout<<" ";
    }
    //star1
    cout<<"*";
    if(j>1){
        //midspace
    for(int p=1;p<=2*j-3;p++){
    cout<<" ";
    }
    cout<<"*";
    }
    cout<<endl;
    }
    //lower pyramid
    for(int i=n-1;i>=1;i--){
    //space 1
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    //star1
    cout<<"*";
    //middle spaces
    if(i>1){
     for(int k=1;k<=2*i-3;k++){
        cout<<" ";
     }
     cout<<"*";
    }
    cout<<endl;
    }
    
}