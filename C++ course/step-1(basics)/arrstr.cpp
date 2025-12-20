#include<iostream>
#include<string>
using namespace std;
int  main(){
    string sentence;
    getline(cin,sentence);
    int arr[10];
     int count=0;
     int j=0;
     int wordc=0;
    for(int i=0;sentence[i]!='\0';i++){
         
        if(sentence[i]!=' '){
            count++;
            }
        else{
          arr[wordc]=count;
          wordc++;
          count=0;
        }
    }
    arr[wordc]=count;
    
    for(int j=0;j<=wordc;j++){
        cout<<arr[j]<<endl;

    }
}