#include<iostream>
using namespace std;

void update2(int n){
    n++;
}

void update1(int& n){
    n++;
}


int main(){
    // int i = 0;
    // int& j = i;
    // cout<< i <<endl<<endl;
    // cout<< j <<endl<<endl;

    // i++;
    // cout<< i <<endl<<endl;
    // cout<< j <<endl<<endl;

    // j++;
    // cout<< i <<endl<<endl;
    // cout<< j <<endl<<endl;


    int i =5;
    cout<<"before"<<i<<endl;

    update1(i);
    cout<<"after"<<i<<endl;

    update2(i);
    cout<<"after"<<i<<endl;

    return 0;


}