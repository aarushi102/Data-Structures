// using XOR approach

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n-1];
		for(int i = 0;i<n-1;i++){
		cin>>a[i];
	}
	
	int X = 0 , Y = 0;
	for (int i = 0;i<=n;i++){
		X^= i;
	}
	for (int i = 0;i<n;i++){
		Y^= a[i];
	}
	int missing_num = X^Y;
	cout<<missing_num<<"\n";
	
	return 0;
}
