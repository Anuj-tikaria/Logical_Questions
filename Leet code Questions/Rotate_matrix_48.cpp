#include<iostream>
using namespace std;

void RotateMatrix(int arr[][4], int n){
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){

            swap(arr[i][j],arr[j][i]);
        }
    }

    
    for(int i = 0; i < n; i++){
        int s = 0; 
        int e = n-1;
        while(e > s){
        swap(arr[i][s],arr[i][e]);
        s++;
        e--;
        
        }
    }
}

void PrintMatrix(int arr[][4], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            cout << arr[i][j]<<"  ";
        }
        cout<<endl;
    }
   
}

int main(){

    int arr[4][4];
    cout<<" Enter the elements of array ";

    for(int i = 0; i < 4; i++){
        for(int j = 0 ; j < 4; j++){

            cin >> arr[i][j];
        
        }
    }
    cout<<" your original matrix"<<endl;
    PrintMatrix(arr , 4);
    

    RotateMatrix(arr, 4);
    
    cout<<"Rotate matrix is "<< endl;
    PrintMatrix(arr, 4);

  
    return 0;
}