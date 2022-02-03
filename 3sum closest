class Solution{
public:
int threeSumClosest(vector<int>& nums, int target){
int sum=nums[0]+nums[1]+nums[3];
    int dif,res=sum;
    if(target>sum){
        dif=target-sum;
    }
    else dif=sum-target;
    int ms=dif;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            for(int k=j+1;k<nums.size();k++){
                sum=nums[i]+nums[j]+nums[k];
                if(target>sum){
                    dif=target-sum;
                }
                else dif=sum-target;
                if(ms>dif){
                    res=sum;
                }
                    ms=min(ms,dif);
            }
        } 
    }
 return res;
 }
};
