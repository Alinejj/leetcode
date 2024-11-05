class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //assign buy with the first index which is gonna be the price of the first day in the vector prices
       int buy = prices [0];
       //assign my current profit to 0 since it will store the profit ill gain and i dont have any proft yet
       int profit = 0;

        //iterate through each day in the vector starting at day 1 since we bought our stock at day 0
       for ( int i = 0; i<prices.size(); i++){
        //if the price in the day at index i is less than the price i bought the stock at
        if(prices[i] < buy){
            //assign buy with that price
            buy = prices[i];
        }
        //when i subtract my price at the day i wanna sell my stock at from the price
        //of the stock at the day that i bought it at and that value is greater than my current profit
        if (prices[i] - buy > profit){
            //assign my profit to that value of the subtraction
            profit = prices[i] - buy;
        }
       }
       return profit;
    }
};

//[7,1,5,3,6,4]
//if i buy stocks on day 2 where the price is 1 i can sell
//it on day 5 at a price of 6 where i can make a profit by
//subtracting the price i sold it at from the price i bought it at which is
//6-1 = 5<-my profit however i cant sell it on day 1 even if the profit is higher
//because the day passed however 
//[7,6,4,3,1]
//the only day that the stock is cheaper is on the last day
//which means i wont be making any profit so i return 0