x = int(input())
y = int(input())
z = int(input())

a1 = min(x, y, z)
a3 = max(x, y, z)
a2 = (x + y + z) - a1 - a3
print(a1, a2, a3)
