from collections import Counter

# Número de elementos que van a haber en el array
n = int(input())

# El array a de n elementos
a = list(int(num) for num in raw_input().split())[:n]

# Se ordenan por ocurrencias y se escoge el primero
print(list(Counter(a).keys())[0])