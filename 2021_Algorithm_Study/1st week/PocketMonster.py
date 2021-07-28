arr = list(map(int, input().split()))
total = len(arr)
ans= len(list(set(arr)))
while ans > total / 2:
    ans -= 1
print(ans)
