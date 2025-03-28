#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the positive integer"<<endl;
    cin>>n;

    cout<<"pattern using while loop"<<endl;

    int i = 1;
    while(i<=n){
        int j = 1;
        while(j <= n){
            cout<<n-j+1<<" ";
            j++;
        }

        cout<<endl;
        i++;
    }

    cout<<endl;
    cout<<"Pattern using for loop"<<endl;

    for(int i = 1;i <= n; i++){

        for(int j =1; j <= n; j++){

            cout<<n-j+1<<" ";

        }
        cout<<endl;
    }
}