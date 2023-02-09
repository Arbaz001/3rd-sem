#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,sum=0; 
    cin>>n;
    int a[n];
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    int b;
    cin>>b;
    
   int ans = sum-a[k];
      ans = ans/2;
      
      
    if(b>ans){
     cout<<b-ans<<endl;
    }
    else{
       cout<<"Bon Appetit";
    }
    return 0; 
}
