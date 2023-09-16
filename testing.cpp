#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int rem,rev = 0;
	while(n!=0){
	
	rem = n%10;
	rev = rem + rev*10;
	n = n/10;
}
	cout<< rev;
	return 0;
}

