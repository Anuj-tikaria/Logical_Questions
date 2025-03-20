#include<iostream>
using namespace std;

int LinearSearch(int arr[][5], int target, int row, int col){

    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 5; col++){
            if(target == arr[row][col]){
                return 1;
            }
        }
    }
    return 0;
}

int main(){

    

    int arr[3][5];

    cout << " Enter the elements of array"<<" ";

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
        }
    }

    int target;
    cout << "Enter the element you want to search"<<endl;
    cin >> target;

    if(LinearSearch(arr, target , 3, 5)){

        cout<<"Element found"<<endl;

    }else{
        cout<<"Element not found "<<endl;
    }
    return 0;
}