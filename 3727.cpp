class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                nums[i]=-1*nums[i];
            }
        }

        sort(nums.begin(),nums.end());

        long long ans=0;
        int i=0;
        int j=n-1;
        while(i<j){
            ans+=nums[j]*nums[j];
            ans-=nums[i]*nums[i];
            i++;
            j--;
        }
        if(i==j){
            ans+=nums[i]*nums[i];
        }

        return ans;
    }
};