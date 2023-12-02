#include <iostream>

using namespace std;
int main(){
	
	int n;
	cout<<"Enter length : ";
	cin>>n;
	int i,j;
	int c = 2*n - 1;
	int d = 2*n+1;
		for(i =0;i<c;i++){
		for(j = 0;j<d;j++){
			if((j == n*2-i-2 || i == j-2) && i>=n-1){
				cout<<"*";
			}
			else if(j == n){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
}
cout<<endl;
}
	return 0;
}
