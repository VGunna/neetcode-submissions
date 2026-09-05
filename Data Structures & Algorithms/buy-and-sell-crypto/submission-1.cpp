class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result{};

        for ( int i = 0 ; i < prices.size()-1; i++){
            for ( int j = i+1 ; j < prices.size(); j++){
                if (prices[j] - prices[i] > result)
                    result = prices[j] - prices[i];
            }
        }



return result;

    }
};
