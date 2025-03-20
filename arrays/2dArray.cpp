#include<iostream>
using namespace std;

    
int main(){

    int arr[4][5];

    cout << "Enter 20 elements for 2d array " << endl;
    for(int i = 0 ; i < 4; i++){
        for(int j = 0; j < 5; j++){
            
            cin >> arr[i][j];
        }
    }
    

    for(int i = 0; i < 4; i++ ){
        for(int j = 0; j < 5; j++)
        {

            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// for taking the input in the col first , we just have to change the value of i and j ;
