class Solution {
public:

    string encode(vector<string>& strs) { 
        std::string result{};

        for ( const auto & x : strs){
            result += x; result += "^#&";
        }
    return result;


    }

    vector<string> decode(string s) {
        std::string cond{s};
    
        std::vector<std::string> result{};
        
        while(!cond.empty()){
        
        int it = cond.find("^#&");
        if ( it != std::string::npos){
            result.push_back({cond.substr(0,it)});
            cond.erase(cond.begin(), cond.begin() + (it + 3));
        }
        else{
            result.push_back({cond});
            break;
        }
        }




        return result;
    }

};
