class MyHashMap {
public:
    map<int, int> newHashMap;
    /** Initialize your data structure here. */
    MyHashMap() {
        
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        int query = key;
        if(newHashMap.find(query)!=newHashMap.end()){
            map<int,int>::iterator it = newHashMap.find(query);
            it->second = value;
        }
        
        else{
            newHashMap.insert(pair<int,int>(key,value));
        }
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        map<int,int>::iterator it;
        int val = -1;
        for(it=newHashMap.begin();it!=newHashMap.end();it++){
            if(it->first == key){
                cout << " get for " << key << it->second;
                val = it->second;
            }
        }
        return val;
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        int query = key;
        if(newHashMap.find(query)!=newHashMap.end()){
            newHashMap.erase(query);
            cout << " removed " << key;
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
