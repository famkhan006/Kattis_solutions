class Solution:
    def reverseWords(self, s: str) -> str:
        x = list(s.split())
        x.reverse()
        m = ""

        m = " ".join(x)
   
        return(m)
        