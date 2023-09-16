#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        char c[n][m];
        for(int i = 0; i<n;i++);{
            for(int j = 0;i<m;j++){
                cin>>c[i][j];
            }
            for(int i = 0; i<n;i++);{
            for(int j = 0;i<m;j++){
                cout<<c[i][j]; 
        }  
		
   }
    return 0;
}
