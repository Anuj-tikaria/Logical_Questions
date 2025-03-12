#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the positive integer"<<endl;
    cin>>n;

    cout<<"pattern using while loop"<<endl;
    cout<<endl;

    int i = 1;
    int count = 1;
    while(i <= n){
        int j = 1;
        while(j <= n){

        cout<<count<<" ";
        count++;
        j++;
        }

        cout<<endl;
        i++;
    }

    cout<<"pattern using for loop"<<endl;
    count = 1;

    for(int i = 1; i <= n; i++){

        for(int j =1; j <= n; j++){

            cout<<count<<" ";
            count++;


        }
        cout<<endl;
    }
    return 0;
}