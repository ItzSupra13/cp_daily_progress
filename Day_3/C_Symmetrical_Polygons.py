import sys
from collections import Counter
input = sys.stdin.readline

def max_perimeter(lengths):
    lengths.sort(reverse=True)
    total = sum(lengths)
    while len(lengths) >= 3:
        if lengths[0] < total - lengths[0]:
            return total
        # remove largest
        total -= lengths[0]
        lengths = lengths[1:]
    return 0

t = int(input())
for _ in range(t):
    n = int(input())
    sticks = list(map(int, input().split()))
    freq = Counter(sticks)

    pairs = []
    singles = []

    for k in freq:
        p = freq[k] // 2
        pairs.extend([k] * (p * 2))   # all pairs counted twice
        if freq[k] % 2 == 1:
            singles.append(k)          # leftover single

    # Try largest leftover single as center
    best = 0
    pairs.sort(reverse=True)

    if pairs:
        best = max(best, max_perimeter(pairs[:]))  # even polygon

    if singles:
        center = max(singles)
        sides = pairs[:] + [center]
        best = max(best, max_perimeter(sides))    # odd polygon

    print(best)
