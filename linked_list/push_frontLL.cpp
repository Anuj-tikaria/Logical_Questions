#include<iostream>
using namespace std;

class node{
    public:

    int value;
    node* next;

    node(int val){
        value = val;
        next = NULL;

    }
};

class list{

    node* head;
    node* tail;

    public:
    list(){
        head = tail = NULL;

    }

    void push_front(int val){

        node* newNode = new node(val);
        if(head == NULL){

            head = tail = newNode;
            return;

        }else{
            newNode-> next = head;
            head = newNode;
        }
    }

    void Printll(){
        node* temp = head;
        while(temp != NULL){
            cout<<temp->value<<" "<<"->"<<" ";
            temp = temp->next;


        }
        cout<<"Null"<<endl;
    }
};


int main(){
    list ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);

    ll.Printll();

    return 0;
}