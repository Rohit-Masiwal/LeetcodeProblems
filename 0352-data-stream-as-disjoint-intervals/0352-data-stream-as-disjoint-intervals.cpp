class SummaryRanges {
private:
    map<int, int> m_;

public:
    SummaryRanges() = default;
    
    void addNum(int val) {
        auto [it, inserted]  = m_.insert({val, val});
        if (!inserted) return;
        if (it != begin(m_)) {
            auto p = prev(it);
            if (p->second + 1 >= it->first) {
                p->second = max(it->first, p->second);
                m_.erase(it);
                it = p;                
            }
        }
        
        if (it != end(m_)) {
            auto n = next(it);
            if (it->second + 1 == n->first) {
                it->second = n->second;
                m_.erase(n);
            }
        }
    }
    
    vector<vector<int>> getIntervals() const {
        vector<vector<int>> ans;
        ans.reserve(size(m_));
        for (auto [l, r] : m_) ans.push_back({l, r});
        return ans;
    }
};
/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */