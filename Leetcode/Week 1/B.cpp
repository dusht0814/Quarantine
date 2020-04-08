class Solution {
public:
    long long sumSquare(long long n){
        long long ans=0;
        while(n!=0){
            int r=n%10;
            n=n/10;
            ans+=r*r;
        }
        return ans;
	}
    
    
    bool isHappy(int m) {
        set<long long>s;
        int n=(long long)m;
        while(n!=1){
            if(s.find(n)!=s.end()){
                return false;
			}
            s.insert(n);
            n=sumSquare(n);
            
			}
        return true;
        
    }

};
