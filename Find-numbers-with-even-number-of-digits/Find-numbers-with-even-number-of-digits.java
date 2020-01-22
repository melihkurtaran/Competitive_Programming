class Solution {
    public int findNumbers(int[] nums) {
        int result = 0;
        for(int i=0; i < nums.length; i++)
        {
            if (((10 <= nums[i]) && (nums[i] < 100)) 
                ||(((1000 <= nums[i]) && (nums[i] < 10000)))
               || (nums[i] == 100000))
                result++;
        }
        return result;
    }
}
