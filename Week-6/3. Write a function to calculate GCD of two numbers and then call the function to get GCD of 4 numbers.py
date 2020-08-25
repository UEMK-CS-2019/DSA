def compute_hcf(x, y):

    if x > y:
        smaller = y
    else:
        smaller = x
    for i in range(1, smaller+1):
        if((x % i == 0) and (y % i == 0)):
            hcf = i 
    return hcf
str = input()
s = (str.split(","))

num1 = int(s[0]) 
num2 = int(s[1])
num3 = int(s[2])
num4 = int(s[3])

a = compute_hcf(num1, num2)
b = compute_hcf(a,num3)
c = compute_hcf(b,num4)
print (c)
