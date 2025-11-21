lista=[12,8,19,24,3,6,42,10]
n=len(lista)
max=lista[0]
for i in range(1,n):
	if max<lista[i]:
		max=lista[i]
		print(i)
print(max)
	
