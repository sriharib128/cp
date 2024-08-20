#include<bits/stdc++.h>
using namespace std;
struct Compare{
    public:
    bool operator()(const pair<int,string> & a, const pair<int,string> & b){
        if(a.first==b.first)
            return a.second>b.second;
        return a.first > b.first;
    }
};
typedef priority_queue<pair<int,string>,vector<pair<int,string>>,Compare> pq;

struct Node{
    Node* links[26];
    int pw=0;
    int ew=0;

    bool containsKey(char c){
        return (links[c-'a']!=NULL);
    }

    Node * getLink(char c){
        return links[c-'a'];
    }
    
    void putKey(char c){
        links[c-'a'] = new Node();
    }
};

class Trie{
private:
    Node* root;
public:
    Trie(){
        root = new Node();
    }
    void insertWord(string Word){
        Node * cur_node = root;
        for(char c: Word){
            if(!cur_node->containsKey(c))
                cur_node->putKey(c);
            cur_node=cur_node->getLink(c);
            cur_node->pw++;
        }
        cur_node->ew++;
    }
    void get_all_words(Node * root,string &prefix, pq &words, int k){
        if(root->ew!=0)
            words.push({root->ew,prefix});
        if(words.size()> k)
            words.pop();
        for(int i=0;i<26;i++){
            if(root->links[i]==NULL)
                continue;
            prefix.push_back((char)(i+'a'));
            get_all_words(root->links[i],prefix,words,k);
            prefix.pop_back();
        }

    }
    vector<string> topKword(string prefix,int K){
        vector<string> res;
        Node* curNode = root;
        for(char c: prefix){
            if(!curNode->containsKey(c))
                return res;
            curNode=curNode->getLink(c);
        }
        pq words;
        get_all_words(curNode, prefix,words, K);
        while(!words.empty()){
            res.push_back(words.top().second);
            words.pop();
        }
        return res;
    }

};
int main(){
    Trie t;
    t.insertWord("apple");
    t.insertWord("apple");
    t.insertWord("apples");
    t.insertWord("apples");
    t.insertWord("apples");
    t.insertWord("applesmore");
    t.insertWord("applesmore");
    t.insertWord("applesmore");
    t.insertWord("applesmore");

    vector<string> res = t.topKword("app",2);
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
    cout<<endl;
}