int maxProfit(int prices[], int n){
    if(n <= 0) return 0;
    int result = 0;
    for(int i = 1; i < n; i++){
        if(prices[i] > prices[i-1])
            result += prices[i] - prices[i-1];
    }
    return result;
}