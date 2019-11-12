import math

M = 0.26149721284764278

a = input()
a = int(a)


result = math.log(math.log(a)) + M
print(round(result, 3))