class Solution:
    @lru_cache(maxsize=None)
    def isScramble(self, s1: str, s2: str) -> bool:
        if s1 == s2:
            return True
        if Counter(s1) != Counter(s2):
            return False
        L = len(s1)
        for i in range(1,L):
            if self.isScramble(s1[0:i],s2[0:i]) and self.isScramble(s1[i:],s2[i:]):
                return True
            if self.isScramble(s1[0:i],s2[L-i:]) and self.isScramble(s1[i:],s2[0:L-i]):
                return True
        return False
