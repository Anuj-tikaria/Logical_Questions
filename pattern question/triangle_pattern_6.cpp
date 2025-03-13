#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the positive number"<<endl;
    cin>>n;

    cout<<"Pattern using for loop"<<endl;

    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    cout<<"Pattern using while loop"<<endl;
    int i =1;

    while(i<=n){
        int j= 1;
        while(j<=i){
            j++;

            cout<<"*"<<" ";
            
        }

        cout<<endl;
        i++;
    }

    cout<<"Printing pattern in numbers using while loop"<<endl;

    i = 1;
    while(i<=n){
        int j= 1;
        while(j<=i){

            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;

    }

    cout<<"Printing pattern using for loop"<<endl;

    for(int i =1; i<=n; i++){
        for(int j = 1;j<=i;j++){
            cout<<i<<" ";

        }
        cout<<endl;
    }

    return 0;
}