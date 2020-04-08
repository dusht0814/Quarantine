class Solution {
public:
    
    int kadane(vector<int>& nums){
        int meh=0,msh=0;
        int mx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mx=max(mx,nums[i]);
            meh+=nums[i];
            if(meh<0)
                meh=0;
            if(msh<meh)
                msh=meh;
        }
        //cout<<mx<<"\n";
        if(mx<0)
            return mx;
        else
            return msh;
        
}
    
    int maxSubArray(vector<int>& nums) {
        return kadane(nums);
        
    }
};
