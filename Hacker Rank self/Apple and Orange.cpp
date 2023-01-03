#include<bits/stdc++.h>
using namespace std;
int main(){
   int sum=0;
   int rum=0;
    int s,t,a,b,m,n;
    cin>>s>>t>>a>>b>>m>>n;
    int A[m],O[n];
    for(int i=0;i<m;i++)
    {
        cin>>A[i];
        A[i]=a+A[i];
        if(A[i]>=s && A[i]<=t)
        {
            rum++;
        }
        
    }
    cout<<rum<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>O[i];
        O[i]=b+O[i];
        if(O[i]>=s && O[i]<=t)
        {
            sum++;
        }
        
        
        
    }
    cout<<sum<<endl;
    
    return 0;
}
