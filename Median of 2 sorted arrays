class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       
  vector<int> merged;
  
        merged=nums1;
        int temp;
        for(int i=0;i<nums2.size();i++){
            temp=nums2[i];
            merged.push_back(temp);
        }
        sort(merged.begin(),merged.end());
        if(merged.size()%2==0){
          int  mid = (merged.size()/2)-1;
          int mid1=merged[mid];
          int mid2=merged[mid+1];
          float x=(float)mid1;
          float y=(float)mid2;
        double median =(x+y)/2;
            return median;
        
        }
        else {
            double mid= merged.size()/2;
        return merged[mid];
        }
    }
};
