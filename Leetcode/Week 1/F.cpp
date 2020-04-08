class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<pair<string,string> >ss(strs.size());
        set<string>sz;
        for(int i=0;i<strs.size();i++){
            ss[i].second=strs[i];
            sort(strs[i].begin(),strs[i].end());
            ss[i].first=strs[i];
            sz.insert(strs[i]);
}
        sort(ss.begin(),ss.end());
        vector<vector<string> >v(sz.size());
        int j=0;
        v[0].push_back(ss[0].second);
        for(int i=1;i<ss.size();i++){
            string curr=ss[i].first;
            string prev=ss[i-1].first;
            if(curr.compare(prev)==0){
                v[j].push_back(ss[i].second);
}
            else{
                v[++j].push_back(ss[i].second);
}
        }
        return v;
    }
};
