class Solution {
public:
    
    string res(string S){
        stack<char>s;
        for(int i=0;i<S.length();i++){
            if(s.empty()){
                if(S[i]!='#'){
                    s.push(S[i]);
                }
            }
            else{
                if(S[i]=='#')
                    s.pop();
                else
                    s.push(S[i]);
            }
}
        string ans="";
        while(!s.empty()){
            ans+=s.top();
            s.pop();
        }
        return ans;
    }
    
    bool backspaceCompare(string S, string T) {
        string res1=res(S);
        string res2=res(T);
        cout<<res1<<" "<<res2<<"\n";
        if(res1.compare(res2)==0)
            return true;
        return false;
        
        
    }
};
