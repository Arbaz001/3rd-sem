include <bits/stdc++.h>
using namespace std;

void Half_Adder(int A,int B){
    
    int Sum , Carry;
    Sum = A ^ B; 
    Carry = A & B;
    cout<<"Sum = "<< Sum << endl;
    cout<<"Carry = "<<Carry<< endl;
}
int main() {
    int A = 1;
    int B = 0;
    Half_Adder(A,B);
    return 0;
}
