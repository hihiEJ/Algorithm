a = int(input())
b = list(map(int,str(input())))
for i in range(2,-1,-1):
    print(a*b[i])
print(a*(b[0]*100+b[1]*10+b[2]))
