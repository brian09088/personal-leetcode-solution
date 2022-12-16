# stack structure

class Solution {
public:
    int trap(vector<int>& height) {
        stack<int> st;
        int res=0,i=0,n=height.size();
        while(i < n){
            if(st.empty() || height[i] <= height[st.top()]){
                st.push(i++);}
            else{
                int t = st.top(); st.pop();
                if(st.empty()){
                    continue;}
                res += (min(height[i],height[st.top()]) - height[t]) * (i-st.top()-1); 
            }
        }
        return res;
    }
};
