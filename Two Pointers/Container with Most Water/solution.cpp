class Solution {
public:
    int maxArea(vector<int>& height) {
        int v = 0, L = 0, R = height.size()-1;
        while(L<R){
            v = max(v, min(height[L],height[R])*(R-L));
            if(height[L]<height[R]) L++;
            else R--;
       }
       return v;
    }
};