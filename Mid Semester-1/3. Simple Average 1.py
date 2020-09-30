avg = 0.0
sum = 0.0
count = 0
while(True):
    s = input()
    if(s == 'stop'):
        break
    sum = sum + int(s)
    count = count + 1
if(count == 0):
    print("0")
else:
    avg = float(sum/count)
    print(avg)
