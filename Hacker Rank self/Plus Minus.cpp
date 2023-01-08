#include <bits/stdc++.h>
using namespace std;
int main(){
    
 int n;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++){
     cin>>a[i];
     }
     float p=0;
     float m=0;
     float o=0;
    for(int i=0;i<n;i++){
         if(a[i]>0){
             p++;
         }
         if(a[i]<0){
             m++;
         }
         if(a[i]==0){
             o++;
         }
     }
     cout<<setprecision(6)<<fixed<<p/n<<endl;
     cout<<setprecision(6)<<fixed<<m/n<<endl;
     cout<<setprecision(6)<<fixed<<o/n<<endl;
     
return 0;
}
