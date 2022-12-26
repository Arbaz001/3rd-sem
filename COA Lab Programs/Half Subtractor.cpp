// C++ program to implement Half subtractor
 
#include <bits/stdc++.h>
using namespace std;
void Half_Subtractor(int A,int B){
  
    int Difference,Borrow;
    Difference = A ^ B;
  
    A = not(A);
    Borrow = A & B;
    cout<<"Difference = "<<Difference<<endl;
    cout<<"Borrow = "<<Borrow<<endl;
}
int main() {
    int A = 1;
    int B = 0;
    Half_Subtractor(A,B);
    return 0;
}
