#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	if(n==1)
	cout<<"Kuch nahi";
	
	if(arr[n-1]>=arr[n-2])
	cout<<arr[n-1]<<"\n";
	
	if(arr[0]>=arr[1])
	cout<<arr[0];
	
	for(int i = 1;i<n-1;i++){
		if(arr[i] >= arr[i-1] && arr[i]>=arr[i+1])
		cout<<arr[i]<<"\n";
	}
	return 0;
}

