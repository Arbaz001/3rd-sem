class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
      set<int>st;
      vector<int>ans;
        for(int i = 0; i<nums.size(); i++){
            if(st.find(nums[i]) != st.end()){
                ans.push_back(nums[i]);
            }
            else{
                st.insert(nums[i]);
            }
        }
        return ans;
    }
};
