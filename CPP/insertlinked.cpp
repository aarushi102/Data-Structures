#include <iostream>
#include<bits/stdc++.h>

using namespace std;

typedef struct Node {
	int data;
	struct Node *next;
}Node;

Node *head = NULL;

void insertAtBeg(int data){
	Node *new_Node = (Node*)malloc(sizeof(Node));
	new_Node-> data = data;
	new_Node->next = head;
	head = new_Node;
}

void display(){
	Node *temp ;
	temp = head;
	while(temp!= NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int data;
		for(int i = 0;i<n;i++){
			cin>>data;
			insertAtBeg(data);
			
		}
		cout<<"Beginning";
		display();
		cout<<"\n";
		head = NULL;
	}
	
}
