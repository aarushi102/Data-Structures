#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		int sum1 = a+b;
		int sum2 = b+c;
		int sum3 = a+c;
		
		if(sum1>sum2 && sum1>sum3){
			cout<<sum1<<"\n";
		}
		else if(sum2>sum3 && sum2>>sum1){
			cout<<sum2<<"\n";
		}
		else if(sum3>sum1 && sum3>sum2){
		cout<<sum3<<"\n";
	}
}
	return 0;
}
