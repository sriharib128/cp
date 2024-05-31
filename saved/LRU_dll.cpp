//https://leetcode.com/problems/lru-cache/
#include <bits/stdc++.h>
using namespace std;

class LRUCache {
private:
    struct Node{
        Node* next;
        int key;
        int Value;
        Node* prev;
    };
    unordered_map <int,Node*> cache;
    int capacity;
    Node * head;
    Node * tail;
public:
    LRUCache(int cap) {
        capacity=cap;
        head = NULL;
        tail=NULL;
    }
    int access(Node * cur_node){
        if(cur_node->prev!=NULL){
            cur_node->prev->next = cur_node->next;
            if(cur_node->next==NULL)
                head = cur_node->prev;
            if(tail!=NULL){
                tail->prev = cur_node;
                cur_node->next=tail;
                tail = cur_node;
                tail->prev = NULL;
            }
        }
        return cur_node->Value;
    }

    int get(int key) {
        if(cache.find(key)!=cache.end())            
            return access(cache[key]);
        return -1;
    }
    
    void put(int key, int value) {
        if(cache.find(key)!=cache.end()){
            Node * cur_node = cache[key];
            cur_node->Value=value;
            cur_node->key=key;
            access(cur_node);
            return;
        }
        if(cache.size()<capacity){
            Node * cur_node = new Node;
            cur_node->next = tail;
            cur_node->Value=value;
            cur_node->key=key;
            cur_node->prev=NULL;
            tail=cur_node;
            if(cache.size()==0)
                head = cur_node;
        }
        else{
            Node * cur_node = head;
            cache.erase(cur_node->key);
            cur_node->key=key;
            cur_node->Value=value;
            access(cur_node);
        }
    }
};
/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */