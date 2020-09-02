x = input()

t1 = x.split(sep=' ') y = len(t1)
for i in range(0,y,1):

t1[i] = int(t1[i]) t1 = tuple(t1) start = int(input()) end = int(input())
print(t1[start:end:1])
