#include<iostream>
using namespace std;

int main(){

int num;
cin>>num;

int sum = 0;
int a;

while(num!=0){
	a = num%10;
	sum = sum+a;
	num = num/10;
}
cout<<sum;
return 0;
}
