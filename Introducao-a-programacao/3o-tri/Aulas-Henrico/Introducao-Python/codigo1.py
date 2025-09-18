print("Ola, tudo bom?")

for i in range(10):
    print(2*i)

print('=======================================================')
list = [i for i in range(1, 10)]

for el in list:
    print(el)

souBonitoPrak7 = len("Ola") == 3

print("=======================================================")
if souBonitoPrak7:
    print("Namoral")
elif not souBonitoPrak7:
    print("Codigo ta bugado")
else:
    print("Uai")