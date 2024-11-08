class Solution {
    public int maxProfit(int[] prices) {
        int buy = prices[0];
        int profit = 0;
        int n = prices.length;

        for (int i = 0; i < n; i++){
            if ( prices[i] < buy ){
                    buy = prices[i];
            }
            if ( prices[i] - buy > profit){
                profit = prices[i] - buy;
            }
        
        }
        
        return profit;
    }
}