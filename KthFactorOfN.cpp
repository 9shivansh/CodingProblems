class Solution {
public:
    int kthFactor(int n, int k) 
    {
        int count = 0;
        
        for(int i = 1; i < n + 1; i++)
        {
            if(n % i == 0)
            {
                count = count + 1;
            }
            
            if(count == k)
            {
                return i;
            }
        }
        
        return -1;
        
    }
};