class Solution {
    public int maxProfit(int[] prices) {
        if(prices.length == 0)
return 0;
int numlen = prices.length,min=prices[0],profit=0;
for(int i=0; i<numlen; i++) {
profit = Math.max(profit,prices[i]-min);
min = Math.min(min,prices[i]);
}
return profit;
    }
}
