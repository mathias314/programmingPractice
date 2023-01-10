class Solution:
    def maximum69Number (self, num: int) -> int:
        maxNum = num
        for i, digit in enumerate(str(num)):
            if digit == "6":
                maxNum = str(num)[0:i] + "9" + str(num)[i+1:]
                break
                
        return int(maxNum)