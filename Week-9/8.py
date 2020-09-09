dicc = {'x':500, 'y':5874, 'z': 560}
key_max = max(dicc.keys(), key=(lambda k: dicc[k]))
key_min = min(dicc.keys(), key=(lambda k: dicc[k]))

print(dicc[key_max])
print(dicc[key_min])
