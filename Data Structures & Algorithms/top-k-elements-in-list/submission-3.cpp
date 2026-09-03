class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
                
            std::vector<std::vector<int>> bucketSort{nums.size()+1};
            std::vector<int> result{};

            std::unordered_map<int,int> counter{};

            for ( const auto & x : nums){
                counter[x]++;
            }
            for (const auto & x : counter){
                bucketSort[x.second].push_back(x.first);
            }
            for ( auto i{bucketSort.size()-1} ; i != 0; i-- ){
               
                if(result.size() == k){
                    return result;
                }
                for ( const auto & x : bucketSort[i]){
                    if(result.size() == k)
                    return result;
                result.push_back(x);


                }
            }
return result;

    }
};
