#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the positive integer"<<endl;
    cin>>n;
    

    cout<<"Pattern using while loop"<<endl;
    int i = 1;
    while(i <= n){

        int j = 1;
        while(j <= n){
            cout <<j<<" ";
            j++;

        }

        cout<<endl;
        i++;
    }


    cout<<endl;
    cout<<"Pattern using for"<<endl;
    for(int i = 1; i <= n; i++){

        for(int j = 1; j <= n; j++){

            cout<<j<<" ";
        }

        cout<<endl;
    }
    
   return 0;
}

