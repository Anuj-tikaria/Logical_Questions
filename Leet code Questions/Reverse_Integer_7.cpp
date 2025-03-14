#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the integer"<<endl;

    cin>>n;

    int rem = 0;

    while(n != 0){
        int digit = n % 10;

        if(rem > INT_MAX / 10 || rem < INT_MIN /10){
            return 0;
        }
        rem = (rem * 10) + digit;

        n = n / 10;
        
    }
    cout<<rem;
    return 0;
}