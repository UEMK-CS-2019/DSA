entries = int(input())
str = input()
l=[]
sum = 0
for i in range(0,entries):
    s = input().split(' ')
    if(s[0] == str):
        sum = sum + float(s[1])
        
print(float(sum))
