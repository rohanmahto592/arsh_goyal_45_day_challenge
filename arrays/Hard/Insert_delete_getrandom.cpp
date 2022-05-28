class RandomizedCollection {
    unordered_map<int,int>mp;
     vector<int>v;
public:
    RandomizedCollection() {
        mp.clear();   
       v.clear();
        
    }
    
    bool insert(int val) {
        if(mp.find(val)!=mp.end())
        {
            return false;
        }
        v.push_back(val);
        mp[val]=v.size()-1;
        return true;
        
    }
    
    bool remove(int val) {
        if(mp.find(val)==mp.end())
        {
            return false;
        }
        auto indx=mp.find(val);
        v[indx->second]=v.back();
        v.pop_back();
        mp[v[indx->second]]=indx->second;
        mp.erase(val);
        return true;
        
    }
    
    int getRandom() {
       
        return v[rand()%v.size()];
        
    }
};