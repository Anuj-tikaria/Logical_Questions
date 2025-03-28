#include<iostream>
using namespace std;

void Reverse(char name[], int n){

    int s = 0;
    int e = n - 1;

    while (s < e ){
    
        swap(name[s],name[e]);
        s++;
        e--;
    }
    
}

int StringLength(char name[]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;

}

int main(){
    
    char name[20];
    cout<<"Enter your name "<<endl;
    cin>> name;

    cout<<"your name is "<<name <<endl;

    int Length = StringLength(name);
    cout<<"Length of string is "<<StringLength(name)<<endl;

    Reverse(name,Length);
    cout<<"Reverse of your string is"<<name<<endl;

    return 0;
}