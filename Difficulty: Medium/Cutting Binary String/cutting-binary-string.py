cands=set()
cur=1
while cur<=(1<<30):
    cands.add(bin(cur)[2:])
    cur*=5

class Solution:
    def cuts(self, s):
        from functools import lru_cache
        @lru_cache(None)
        def dfs(ix=len(s)):
            nonlocal s
            if ix<=0:
                return 0
            mn=float('inf')
            for cand in cands:
                if ix-len(cand)<0:
                    continue
                if s[ix-len(cand):ix]==cand:
                    mn=min(mn,1+dfs(ix-len(cand)))
            return mn
        ret=dfs()
        return ret if ret!=float('inf') else -1

