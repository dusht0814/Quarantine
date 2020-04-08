#include<bits/stdc++.h>
using namespace std;

struct TrieNode{
    bool isEnd;
    int max_pre_length;
    struct TrieNode *children[26];
};

TrieNode *create(){
    TrieNode *temp=new TrieNode;
    temp->isEnd=false;
    for(int i=0;i<26;i++){
        temp->children[i]=NULL;
    }
    temp->max_pre_length=1;
    return temp;
}

void insert(TrieNode *root,string key){
    TrieNode *crawl=root;
    for(int i=0;i<key.length();i++){
        if(!crawl->children[key[i]-'A']){
            crawl->children[key[i]-'A']=create();
        }
        else{
            crawl->max_pre_length++;
        }
        crawl=crawl->children[key[i]-'A'];
    }
    crawl->isEnd=true;
}

bool search(TrieNode *root,string key){
    TrieNode *crawl=root;
    int mx=0;
    for(int i=0;i<key.length();i++){
        if(!crawl->children[key[i]-'A'])
            return false;
        mx=max(mx,crawl->max_pre_length);
        crawl=crawl->children[key[i]-'A'];
    }
    cout<<mx<<"\n";
    return crawl->isEnd;
}

int main(){
    TrieNode *root=create();
    insert(root,"RAINBOW");
    insert(root,"RANDOM");
    insert(root,"RANK");
    search(root,"RA")?cout<<"found\n":cout<<"notfound\n";

}