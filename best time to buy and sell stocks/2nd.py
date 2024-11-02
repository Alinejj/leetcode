class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        buy = prices[0]
        profit = 0
        
        #in order for me to iterate within the length of List prices i need to use range(len(-))
        for i in  range(len(prices)):
            if prices[i] < buy:
                buy = prices[i]
            if prices[i] - buy > profit:
                profit = prices[i] - buy
        return profit

#same explanation