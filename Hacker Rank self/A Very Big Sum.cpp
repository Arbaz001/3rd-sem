#include <bits/stdc++.h>

using namespace std;
int main(){
    
long sum=0;
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    sum=sum+arr[i];
}
cout<<sum;
return 0;
}
