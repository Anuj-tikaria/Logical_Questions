#include<iostream>
using namespace std;

void RotateMatrix(int arr[][3], int n){
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

void PrintMatrix(int arr[][3], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            cout << arr[i][j]<<"  ";
        }
        cout<<endl;
    }
   
}

int main(){

    int arr[3][3];
    cout<<" Enter the elements of array ";

    for(int i = 0; i < 3; i++){
        for(int j = 0 ; j < 3; j++){

            cin >> arr[i][j];
        
        }
    }
    cout<<" your original matrix"<<endl;
    PrintMatrix(arr , 3);
    

    RotateMatrix(arr, 3);
    
    cout<<"Rotate matrix is "<< endl;
    PrintMatrix(arr, 3);

  
    return 0;
}