class Solution {
public:
    int mySqrt(int x) {
    int start=0;
    int end=x;

    
    while(start<=end){
        long long mid=(start+end)/2;
        
        if(x>=(mid*mid)) {
            if(x<((mid+1)*(mid+1))){
                return mid;
                }

            start = mid+1;
        }
        if (x<(mid*mid)){
            end=mid-1;
        }
           }

    return 0;
}
