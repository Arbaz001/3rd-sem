#include <bits/stdc++.h>
using namespace std;
int main(){
     int  x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
   int f=0;
    while(x1 <= 100000000){
        x1 = x1+v1;
        x2 = x2+v2;
        if(x1 == x2){
            cout<<"YES"<<endl;
            f=1;
            break;
        }
    }
        if(f==0){
     cout<<"NO"<<endl;   
    }
    
    
    return 0;
    

}
