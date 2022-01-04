#https://www.youtube.com/watch?v=eKp56OLhoQs

import numpy as np

inp = 2000000

a = np.array([1 for x in range(inp+1)])
value = np.array([y for y in range(inp+1)])

a[0] = 0
a[1] = 0
i = 2
j = 2
total = 0

while i <= inp**0.5:
  if a[i] == 1:
    while j <= inp/i:
      a[i*j] = 0
      j+=1
  i+=1
  j = 2

for z in range(len(a)):
  if a[z] == 1:
    total = total + value[z]

print(total)
