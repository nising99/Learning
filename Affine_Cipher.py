def encry(enchar):
  if enchar == "A": return 0
  elif enchar == "B": return 1
  elif enchar == "C": return 2
  elif enchar == "D": return 3
  elif enchar == "E": return 4
  elif enchar == "F": return 5
  elif enchar == "G": return 6
  elif enchar == "H": return 7
  elif enchar == "I": return 8
  elif enchar == "J": return 9
  elif enchar == "K": return 10
  elif enchar == "L": return 11
  elif enchar == "M": return 12
  elif enchar == "N": return 13
  elif enchar == "O": return 14
  elif enchar == "P": return 15
  elif enchar == "Q": return 16
  elif enchar == "R": return 17
  elif enchar == "S": return 18
  elif enchar == "T": return 19
  elif enchar == "U": return 20
  elif enchar == "V": return 21
  elif enchar == "W": return 22
  elif enchar == "X": return 23
  elif enchar == "Y": return 24
  else: return 25
  
def decry(dechar):
  if dechar == 0: print("A", end='')
  elif dechar == 1: print("B", end='')
  elif dechar == 2: print("C", end='')
  elif dechar == 3: print("D", end='')
  elif dechar == 4: print("E", end='')
  elif dechar == 5: print("F", end='')
  elif dechar == 6: print("G", end='')
  elif dechar == 7: print("H", end='')
  elif dechar == 8: print("I", end='')
  elif dechar == 9: print("J", end='')
  elif dechar == 10: print("K", end='')
  elif dechar == 11: print("L", end='')
  elif dechar == 12: print("M", end='')
  elif dechar == 13: print("N", end='')
  elif dechar == 14: print("O", end='')
  elif dechar == 15: print("P", end='')
  elif dechar == 16: print("Q", end='')
  elif dechar == 17: print("R", end='')
  elif dechar == 18: print("S", end='')
  elif dechar == 19: print("T", end='')
  elif dechar == 20: print("U", end='')
  elif dechar == 21: print("V", end='')
  elif dechar == 22: print("W", end='')
  elif dechar == 23: print("X", end='')
  elif dechar == 24: print("Y", end='')
  else: print("Z", end='')
  
text = input("Enter text without space (to encrypt) : ").upper()
a = input("Enter a value : ")
b = input("Enter b value : ")

for i in range(len(text)):
  v = encry(text[i])
  v = (int(a) * v + int(b)) % 26
  decry(v)
  v = 0
  
def modInverse(a): 
  for x in range(1, 26):
    if (((a%26) * (x%26)) % 26 == 1):
      return x
  return -1

text = input("\n\nEnter text without space (to decrypt) : ").upper()
a = input("Enter a value : ")
a = int(a)
b = input("Enter b value : ")

if modInverse(a) == -1:
  print("no solution")
else:
  for i in range(len(text)):
    v = encry(text[i])
    v = (modInverse(a) * (v - int(b))) % 26
    decry(v)
    v = 0
