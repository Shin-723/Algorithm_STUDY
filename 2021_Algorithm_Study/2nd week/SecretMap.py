from collections import deque
n = int(input())
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))
ans=[]

for i in range(n):
    binary1 = deque()
    binary2 = deque()
    while arr1[i] != 0:
        binary1.appendleft((int(arr1[i] % 2)))
        arr1[i]=int(arr1[i]/2)
    while arr2[i] !=0:
        binary2.appendleft((int(arr2[i] % 2)))
        arr2[i] = int(arr2[i] / 2)
    while len(binary1) <n:
        binary1.appendleft(0)
    while len(binary2) < n:
        binary2.appendleft(0)
    print(binary1)
    print(binary2)
    for k in range(len(binary1)):
        if binary1[k] !=binary2[k] and binary2[k]==1:
            binary1[k]=binary2[k]
    ans.append(binary1)
for i in range(len(ans)):
    for j in range(len(ans[i])):
        if ans[i][j]==1:
            ans[i][j]="#"
        elif ans[i][j]==0:
            ans[i][j]=" "
    print(str(''.join(ans[i])))


