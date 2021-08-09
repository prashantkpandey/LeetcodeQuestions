class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0;
        int ele;
        for(int num:nums)
        {
            if(c==0) ele=num;
            if(ele==num) c++;
            else c--;
            
        }
        return ele;
        
    }
};