import os

from PIL import Image

inputs_path = "entradas/"
outputs_path = "saidas/"

inputs_list = []
outputs_list = []

for in_file in os.listdir(inputs_path):
	inputs_list.append(Image.open(in_file))
	outputs_list(open(outputs_path + os.path.splittext(in_file) + "_bytes"))

exit()

# Cria-se um objeto Image com a imagem especificada
ima = 


# Image.getdata() retorna um objeto sequencial (parece uma lista, mas não é) com os pixels na imagem
px_list = list(ima.getdata())

trg = open("peao_16_tex", "wb")

for i in px_list: # i referencia os pixels
	for j in i: # j referencia os canais de cor (RGBA)
		trg.write(bytes([j]))
#	for j in range(0, 4):
#		print("i is " + str(i))
#		image[i//14][i%14][j] = px_list[i][j]
	
#trg.write(image)

trg.close()
