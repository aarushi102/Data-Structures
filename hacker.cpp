#include<bits/stdc++.h>
using namespace std;

int main(){


 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 
 string str ;
 cin>>str;
 char i;
 char a;
 char b;
 for (i=0;i<str.length();i++){
 	if (str[i] == "a")
 	a++;
 	if(str[i] == "b")
 	b++;
 }
  cout<< str[i]<<" "<<  a <<" "<<b << "\n"
 
 
 return 0;
}
