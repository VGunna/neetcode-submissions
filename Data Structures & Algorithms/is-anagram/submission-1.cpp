class Solution {
public:
    bool isAnagram(string  & s, string  & t) {
        if ( s.length() != t.length())
        return false;

        for ( auto i = s.begin() ; i < s.end() ; i++){
            auto found = std::find(t.begin(), t.end(), *i);
            if ( found == t.end()){
                return false;
            }else
            s.erase(i,i+1);
            t.erase(found,found+1);
            i--;
        }
        return true;








    }
};
