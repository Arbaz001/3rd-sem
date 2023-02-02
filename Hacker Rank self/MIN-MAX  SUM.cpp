#include <bits/stdc++.h>
using namespace std;
int main(){
    long long arr[5];
    long long sum=0;
    for(int i=0;i<5;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    int min=arr[0];
    for(int i=0;i<5;i++){
        if(min>arr[i])
            min=arr[i];
        
            
    }
    int max=arr[0];
    for(int i=0;i<5;i++){
       if(max<arr[i])
           max=arr[i];
       
    }
    cout<<sum-max<<" "<<sum-min;
    
    return 0;
}
