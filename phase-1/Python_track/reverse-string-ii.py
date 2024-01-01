class Solution:
  def reverseStr(self, s: str, k: int) -> str:
    if s:
        newstr = s[:k][::-1] + s[k:2 * k] + self.reverseStr(s[2 * k:], k) 
    else:
        newstr =  ""
    return newstr