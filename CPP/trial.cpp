#include <iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		
		Node(int data){
			this->data = data;
			this->next = NULL;
		}
		~Node(){
			int value = this->data;
			if(this->next != NULL){
				delete next;
				this->next = NULL;
			}
			cout<<"Memmory free data "<<value<<endl;
		}
};

void insertAtHead(Node* &head, int d){
	Node* temp = new Node(d);
	temp->next = head;
	head = temp;	
}

void insertAtTail(Node* &tail, int d){
	Node* temp = new Node(d);
	tail->next = temp;
	tail = temp;
	
}

void insertAtPosition(Node* &head,Node* &tail, int position,int d){
	if(position == 1){
		insertAtHead(head,d);
	}
	
	Node* temp = head;
	int cnt = 1;
	while(cnt<position-1){
		temp = temp->next;
		cnt++;
	}
	
	if(temp->next == NULL){
		insertAtTail(tail,d);
		return;
	}
	
	Node* nodeToInsert = new Node(d);
	nodeToInsert->next = temp->next;
	temp->next = nodeToInsert;
	
	
}

void deletion(int position,Node*&head){
	if(position == 1){
		Node* temp = head;
		head = head->next;
		temp->next = NULL;
		delete temp;
	}
	else{
		Node* curr = head;
		Node* prev = NULL;
		int cnt = 1;
		while(cnt<position){
			prev = curr;
			curr = curr->next;
			cnt++;
		}
		prev->next = curr->next;
		curr->next = NULL;
		delete curr;
	}
}
void reverseList(Node* head){
	Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;
    
    while(curr!= NULL){
        forward = curr->next;
        curr ->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
void print(Node* &head){
	Node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<"\n";
}

int main(){
	Node* node1 = new Node(10);
	Node* head = node1;
	Node* tail = node1;
	print(head);
	insertAtHead(head,12);
	insertAtTail(tail,21);
	insertAtPosition(head,tail,3,55);   
	insertAtHead(head,72);
	insertAtTail(tail,92);
	insertAtPosition(head,tail,3,55);   
 	insertAtPosition(head,tail,5,50);   
 	insertAtPosition(head,tail,6,60);
	deletion (2,head);
	print(head);
	
	return 0;
}
