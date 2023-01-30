class Solution {
public:

    int revrese(int n){
        int ans = 0;
        while(n != 0){
            int digit = n%10;
            ans = (ans*10)+digit;
            n = n/10;
        }
        return ans;
    }
    int countDistinctIntegers(vector<int>& nums) {
        
        int siz = nums.size();
    for(int i = 0; i<siz; i++){
        nums.push_back(revrese(nums[i]));
    }

    set<int>st;
    int c = 0;
     
     for(auto it : nums){
         cout<<it<<" ";
         st.insert(it);
     }
 
return st.size();
    }
};
