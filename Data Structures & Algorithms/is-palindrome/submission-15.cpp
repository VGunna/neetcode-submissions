class Solution {
public:
    bool isPalindrome(string  & s) {
        std::string temp{};
        for (  auto & x : s){

            if ( std::isalpha(x) || std::isdigit(x))
            temp += std::tolower(x);
            
            	
        }
        
        for (int i = 0 ; i < temp.length() ; i++){
            if ( temp[i] != temp[temp.length() - 1 - i])
            return false;

        }





    return true;

    }
};
