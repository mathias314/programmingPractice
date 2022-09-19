from collections import defaultdict
from typing import List


def findDuplicate(self, paths: List[str]) -> List[List[str]]:
    map = defaultdict(list)
    duplicatePaths = []
    for p in paths:
        sep = p.split(" ")
        for i in range(1, len(sep)):
            parts = sep[i].split("(")
            cont = parts[1][:-1]
            map[cont].append(sep[0] + "/" + parts[0])
    for v in map.values():
        if len(v) > 1:
            duplicatePaths.append(v)

    return duplicatePaths
