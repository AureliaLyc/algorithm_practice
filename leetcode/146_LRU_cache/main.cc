class LRUCache{
private:
    typedef int Key;
    typedef int Val;
    typedef list<Key> Key_List;
    typedef unordered_map<Key, pair<Key_List::iterator, Val>> LRU_Impl;
    int      _capacity;
    Key_List _keys;
    LRU_Impl _cache;
public:
    LRUCache(int capacity) {
        _capacity = capacity;
    }

    int get(int key) {
        auto it=_cache.find(key);
        if(it!=_cache.end()){
            _keys.erase(it->second.first);
            _keys.push_back(key);
            auto e=_keys.end();
            --e;
            it->second.first=e;
            return it->second.second;
        }
        return -1;
    }

    void set(int key, int value) {
        auto it=_cache.find(key);
        if(it!=_cache.end()){
            it->second.second=value;
            _keys.erase(it->second.first);
            _keys.push_back(key);
            auto e=_keys.end();
            --e;
            it->second.first=e;
        }
        else {
            if(_cache.size()==_capacity){
                auto p=_keys.begin();
                _cache.erase(*p);
                _keys.erase(p);
            }
            _keys.push_back(key);
            auto e=_keys.end();
            --e;
            _cache[key]=make_pair(e, value);
        }
    }
};