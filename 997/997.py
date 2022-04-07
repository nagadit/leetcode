from typing import List
def findJudge(n: int, trust: List[List[int]]):
    trusts = [0 for i in range(n)]
    for pair in trust:
        trusts[pair[1] -1] += 1
        trusts[pair[0] -1] -= 1
    if n-1 in trusts:
        judge = trusts.index(n-1) +1
    else: judge = -1
    return judge

if __name__ == "__main__":
    print(findJudge(3,[[1,3],[2,3],[3,1]]))