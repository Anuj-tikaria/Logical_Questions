#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the positive number "<<endl;
    cin>>n;

   int sum = 0;
   int product = 1;

   while(n != 0){

    int rem = n % 10;

    product = rem * product;
    sum = sum + rem;

   n = n/10;

   }
   int difference = product - sum;
   cout<<"difference"<<difference<<endl;
   return 0;
}