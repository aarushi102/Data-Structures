#include <bits/stdc++.h>
  using namespace std;
  int main()
  {
     int t;
     cin>>t;
     while(t--)
     {
       string str;
       cin>>str;
       
       int count=0,flag=1;
       for(int i=0;i<str.length();i++)
       {
         for(int j=i+1;i<str.length();j++)
         {
         if(str[i]==str[j])
          {
            count++;
            cout<<str[i]<<"="<<count<<endl;
          }
          else
          cout<<"-1"<<endl;
         }
       }
     }
    return 0;
  }
