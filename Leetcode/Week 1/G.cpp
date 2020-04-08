class Solution {
public:
    int countElements(vector<int>& arr) {
        set<int>s;
        for(int i=0;i<arr.size();i++){
            s.insert(arr[i]);
}
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            if(s.find(arr[i]+1)!=s.end())
                cnt++;
}
        return cnt;
        
    }
};
