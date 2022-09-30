class Solution {
public:
    string reversePrefix(string word, char ch) {
        int count=1,j=0;
        for(int i=0;i<word.size();i++){
            if(ch==word[i]){
                break;
            }
            count++;
        }
        //cout<<count<<" ";
        if(count==word.size()+1) return word;
        reverse(word.begin()+j,word.begin()+count);
        return word;
    }
};