a=input()
b=tuple(a)
print(b)

-------------------------------

x = input() 
y = input() 
z = input()
t1 = x.split(sep = ' ') 
t2 = y.split(sep = ' ') 
t3 = z.split(sep = ' ') 
for i in range(0,3,1):
    t1[i] = int(t1[i])
    t2[i] = int(t2[i])
    t3[i] = int(t3[i]) 
t1 = tuple(t1)
t2 = tuple(t2) 
t3 = tuple(t3) 
t4 = [t1,t2,t3] 
print(t4)

