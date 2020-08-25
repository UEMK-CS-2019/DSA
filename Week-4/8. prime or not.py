number = int(input())
if number > 1:
    for i in range(2, number):
        if (number % i) == 0:
            print("NOT PRIME")
            break
    else:
        print("PRIME")

else:
    print("NOT PRIME")
