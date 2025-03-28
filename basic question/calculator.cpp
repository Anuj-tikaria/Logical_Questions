#include<iostream>
using namespace std;

int main(){

int a;
cout<<"Enter the first number "<<endl;
cin>>a;

int b;
cout<<"Enter the second number "<<endl;
cin>>b;

char operation;
cout<<"Enter the operator for calculation between a and b "<<endl;
cin >> operation;

switch(operation){
    case '+': cout<< a + b <<endl;
    break; 

    case '-': cout<< a - b <<endl;
    break;

    case '*': cout<< a * b <<endl;
    break;

    case '/': cout<< a / b <<endl;
    break;

    case '%':cout<< a % b <<endl;
    break;

    default : cout <<"Enter a valid operation"<<endl;

}

return 0;
}