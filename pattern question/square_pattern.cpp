#include<iostream>
using namespace std;

int main(){

    int n;

    cout <<"Enter the input";
    cin>>n;

    int i;
    int j;

    for (i = 0; i < n; i++){

        for(j = 0; j < n; j++){

            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}