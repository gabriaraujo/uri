# -*- coding: utf-8 -*-

a, b, c  = input().split()

a = float(a)
b = float(b)
c = float(c)

print("TRIANGULO: %.3f" %((a * c) / 2))
print("CIRCULO: %.3f" %(3.14159 * c ** 2))
print("TRAPEZIO: %.3f" %((a + b) * c / 2))
print("QUADRADO: %.3f" %(b ** 2))
print("RETANGULO: %.3f" %(a * b))
