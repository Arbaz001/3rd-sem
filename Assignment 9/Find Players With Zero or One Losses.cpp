class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
 
unordered_map<int,int>mp;
 
vector<vector<int>>ans;
 
 
     for(int i = 0;i<matches.size(); i++){
        mp[matches[i][1]]++;
     }
 
      vector<int>temp1;
      vector<int>temp2;
 
     for(int i = 0; i<matches.size(); i++){
         
         if(mp.find(matches[i][0]) == mp.end() && find(temp1.begin(),temp1.end(),matches[i][0]) == temp1.end()){
              temp1.push_back(matches[i][0]);
         }
     }
 
     for(auto it : mp){
         if(it.second == 1){
             temp2.push_back(it.first);
         }
     }
 
     sort(temp1.begin(),temp1.end());
     sort(temp2.begin(),temp2.end());
     ans.push_back(temp1);
     ans.push_back(temp2);
     return ans;  
    }
};
