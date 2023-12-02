#include <iostream>
#include <vector>
#include <bits/stdc++.h>
  
using namespace std;
  
int main()
{
    vector<int> a;
  
    for (int i = 0; i <= a.size(); i++){
		
        a.push_back(i);
         
    }
    cout<< accumulate(a.begin(), a.end(), 0);
    
    return 0;
}
