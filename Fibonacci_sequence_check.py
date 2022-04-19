def fibonacciCheck(num):
  flag = True
  a=0
  b=1

  while(flag == True):
    c = a + b
    if c == num:
      flag = False
      return "Yes"
    elif c < num:
      a=b
      b=c
    else:
      flag = False
      return "No"

def main():
  num = input("Enter a number: ")
  num = int(num)
  print(fibonacciCheck(num))

if __name__ == "__main__":
  main()
