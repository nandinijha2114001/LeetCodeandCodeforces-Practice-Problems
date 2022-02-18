class Solution {
public:
    int maxArea(vector<int>& height) {
    int n=height.size();
    int s=0,e=n-1;
    int t=0,l=0,m=0;
    while(s<e){
        m=min(height[s],height[e]);
        t=m*(e-s);
        l=max(l,t);
        if(height[s]<height[e])
        s++;
        else e--;
    }

        return l;
    }
};
