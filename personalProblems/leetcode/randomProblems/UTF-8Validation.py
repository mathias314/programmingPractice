class Solution:
    def validUtf8(self, data: List[int]) -> bool:

        pattern = []

        for byte in data:
            pattern.append(format(byte, "08b"))

        i = 0
        while i < len(pattern):
            try:
                if pattern[i][0] == "0":
                    i += 1
                elif pattern[i][:3] == "110" and pattern[i + 1][:2] == "10":
                    i += 2
                elif (
                    pattern[i][:4] == "1110"
                    and pattern[i + 1][:2] == "10"
                    and pattern[i + 2][:2] == "10"
                ):
                    i += 3
                elif (
                    pattern[i][:5] == "11110"
                    and pattern[i + 1][:2] == "10"
                    and pattern[i + 2][:2] == "10"
                    and pattern[i + 3][:2] == "10"
                ):
                    i += 4
                else:
                    return False
            except IndexError:
                return False

        return True
