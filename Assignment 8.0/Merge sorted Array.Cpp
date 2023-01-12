class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>vec;
        int i=0;
        int j=0;
       while(m!=0&&n!=0){
           if(nums1[i]<nums2[j]){
               
                  vec.push_back(nums1[i]);
                   i++;
                   m--;
              
            }
           else{
                   
                  vec.push_back(nums2[j]);
                   j++;
                   n--;

               
                  
               }

           }
          
           while(m!=0){
               vec.push_back(nums1[i]);
               i++;
               m--;
           }
           
           while(n!=0){
                vec.push_back(nums2[j]);
               j++;
               n--;
           }
      for(int i=0;i<vec.size();i++){
          nums1[i]=vec[i];
      }   
    }
};
