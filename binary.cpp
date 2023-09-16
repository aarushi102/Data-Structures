#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	
	int i = 0;
	int ans = 0;
	while(n!=0){
//		int lastDigit = n&1;
//		ans = (lastDigit * pow(10,i))+ ans;
//		n = n>>1;
//		i++;
		
		int lastDigit = n&1;
		ans = lastDigit * pow(10,i) + ans;
		n = n>>1;
		i++;
 	}
	cout<<ans<<endl;
	
	return 0;
}
