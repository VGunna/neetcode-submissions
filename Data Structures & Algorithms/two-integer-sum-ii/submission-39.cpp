class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int countE = numbers.size() -1;
        int countS = 0;

       int * ptrE = nullptr;
       int * ptrS = nullptr;

       while (true){
        ptrE = &numbers[countE];
        ptrS = &numbers[countS];
        if (*ptrE + *ptrS > target){
        countE--;
        continue;
        }else if ( *ptrE + *ptrS < target){
            countS++;
            continue;
        }
        return{countS + 1,countE + 1};



       }








    return{};




        }
    };

