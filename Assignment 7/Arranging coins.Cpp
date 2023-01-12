class Solution {
public:
    int arrangeCoins(int n) {
        int row = 0, coins = n;
 
        while(coins<=n){
           if(coins > row){
               row++;
               coins = coins-row;
           } 
           else if(coins <= row)
            return row;
        }
        return 0;
    }
    
};
