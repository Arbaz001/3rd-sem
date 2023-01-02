#include <bits/stdc++.h>

using namespace std;
int main(){
    int alice=0;
    int bob=0;
    int a[3],b[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    for(int i=0;i<3;i++){
        cin>>b[i];
    }
    for(int i=0;i<3;i++){
        if(a[i]>b[i]){
            alice++;
           
        }
        else if(a[i]<b[i]){
            bob++;
            
        }
    } 
     cout<<alice<<" ";
     cout<<bob<<" ";
    return 0;
}
