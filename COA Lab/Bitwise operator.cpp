#include <iostream>
using namespace std;
int main() {
   int a,b;
   cin>>a>>b;
   cout<<"And = "<<(a&b)<<endl;
   cout<<"Or = "<<(a|b)<<endl;
   cout<<"Xor = "<<(a^b)<<endl;
   cout<<"Left shift = "<<(b<<1)<<endl;
   cout<<"Right shift = "<<(b>>1)<<endl;
   cout<<"Not = "<<(~a)<<endl;
   
    return 0;
}
