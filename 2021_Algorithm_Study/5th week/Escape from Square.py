arr= list(map(int,input().split()))
ans=[]
if arr[0]>arr[2]-arr[0]:
    ans.append(arr[2]-arr[0])
else:
    ans.append(arr[0])
if arr[1]>arr[3]-arr[1]:
    ans.append(arr[3]-arr[1])
else:
    ans.append(arr[1])
ans.sort()
print(ans[0])