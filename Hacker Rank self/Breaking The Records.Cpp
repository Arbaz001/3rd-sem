#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
   int low=0,high=0;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
     }
     
    int max=a[0],min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
            high++; 
        }
      if(a[i]<min){
        min=a[i];
        low++;
       }
    }
   cout<<high<<" "<<low;


return 0;
}
