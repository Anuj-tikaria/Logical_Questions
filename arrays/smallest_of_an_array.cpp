#include <iostream>
#include<climits>


using namespace std;

int main(){


    int n;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;

    int marks[n];
    cout<<"Enter the array elements"<<endl;

    for(int i = 0; i < n; i++){
        cin>>marks[i];
    }

    int smallest = INT_MAX;

    for(int i = 0; i<n ; i++){

        if(marks[i]<smallest){

            smallest = marks[i];
            
        }
      
    }

    cout<<"smallest="<< smallest << endl;
    return 0;

}