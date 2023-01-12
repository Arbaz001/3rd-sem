class Solution {
public:
    int guessNumber(int n) {
        int mid=(n/2);
        int low=1;
        int high=n;
        while(low<=high){
        if(guess(n)==-1){
          low=mid;
        }
        else if(guess(n)==1){
            high=mid;
        }
        else if(guess(n)==0){
            return 0;
        }
        }
    }
    return 0;
    
    }; 
