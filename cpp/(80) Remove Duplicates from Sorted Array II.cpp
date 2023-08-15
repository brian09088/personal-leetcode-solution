class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt = 0;
        for(int num:nums){
            if(cnt < 2 || num > nums[cnt-2]){
                nums[cnt++] = num;
            }
        }
        return cnt;
    }
};
