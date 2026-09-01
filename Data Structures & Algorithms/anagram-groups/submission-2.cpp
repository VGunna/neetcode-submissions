class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        std::unordered_map<std::string,std::vector<std::string>> hash{};
        std::vector<std::vector<std::string>> result{};
        for ( auto & x : strs){
            std::string temp = x;
            std::sort(temp.begin(),temp.end());
            hash[temp].push_back(x);
        }
        for (const auto & x : hash){
            result.push_back(x.second);
        }
    return result;







    }
};
