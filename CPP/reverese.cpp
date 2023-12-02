#include<iostream>
#include<map>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
    
    //destructor
    ~Node(){
    	int value = this->data;
    	if(this->next!= NULL){
    		delete next;
    		this->next= NULL;
		}
		cout<<"Memmory free data "<<value<<endl;
	}
};

void insertAtTail(Node* &tail, int d) {
     // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail  = temp;
}
int reverse(Node* &head){
//	if(head == NULL || head ->next == NULL){
//		return head;
//	}
	Node* prev = NULL;
	Node* curr = head;
	Node* forward = NULL;
	while(curr!=NULL){
		forward = curr->next;
		curr->next = prev;
		prev = curr;
		curr = forward;
	}
	return prev;
}
void print(Node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
int main() {
    
    //created a new node
    Node* node1 = new Node(10);
    //cout << node1 -> data << endl;
   // cout << node1 -> next << endl;
    
    //head pointed to node1
    Node* head = node1; 
    Node* tail = node1;


    insertAtTail(tail, 12);

    //print(head);
    
    insertAtTail(tail, 15);
    //print(head);
    insertAtTail(tail, 17);
    insertAtTail(tail, 19);
	print(head);
	Node* newHead =	reverse(head);
    print(newHead);    
    return 0;
}
