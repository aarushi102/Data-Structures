#include <iostream>

#include<string.h>

using namespace std;

int main() {

    int x,count_z=0,count_o=0;

    char wrd[20];

    cin>>wrd;   

    x=strlen(wrd);

    for(int i=0;i<x;i++){

        if(wrd[i]=='z' || wrd[i]=='Z')

            count_z++;

        else

        count_o++;

    }

if(2*count_z==count_o)  

    cout<<"Yes";

else

    cout<<"No";             

return 0;

        

}
/* 
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    

    char str[20];
    int o, z ,i;
    cin >> str;
    for (i = 0; i<strlen(str);i++){
    	if(str[i] == 'z' || str[i] == 'Z')
    	z++;
    	
    	else
    	o++;
	}
	if(2*z==o)
		cout<<"Yes";
	else
		cout<<"No";
    
	return 0;

}*/
