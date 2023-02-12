class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long tempsum = 0;
        long long maxsum = nums[0];
        for(long long a:nums){
            tempsum = tempsum + a;
            maxsum = max(maxsum , tempsum);
            if(tempsum < 0){
                tempsum = 0;
            }
        }
        return maxsum;
    }
};
