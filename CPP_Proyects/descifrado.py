import os 
abc = 'abcdefghijklmnñopqrstuvwxyz '
def cifrar(cadena, clave):
	cadena_cifrar = ''
	i = 0
	for letra in cadena:
		suma = abc.find(letra) + abc.find(clave[i % len(clave)])
		modulo = int(suma) % len(abc)
		cadena_cifrar = cadena_cifrar + str(abc[modulo])
		i+=1
	texto_cifrado = "includes/encriptados.txt"
	archivo = open(texto_cifrado,'w+')
	archivo.write(cadena_cifrar)
	return "Se ha encriptado su texto en la siguiente ruta: /includes/encriptados.txt"
def descifrar (cadena,clave):
	cadena_cifrar = ''
	i = 0
	for letra in cadena:
		suma = abc.find(letra) - abc.find(clave[i % len(clave)])
		modulo = int(suma) % len(abc)
		cadena_cifrar = cadena_cifrar + str(abc[modulo])
		i+=1
	os.remove('includes/texto_cifrado.txt')
	return cadena_cifrar
def main():
	ruta_logo = 'includes/encriptados.txt'
	logo = open(ruta_logo,'r')
	print(logo.read())
	logo.close()
	while  True:
		
		print ("|--------------|")
		print ("|  1 Cifrar    |")
		print ("|  2 Descifrar |")
		print ("|  3 Salir     |")
		print ("|--------------|")
		opt = int(input("Ingrese opcion: "))
		if (opt == 1):
			cadena = input('Texto a cifrar: ').lower()
			#fcadena = cadena.replace(' ','')
			clave = input ('Clave: ').lower()
			print (cifrar(cadena,clave))
		if (opt == 2):
			cadena = input('Texto a Descifrar: ').lower()
			#fcadena = cadena.replace(' ','')
			clave = input ('Clave: ').lower()
			print (descifrar(cadena,clave))
		if (opt == 3):
			break
	
if __name__ == '__main__':
	main()