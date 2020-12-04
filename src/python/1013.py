# -*- coding: utf-8 -*-

a, b, c  = input().split()

a = int(a)
b = int(b)
c = int(c)

list = [a, b, c]
list.sort()

print("%d eh o maior" %list[2])
