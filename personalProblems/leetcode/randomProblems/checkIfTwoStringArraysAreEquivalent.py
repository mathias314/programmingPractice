class Solution:
    def arrayStringsAreEqual(self, word1: List[str], word2: List[str]) -> bool:
        a = ""
        b = ""
        
        for word in word1:
            a += word
        for word in word2:
            b += word
            
        return a == b

        # return "".join(word1) == "".join(word2)