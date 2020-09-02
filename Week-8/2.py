n = input() 
z = n
x = len(n) 
y = n[x::-1]
start = int(input()) 
end = int(input())
z = y[start:end-1:-1] 
w = z.strip() 
print("'{}'".format(w))
