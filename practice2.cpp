#include <iostream>
using namespace std;

int main(){
	
	int num;
	cin>>num;
	
//	bool isPrime = true;
//	
//	if(n<2){
//		isPrime = false;
//		
//	}
//	
//	for(int  i = 2;i<n/2;i++){
//		if(n%i == 0){
//			isPrime = false;
//			break;
//		}
//	
//	}
//	
//	string result = isPrime ? "prime" : "not a prime";
//	
//	cout<<result;
	
	int reverse = 0;
	int rem;
	int temp = num;
	while(num!=0){
		 rem = num%10;
		reverse = reverse*10 + rem;
		num = num/10;
	}
	
	cout<<reverse;
	
	if(temp == reverse){
		cout<<"is a pallindrome";
	}
	else{
		cout<<"not a pallindrome";
	}
	return 0;
}
