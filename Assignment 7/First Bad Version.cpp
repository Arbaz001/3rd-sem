class Solution {
public:
    int firstBadVersion(int n) {
        long long start=0;
        long long end=n;
        long long mid;
       

        while(start<=end){
             mid=start+(end-start)/2;
             if(isBadVersion(mid)==true){      
                         if(isBadVersion(mid-1)==false){
                             return mid;
                         }else
                         end=mid-1;
                 
             }
             else if(isBadVersion(mid)==false){
                 start=mid+1;
             }
             
        }
        return -1;
    }
};
