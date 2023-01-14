class Solution {
public:
    int ds_find(vector<int> &ds, int p){
        return (ds[p]== -1 )? p : ds_find(ds, ds[p]); 
    }
    void ds_merge(vector<int> &ds, int p1, int p2){
        p1 = ds_find(ds, p1);
        p2 = ds_find(ds, p2);
        if(p1!=p2) ds[max(p1, p2)] = min(p1, p2);
    }

    string smallestEquivalentString(string s1, string s2, string baseStr) {
        vector<int> ds(26, -1);
        for(int i=0;i<s1.size();i++){
            ds_merge(ds, s1[i]-'a', s2[i]-'a');
        }
        for(int i=0;i<baseStr.size();i++){
            baseStr[i] = ds_find(ds, baseStr[i]-'a') + 'a';
        }
        return baseStr;
    }
};