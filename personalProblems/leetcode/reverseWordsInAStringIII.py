class Solution:
    def reverseWords(self, s: str) -> str:
        sep = s.split()
        ans = ""
        for word in sep:
            ans += word[::-1] + " "

        return ans[:-1]
