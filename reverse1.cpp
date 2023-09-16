#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main(){
	
	int n;
	cin>>n;
	int last;
	int rev = 0;
	while(n > 0){
	last = n%10;
	rev = rev*10 + last;
	n = n/10;
	}
	cout<<rev<<"\n";
	return 0;
	
	}
