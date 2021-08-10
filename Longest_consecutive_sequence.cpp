class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> hash;
        for(int num:nums)
        {
            hash.insert(num);
        }
        int maxCS=0;
        
        for(int num : nums)
        {
            if(!hash.count(num-1))
            {
                int curr_num=num;
                int curr_maxCS=1;
                
                while(hash.count(curr_num+1))
                {
                    curr_maxCS+=1;
                    curr_num+=1;
                    
                }
                maxCS=max(maxCS,curr_maxCS);
            }
            

        }
        return maxCS;
    }
};