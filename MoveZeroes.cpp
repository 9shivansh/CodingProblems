class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int start = 0;
        
        int size = nums.size();
        
        for(int i = 0; i < size; i++)
        {
            if(nums[i] != 0)
            {
                nums[start++] = nums[i];
            }
        }
        
        for(int i = start; i < size; i++)
        {
            nums[i] = 0;
        }
        
    }
};