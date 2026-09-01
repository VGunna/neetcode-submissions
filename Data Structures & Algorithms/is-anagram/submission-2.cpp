class Solution {
public:
    bool isAnagram(string  & s, string  & t) {
       if ( s.length() != t.length())
            return false;

        std::unordered_map<char,int> checker{};

        for (int i = 0 ; i < s.length() ; i++){
            checker[s[i]]++;
            checker[t[i]]--;
        }
         for ( auto &x : checker){
            if ( x.second != 0){
                return false;
            }
         }
        return true;










    }
};
