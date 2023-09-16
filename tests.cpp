#include <iostream>
using namespace std;

int main(){

	int n;
	cin>>n;
	if(n==2){
		cout<<"Not a prime";
	}
	for(int i = 2;i<=n;i++){
		if(n%i == 0)
		cout<<i<<" ";
	}
		
	
	
	return 0;
}
