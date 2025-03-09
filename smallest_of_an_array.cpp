#include <bits/stdc++.h>
using namespace std;

int main(){

    int marks[] = {10, 20, 30, 11, 1, 25, -1, 40};

    int smallest = INT_MAX;

    for(int i = 0; i<8 ; i++){

        if(marks[i]<smallest){

            smallest = marks[i];
        }
    }

    cout<<"smallest="<< smallest << endl;
    return 0;



}