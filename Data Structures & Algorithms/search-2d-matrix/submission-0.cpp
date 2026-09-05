class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for ( const auto & x : matrix){
            if (std::find(x.begin(),x.end(),target)!= x.end())
            return true;
            continue;
        }
        return false;

    }
};
