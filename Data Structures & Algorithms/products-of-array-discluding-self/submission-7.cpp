class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        std::vector<int> result(n);
        std::vector<int> pre(n);
        std::vector<int> aft(n);
        pre[0] = 1;
        aft[n-1] = 1;
        for ( int i = 1; i < nums.size() ; i++ ){
            pre[i] = pre[i-1] * nums[i-1];
        }
        for ( int i = n-2 ; i >= 0 ; i--){
            aft[i] = aft[i+1] * nums[i+1];
        }
        for ( auto i{0u} ; i  < nums.size() ; i++){
            result[i] = pre[i] * aft[i];
        }
        
       
        return result;
    }
};
