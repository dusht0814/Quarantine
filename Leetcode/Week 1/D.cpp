class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int siz=nums.size();
        for(int i=0;i<siz;i++){
            int j=i;
            while(nums[j]==0 && j<siz-1){
                j++;
                
}
            if(i!=j)
                swap(nums[i],nums[j]);
        }
    }
};
