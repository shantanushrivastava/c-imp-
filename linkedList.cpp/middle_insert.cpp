#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node*next;

    Node(int val){
        data = val;
        next = NULL;
    }
};
class List{
public:
    Node* head;
    Node* tail;

  List() {
        head =NULL;
        tail =NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val);//dynamic
        if(head==NULL){
            head = tail = newNode;
        } else{
            newNode->next = head;
            head = newNode;        }
}

void push_back(int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

void print(){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data <<" -> ";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

void insert(int val, int pos){
    Node* newNode = new Node(val);

    Node* temp = head;
    for(int i=0; i<pos-1; i++){
        temp=temp->next;
    }

    //temp is nowat pos-1 i.e. previous/left
    newNode->next = temp->next;
    temp->next = newNode;
}
};
int main(){
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.print();
    //1->2->3->Null
    ll.push_back(4);
    ll.push_front(5);
    ll.print();

    ll.insert(100,2);
    ll.print();
    return 0;
}
