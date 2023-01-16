int Solution::solve(string A) {
    map<char,int>mp;
    for(int i = 0; i<A.size(); i++){
        mp[A[i]]++;
    }
    int a = 0;
    for(auto i: mp){
        if(i.second%2 == 1){
            a++;
        }
    }
    if(a>1){
        return 0;
    }
    else{
        return 1;
    }
    
}
