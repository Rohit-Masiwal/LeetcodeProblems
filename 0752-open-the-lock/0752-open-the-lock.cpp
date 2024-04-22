class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> deadendSet(deadends.begin(), deadends.end());
        if (deadendSet.count("0000")) {
            return -1;
        }
        
        queue<pair<string, int>> queue;
        queue.push({"0000", 0});
        unordered_set<string> visited;
        visited.insert("0000");
        
        while (!queue.empty()) {
            auto current = queue.front();
            queue.pop();
            string currentCombination = current.first;
            int moves = current.second;
            
            if (currentCombination == target) {
                return moves;
            }
            
            for (int i = 0; i < 4; i++) {
                for (int delta : {-1, 1}) {
                    int newDigit = (currentCombination[i] - '0' + delta + 10) % 10;
                    string newCombination = currentCombination;
                    newCombination[i] = '0' + newDigit;
                    
                    if (visited.find(newCombination) == visited.end() && deadendSet.find(newCombination) == deadendSet.end()) {
                        visited.insert(newCombination);
                        queue.push({newCombination, moves + 1});
                    }
                }
            }
        }
        
        return -1;
    }
};
/*
    0000 -> 0100 -> 0200 -> 0201 x
    0000 -> 
    
    
    (0000, 0) -> (1000, 1), (0100, 1), 0010, 0001, 9000, 0900, 0090, (0009, 1)
    (1000, 1) -> (2000, 2), (1100, 2), ()
*/