#include <iostream>

using namespace std;
int main(){
	int n;
	cin>>n;
	int k;
	cin>>k;
	int arr[n];
	
	int count = 0;
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	for(int i = 0;i<n;i++){
		for(int j = i+1;j<n;j++){
			if(arr[i]+arr[j]==k || arr[i]+arr[i] == k){
				count++;
			}
			
			
		}	
	}
	cout<<count;
	
	
}
