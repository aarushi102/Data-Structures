int main() 
{ 
{ int i,n,k,a[1000000];
cin>>n>>k;

	LinkedList* llist = new LinkedList(); 
for( i=0;i<n;i++)
{ cin>>a[i];
//  llist->head = llist->push(a[i]); 
}
for(i=n-1;i>=0;i--)
{
 llist->head = llist->push(a[i]);  
}
	//llist->head = llist->push(7); 
	//llist->head = llist->push(1); 
	//llist->head = llist->push(3); 
	//llist->head = llist->push(2); 

	//cout << ("Created Linked list is:\n"); 
	//llist->printList(); 

	//int N = 1; 
	llist->head = llist->deleteNode(k); 

	//cout << ("\nLinked List after Deletion is:\n"); 
	llist->printList(); 
return 0;

}
