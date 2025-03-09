#include <bits/stdc++.h>
using namespace std;

int main(){

    int marks[] = {10, 20, 30, 15, -15, 40, 50, 55, 24};

    int largest = INT_MIN;
    for(int i = 0; i < 9; i++){

        if(marks[i]>largest){
            largest = marks[i];
        }
    }

    cout << "largest is "<<largest <<endl;
    return 0;

}