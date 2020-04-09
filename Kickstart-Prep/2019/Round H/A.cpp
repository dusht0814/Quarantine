#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>digits;
    for(int i=1;i<=9;i++){
        int x;
        cin>>x;
        if(x%2)
            digits.push_back(i);
    }
    