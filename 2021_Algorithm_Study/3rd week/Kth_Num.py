array=list(map(int,input().split()))
commands=[list(map(int,input().split()))for _ in range(3)]
ans=[]
print(type(commands))
for j in range(len(commands)):
    arr1 = []
    for i in range(commands[j][0],commands[j][1]+1):
        arr1.append(array[i-1])
    arr1.sort()
    ans.append(arr1[commands[j][2]-1])
print(ans)
