n= int(input())
height=[]
for i in range(n):
    a=int(input())
    height.append(a)
cnt=0
for i in range(n):
    if i==0 and height[i]>height[i+1]:
        k=i+2
        while height[i]>height[k]:
            cnt+=1
            k+=1
    elif height[i]>height[i+1]
print(cnt)

