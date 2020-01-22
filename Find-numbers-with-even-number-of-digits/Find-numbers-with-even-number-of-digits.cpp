class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res = 0;
        for(int i=0; i < nums.size(); i++)
        {
            if((1 <= log10(nums[i])) && (log10(nums[i]) < 2 )
                || (3 <= log10(nums[i])) && (log10(nums[i]) < 4 )
               || (5 == log10(nums[i])))
                res++;
        }
        return res;
    }
};
