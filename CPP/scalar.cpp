#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int i,j;
    int row,coloumn,scalar,matrix[row][coloumn];
    cin>>row>>coloumn>>scalar;
    
    int a[row][coloumn];
    for(int i = 0 ; i < row ; i++)
      for(int j = 0; i<coloumn;j++)
        cin>>a[i][j];
        matrix[i][j] = scalar * a[i][j];
      
     for (int i = 0; i < row; i++) 
        for (int j = 0; j < coloumn; j++)
    cout<<matrix[i][j]<<"\n";
    return 0;
  }
