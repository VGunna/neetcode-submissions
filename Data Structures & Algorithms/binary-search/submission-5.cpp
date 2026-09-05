class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        if ( std::find(nums.begin(),nums.end(),target) == nums.end())
        return -1;

        return std::abs((int)(nums.begin()-std::find(nums.begin(),nums.end(),target)));



    }
};
