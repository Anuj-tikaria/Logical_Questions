#include<iostream>
using namespace std;

int sumArray(int arr[], int size){
    int sum = 0;

    for(int i = 0; i < size; i++){
        sum = sum + arr[i];

    }
    return sum;
}
int main(){
    int arr[10];
    cout<<"Enter the elements of an array "<<endl;

    for(int i = 0;i < 10; i++){
    cin>>arr[i];
    }
    int size = 10;

    int total = sumArray(arr,size);
    cout<<"total of an array is "<<total;

}