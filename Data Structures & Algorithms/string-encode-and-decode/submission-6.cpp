class Solution {
public:

    string encode(vector<string>& strs) { 
        std::string result{};

        for ( const auto & x : strs){
            result += x; result += "^#&";
        }
    return result;


    }

    vector<string> decode(string & s) {
        
    
        std::vector<std::string> result{};
        
        while(!s.empty()){
        
        int it = s.find("^#&");
        if ( it != std::string::npos){
            result.push_back({s.substr(0,it)});
            s.erase(s.begin(), s.begin() + (it + 3));
        }
        else{
            result.push_back({s});
            break;
        }
        }




        return result;
    }

};
