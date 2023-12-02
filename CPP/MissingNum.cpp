#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
	int n;
	cin>>n;
	int total, array = 0, missingNum;
	int a[n-1];
	for(int i = 0;i<n-1;i++){
		cin>>a[i];
	}
	
	total = n*(n+1)/2;
	for(int i = 0;i<n-1;i++){
		array = array+1;
	}
	missingNum = total - array;
	cout<<missingNum<<"\n";
	
	return 0;
	
}

