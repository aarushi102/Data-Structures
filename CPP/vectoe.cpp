#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

int u;
int a;

vector<int> g1;
for(int i=0;i<u;i++)
{
  cin>>a;
  g1.push_back(a);
}

 int aux = 0;
        int n = g1.size();
        for (int i = 0; i < n/2; ++i) {
                aux = g1[n-i-1];
                g1[n-i-1] = g1[i];
                g1[i] = aux;
}
	return 0;
}
