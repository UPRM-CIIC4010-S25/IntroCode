import math

A = int(input("What is side A? "))
B = int(input("What is side B? "))
C = int(input("What is side C? "))

s = (A + B + C)/2

area = math.sqrt(s*(s-A)*(s-B)*(s-C))

print(f"The area is {area}")