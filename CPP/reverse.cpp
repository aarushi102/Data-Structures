#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int size;
	cin>>size;
	
	int arr[size];
	int i;
	for(i = 0; i <size ; i++){
		cin>>arr[i];
	}
	
	for(i = 0;i<size;i++){
		cout<<arr[i]<<" ";
		
	}
	cout<<"\n";
	for(i = size-1; i>=0;i--){
		cout<<arr[i]<<" ";
	}
	
	
	return 0;
}
