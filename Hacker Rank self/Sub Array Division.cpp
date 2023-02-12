#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int d,m;
    cin>>d>>m;
    int h=0;
     for(int i=0;i<=n-m;i++){   
     int sum = 0;
     for(int j=0;j<=m-1;j++) {
            sum +=a[i+j];
        }
        if(sum == d){
         h++;
         }
    }

    cout<<h;
    return 0;
}
