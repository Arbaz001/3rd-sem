#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    
     for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){  
           cin>>arr[i][j];
     }
     }
     int prim=0;
      for(int i=0;i<n;i++){
          prim=prim+arr[i][i];
          
      }
      int sec=0;
      for(int i=0;i<n;i++){
          sec=sec+arr[i][n-i-1];
          
      }
       int diff=abs(prim-sec);
     cout<<diff;
    
    
return 0;
}
