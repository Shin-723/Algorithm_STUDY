absolutes = list(map(int, input().split()))
signs = list(map(str, input().split()))
for i in range(len(absolutes)):
    if signs[i] == "true":
        absolutes[i]=absolutes[i]
    else:
        absolutes[i]= absolutes[i]*(-1)
type(signs[0])
print(type(signs[0]))