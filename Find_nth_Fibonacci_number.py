def fn(num):
  if num == 0: return print(0) 
  list = [0] * (num + 1)
  list[1] = 1
  for i in range(2, num + 1):
    list[i] = list[i - 1] + list[i - 2]
  return print(list[num])

fn(299)
