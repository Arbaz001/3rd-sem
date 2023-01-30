class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
      for(int i = 0; i<arr.size(); i++){
          mp[arr[i]]++;
      }
     vector<string> ans;
      for(int i = 0; i<arr.size(); i++){
        //   auto pos = mp.find(arr[i]);
         if(mp[arr[i]] == 1){
             ans.push_back(arr[i]);
         }
      }
      string a = "";
      if(ans.size()<k || ans.size() == 0 ){
          return a;
      }
      else{
          return ans[k-1];
      }
    }
};
