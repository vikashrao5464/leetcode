class Solution {
public:
int mod=1e9+7;
    int maxSum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>vec(30);
        for(int i=0;i<n;i++){
            for(int j=0;j<30;j++){
                if(nums[i]&(1<<j)){
                    vec[j]++;
                }
            }
        }
       long long ans=0;
        while(k--){
            long long num=0;
            for(int i=0;i<30;i++){
                if(vec[i]>0){
                  num+=pow(2,i);
                  vec[i]--;
                }else{
                    num+=0;
                }
            }
            ans=(ans+num*num)%mod;
        }

    return ans%mod;
    }
};