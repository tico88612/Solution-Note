import math

prime_num = [2, 3, 5, 7, 11]
prime_ex = [2, 6, 30, 210, 2310]


def init():
    w = 13
    total = 5
    while total < 5000:
        sus = True
        i = 0
        while sus and math.sqrt(w) >= prime_num[i]:
            if w % prime_num[i] == 0:
                sus = False
            i += 1
        if sus:
            prime_num.append(w)
            prime_ex.append(prime_ex[total-1]*w)
            total += 1
        w += 1
init()
while True:
    try:
        a = input()
    except EOFError:
        break
    a = int(a)
    print(prime_ex[a-1])
