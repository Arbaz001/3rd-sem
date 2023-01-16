int Solution::solve(vector<int> &A) {
    set<int> st;
    int ans = -1;
    for(int i = A.size()-1; i>=0; i--){
        if(st.find(A[i]) != st.end()){
            ans = A[i];
        }
        else{
            st.insert(A[i]);
        }
    }
   return ans;
}
