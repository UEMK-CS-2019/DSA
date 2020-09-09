def binary_search(a, x): 
    low = 0
    high = len(a) - 1
    mid = 0
  
    while low <= high: 
  
        mid = (high + low) // 2
  
        if a[mid] < x: 
            low = mid + 1
  
        elif a[mid] > x: 
            high = mid - 1
  
        else: 
            return mid 
  
    return -1
key=int(input())
n=int(input())  
a= list(map(int,input().strip().split()))[:n]
result = binary_search(a, key) 
  
if result != -1: 
    print("element found in the position", str(result+1)) 
else: 
    print("not found")
