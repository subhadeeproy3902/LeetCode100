#define ll long long
#define mod 1000000007
class Solution {
public:
    int sumOfPower(vector<int>& nums) {
        long long ans=0;
        int n=nums.size();
        sort(nums.begin(), nums.end(), greater<int>());
        for(auto x:nums){
            ans = (ans + (((1ll*x*x)%mod)*x)%mod)%mod;
        }
        ll bracket = 0;
        for(int i = n-2; i>=0; i--){
            bracket = (2*bracket + nums[i+1])%mod;
            ans = (ans + ((bracket*nums[i])%mod)*nums[i])%mod;
        }
        return ans;
    }
};