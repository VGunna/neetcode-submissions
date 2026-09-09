class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        std::map<int,int> result{};

        for ( const auto nums : nums){
            result[nums]++;
        }
        for ( auto i = result.begin() ; i != result.end() ; i++){
            if (i->second == 1)
            return i->first;
        }
    return 0;


    }
};
