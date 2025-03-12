#include <iostream>
using namespace std;

int main(){

    int n ;
    cout<<"Enter the positive integer"<<endl;

    cin>>n;

    int sum = 0;
    int i = 1;

    while( i <= n ){
        sum = i+sum;
        i++;



    }

    cout<<sum<<endl;
}