class Solution:
  def checkPowersOfThree(self, n: int) -> bool:
    while n > 1:
      r = n % 3
      if r == 2:
        return False
      n = n // 3
    return n == 1