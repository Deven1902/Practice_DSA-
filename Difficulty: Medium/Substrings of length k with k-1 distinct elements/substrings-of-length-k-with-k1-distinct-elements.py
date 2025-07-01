class Solution:
    def substrCount(self, s, k):
        # code here
        count={}
        op=0
        left=0
        right=0
        while right<len(s):
            if s[right] not in count:
                count[s[right]]=1
            else:
                count[s[right]]+=1
            if right-left+1==k:
                if len(count.values())==k-1:
                    op+=1
                count[s[left]]-=1
                if count[s[left]] == 0:
                    del count[s[left]]
                left+=1
            right+=1
        return op