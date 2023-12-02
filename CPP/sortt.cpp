#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main(){
	int n;
	cin>>n;
	int sum = 0;
	int arr[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	sum = arr[0] + arr[n-1];
	
	cout<<sum;
	return 0;
}
