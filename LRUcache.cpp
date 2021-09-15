class LRUCache {
public:
    class node{
        public:
        node* next;
        node* prev;
        int key, val;
        node(int key, int val)
        {
            this->key=key;
            this->val=val;
        }
    
    };
        node* head= new node(-1, -1);
        node* tail= new node(-1, -1);
    int cap=0;
        unordered_map<int, node*> mp;
    LRUCache(int capacity) {
      head->next= tail;
        tail->prev= head;
        cap=capacity;
    }
    void addnode(node* head, int key, int ans){
         node* temp= head->next;
            head->next= new node(key, ans);
            head->next->prev= head;
            head->next->next= temp;
            temp->prev= head->next;
    }
    void delnode(node* del){
         del->prev->next= del->next;
            del->next->prev= del->prev;
    }
    
    int get(int key) {
        int ans=-1;
        if(mp.find(key)!=mp.end())
        {
            ans= mp[key]->val;
            addnode(head, key, ans);
           
            
            node* del= mp[key];
            delnode(del);
            mp[key]= head->next;
        }
        return ans;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end())
        {
            node* del= mp[key];
             mp.erase(key);
            delnode(del);
           
        }
        if(mp.size()==cap)
        {
            node* del= tail->prev;
            delnode(del);
            mp.erase(del->key);
        }
         addnode(head, key, value);
        mp[key]=head->next;
    }
};
