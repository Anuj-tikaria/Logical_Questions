#include<iostream>
using namespace std;

int BinarySearch(int arr[],int size,int key){
   int s = 0;
   int e = size - 1;
   
   int mid = (s+e)/2;

   while(s <= e){

    if(arr[mid] == key){
        return mid;

    }
    if(arr[mid] < key){

        s = mid +1;
    }else{
        e = mid - 1;
    }
    mid = (s + e)/2;
   }
   return -1;
}

int main(){
    int size = 10;

    int arr[10];
    cout<<"Enter the elements of an array"<<endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int key;
    cout<<"Enter the element you want to search"<<endl;
    cin>>key;

    int result = BinarySearch( arr, size, key );
    if (result != -1){
        cout<< result <<endl;
    }else{
        cout<<"element is not in the array"<<endl;
    }


   return 0;

}