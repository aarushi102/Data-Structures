#include <iostream>
using namespace std;

class LinkedList{
	
	public: 
	int data;
	LinkedList* next;
	
	LinkedList(int data){
		this->data = data;
		this->next= NULL;
	}	
};

void insertAtHead(LinkedList* &head,int d){
	LinkedList* temp = new LinkedList(d);
	temp->next = head;
	head = temp;
}

void insertAtTail(LinkedList* &tail, int d){
	LinkedList* temp = new LinkedList(d);
	tail->next = temp;
	tail = temp;
}

void insertAtPosition(LinkedList* &head, LinkedList* &tail, int d, int pos){
	if(pos == 1){
		insertAtHead(head,d);
		return;
	}
	LinkedList* temp = head;
	int cnt = 1;
	while(cnt<pos){
		temp = temp->next;
		cnt++;
	}
	
	if(temp->next == NULL){
		insertAtTail(tail,d);
		return;
		
	}
	
	LinkedList* nodeToInsert = new LinkedList(d);
	nodeToInsert->next = temp->next;
	temp->next = nodeToInsert;
}

bool search(LinkedList* &head,int key){
	LinkedList* temp = head;
	int pos = 1;
	while(temp->next!=NULL){
		if(temp->data == key){
			cout<<key<<" Present at position "<<pos;
			return true;
		}
		
	temp = temp->next;
	pos++;
	}
	cout<<key<<" Not Present"<<endl;
	return false;
}
void print(LinkedList* &head){
	if(head == NULL){
		cout<<"Linked List is empty";
		return;
	}
	LinkedList* temp = head;
	while(temp!= NULL){
		cout<< temp->data<<" ";
		temp = temp->next;
	}
	cout<<endl;
	
}
int main(){
	LinkedList* node1 = new LinkedList(20);
	LinkedList* head = node1;
	LinkedList* tail = node1;
//	LinkedList* tail = node1;


	
	insertAtHead(head,21);
	insertAtHead(head,22);
	insertAtHead(head,24);
	insertAtHead(head,26);
	insertAtHead(head,29);
	insertAtTail(tail,32);
	insertAtTail(tail,34);
	insertAtTail(tail,39);
	insertAtPosition(head,tail,42,4);
	insertAtPosition(head,tail,1,1);
	insertAtPosition(head,tail,90,11);

	 print(head);
	 
		search(head,99);
		search(head,24);
	return 0;
}
