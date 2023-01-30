class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
      
      int f = 0;
      int i = 0;

     while(i<nums.size()){
          f = 0;
       if(nums[i] == original){
           original = original*2;
          f = 1;
       }
if(f == 1){
    i = 0;
}
else{
    i++;
}
     }

return original;
 
     
    }
};
