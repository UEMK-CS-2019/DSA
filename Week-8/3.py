x = input() 
list1 = [x]
a = x.split(sep = ' ') 
b = len(a)
for i in range(0,b,1): 
    a[i] = int(a[i])
c = int(input())
