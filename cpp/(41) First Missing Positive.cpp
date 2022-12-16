class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        bool n_1 = false;
        for(int x : nums){
            if(x==1){
                n_1 = true;
                break;}
        }
        int n = nums.size();
        if(! n_1){return 1;}
        if(n==1){return 2;}
        for(int i=0;i<n;i++){
            if(nums[i]<=0 || nums[i]>n){
                nums[i]=1;}
        }
        for(int i=0;i<n;i++){
            int x=abs(nums[i]);
            if(nums[x-1] > 0){nums[x-1]*=-1;}
        }
        for(int i=0;i<n;i++){
            if(nums[i] > 0){return i+1;}
        }
        return n+1;
    }
};
