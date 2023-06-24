class Solution{   
public:

// Brute Force Solution
    /*
    int klengthpref(string a[], int n, int k, string s){    
        if(s.size()<k)
            return 0;
            
        string x=s.substr(0,k);
        int i,cnt=0;
        for(i=0;i<n;i++) {
            if(a[i].size()<k)
                continue;
            string temp=a[i].substr(0,k);
            
            if(x==temp)
                cnt++;
        }
        return cnt;
    }
    */
    
    // time complexity:- O(n*k)
    // space complexity:- O(n) 
    
    // optimised solution 👇👇
    
    struct Node {
        int pre_cnt;
        unordered_map<char,Node*>next;
        
        Node() {
            pre_cnt=0;
        }
    };
    
    int klengthpref(string a[], int n, int k, string s) {    
        if(s.length()<k)
            return 0;
            
        Node* root = new Node();
        int i,j,cnt=0;
        
        for(i=0;i<n;i++) {
            string x=a[i];
            Node *temp=root;
            for(j=0;j<x.length();j++) {
                if(temp->next.find(x[j])==temp->next.end())temp->next[x[j]]=new Node();
                temp=temp->next[x[j]];
                temp->pre_cnt++;
            }
        }
        
        Node *temp=root;
        for(i=0;i<k;i++) {
            if(temp->next.find(s[i])==temp->next.end())return 0;
            else temp=temp->next[s[i]];
        }
        
        return temp->pre_cnt;
    }
    
    // Time Complexity: O(n*l)
    // Space Complexity: O(m*l)
    
    // m-> no of unique characters present in strings
    // l -> length of longest string present in the array
