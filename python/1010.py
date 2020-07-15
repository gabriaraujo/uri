# -*- coding: utf-8 -*-

p1_code, p1_number, p1_price = input().split()

p1_code = int(p1_code)
p1_number = int(p1_number)
p1_price = float(p1_price)

p2_code, p2_number, p2_price = input().split()

p2_code = int(p2_code)
p2_number = int(p2_number)
p2_price = float(p2_price)

result = (p1_number * p1_price + p2_number * p2_price)

print("VALOR A PAGAR: R$ %.2f" %result)
