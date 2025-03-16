#include<iostream>
using namespace std;

int LinearSearch(int n[], int size, int key){
    for(int i = 0; i < 10; i++){
        if(n[i] == key){

            return key;
        }
        
    }
    return 0;

}
int main(){
    int key;
    cout<<"Enter the element you want to search "<<endl;
    cin>>key;

    int size = 10;
    int n[10];
    cout<<"Enter the elements of an array"<<endl;
    for(int i =0; i < 10; i++){
        cin>>n[i];
    }

   int result = LinearSearch(n ,size, key);
   if(result != 0){
    cout << result <<endl;
   }else{
    cout<<"Element is not present "<<endl;
   }

    return 0;

}