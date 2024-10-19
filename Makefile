# Essa linha adiciona arquivos fonte para serem compilados
# Aqui estão somente os arquivos referentes à interface
# Para adicionarem os de vocês, basta colocarem os caminhos relativos à pasta do makefile 
# Vocês podem adicionar quantos arquivos quiserem, desde que usem espaços para separar cada nome e não removam nenhum dos que já estão na lista
# $(wildcard alguma_pasta/*.c) vai adicionar todos os arquivos .c da pasta "alguma_pasta"

SRC_MAIN := testes.c	
	#############################################
	# Fontes na pasta source 
PATH_SRC := src
SRCS_SRC := $(wildcard $(PATH_SRC)/*.c)

		#############################################
		# Fontes na pasta interface
PATH_INTERFACE := src/interface
SRCS_INTERFACE := $(wildcard $(PATH_INTERFACE)/*.c)



		#############################################
		# Fontes na pasta debug
PATH_DEBUG := src/debug
SRCS_DEBUG := $(wildcard $(PATH_DEBUG)/*.c)



		#############################################
		# Fontes na pasta game_manager
PATH_MANAGER := src/game_manager
SRCS_MANAGER := $(wildcard $(PATH_MANAGER)/*.c)

			#############################################
			# Fontes na pasta movimentos
PATH_MOVIMENTOS := src/game_manager/movimentos
SRCS_MOVIMENTOS := $(wildcard $(PATH_MOVIMENTOS)/*.c)


			#############################################
			# Fontes na pasta peca
PATH_PECAS := src/game_manager/peca
SRCS_PECAS := $(wildcard $(PATH_PECAS)/*.c)


				#############################################
				# Fontes na pasta criar_peca
PATH_CRIAR_PECA := src/game_manager/peca/criar_peca
SRCS_CRIAR_PECA := $(wildcard $(PATH_CRIAR_PECA)/*.c)


				#############################################
				# Fontes na pasta elemento_peca
PATH_ELEMENTO_PECA := src/game_manager/peca/elemento_peca
SRCS_ELEMENTO_PECA := $(wildcard $(PATH_ELEMENTO_PECA)/*.c)


			#############################################
			# Fontes na pasta tabuleiro
PATH_TABULEIRO := src/game_manager/tabuleiro
SRCS_TABULEIRO := $(wildcard $(PATH_TABULEIRO)/*.c)


		#############################################
		# Fontes na pasta utilitarios
PATH_UTILITARIOS := src/utilitarios
SRCS_UTILITARIOS := $(wildcard $(PATH_UTILITARIOS)/*.c)



# Aqui devem ser adicionados os cabeçalhos, as regras são as mesmas 

	
	#############################################
	# Cabeçalhos na pasta source
HDRS_SRC := $(wildcard src/$(PATH_SRC)/*.h)


		#############################################
		# Cabeçalhos na pasta interface
HDRS_INTERFACE := $(wildcard $(PATH_INTERFACE)/*.h)



		#############################################
		# Cabeçalhos na pasta debug
HDRS_DEBUG := $(wildcard $(PATH_DEBUG)/*.h)



		#############################################
		# Cabeçalhos na pasta game_manager
HDRS_MANAGER := $(wildcard $(PATH_MANAGER)/*.h)

			#############################################
			# Cabeçalhos na pasta movimentos
HDRS_MOVIMENTOS := $(wildcard $(PATH_MOVIMENTOS)/*.h)


			#############################################
			# Cabeçalhos na pasta peca
HDRS_PECAS := $(wildcard $(PATH_PECAS)/*.h)


				#############################################
				# Cabeçalhos na pasta criar_peca
HDRS_CRIAR_PECA := $(wildcard $(PATH_CRIAR_PECA)/*.h)


				#############################################
				# Cabeçalhos na pasta elemento_peca
HDRS_ELEMENTO_PECA := $(wildcard $(PATH_ELEMENTO_PECA)/*.h)


			#############################################
			# Cabeçalhos na pasta tabuleiro
HDRS_TABULEIRO := $(wildcard $(PATH_TABULEIRO)/*.h)


		#############################################
		# Cabeçalhos na pasta utilitários
HDRS_UTILITARIOS := $(wildcard $(PATH_UTILITARIOS)/*.h)


HDRS_TODOS := $(HDRS_SRC) $(HDRS_UTILITARIOS) $(HDRS_INTERFACE) $(HDRS_DEBUG) $(HDRS_MOVIMENTOS) $(HDRS_PECAS) $(HDRS_CRIAR_PECA) $(HDRS_ELEMENTO_PECA) $(HDRS_TABULEIRO) $(HDRS_MANAGER)


# Aqui ficam os arquivos objeto. Eles serão criados pelo makefile, mas precisam ter seus nomes especificados. As regras são as mesmas
# $(patsubst alguma_pasta/%.c,build/%.o,$(OBJS)) vai pegar os arquivos na lista de arquivos OBJS e testar se se são arquivos .c da pasta "alguma_pasta". Se sim, o nome do arquivo vai ser usado  como nome do arquivo objeto, que vai ser criado na pasta build

OBJS_MAIN := build/testes.o

	#############################################
	# Objetos da pasta source
OBJS_SRC := $(patsubst $(PATH_SRC)/%.c,build/$(PATH_SRC)/%.o,$(SRCS_SRC))


		#############################################
		# Objetos da pasta interface
OBJS_INTERFACE := $(patsubst $(PATH_INTERFACE)/%.c,build/$(PATH_INTERFACE)/%.o,$(SRCS_INTERFACE))



		#############################################
		# Objetos da pasta debug
OBJS_DEBUG := $(patsubst $(PATH_DEBUG)/%.c,build/$(PATH_DEBUG)/%.o,$(SRCS_DEBUG))



		#############################################
		# Objetos da pasta game_manager
OBJS_MANAGER := $(patsubst $(PATH_MANAGER)/%.c,build/$(PATH_MANAGER)/%.o,$(SRCS_MANAGER))


			#############################################
			# Objetos da pasta movimentos
OBJS_MOVIMENTOS := $(patsubst $(PATH_MOVIMENTOS)/%.c,build/$(PATH_MOVIMENTOS)/%.o,$(SRCS_MOVIMENTOS))


			#############################################
			# Objetos da pasta peca
OBJS_PECAS := $(patsubst $(PATH_PECAS)/%.c,build/$(PATH_PECAS)/%.o,$(SRCS_PECAS))


				#############################################
				# Objetos da pasta criar_peca
OBJS_CRIAR_PECA := $(patsubst $(PATH_CRIAR_PECA)/%.c,build/$(PATH_CRIAR_PECA)/%.o,$(SRCS_CRIAR_PECA))


				#############################################
				# Objetos da pasta elemento_peca
OBJS_ELEMENTO_PECA := $(patsubst $(PATH_ELEMENTO_PECA)/%.c,build/$(PATH_ELEMENTO_PECA)/%.o,$(SRCS_ELEMENTO_PECA))


			#############################################
			# Objetos da pasta peca
OBJS_TABULEIRO := $(patsubst $(PATH_TABULEIRO)/%.c,build/$(PATH_TABULEIRO)/%.o,$(SRCS_TABULEIRO))



		#############################################
		# Objetos da pasta utilitarios
OBJS_UTILITARIOS := $(patsubst $(PATH_UTILITARIOS)/%.c,build/$(PATH_UTILITARIOS)/%.o,$(SRCS_UTILITARIOS))


	#######################
	# Todos os objetos juntos
OBJS_TODOS := $(OBJS_UTILITARIOS) $(OBJS_SRC) $(OBJS_INTERFACE) $(OBJS_DEBUG) $(OBJS_MOVIMENTOS) $(OBJS_PECAS) $(OBJS_CRIAR_PECA) $(OBJS_ELEMENTO_PECA) $(OBJS_TABULEIRO) $(OBJS_MANAGER) $(OBJS_MAIN) #
	

# Aqui são gerados os arquivos objeto da interface
build/$(PATH_INTERFACE)/%.o: $(PATH_INTERFACE)/%.c $(HDRS_TODOS)
	gcc -ggdb -O0 -Wall -c -o $@ $< $(CFLAGS)


build/$(PATH_MANAGER)/%.o: $(PATH_MANAGER)/%.c $(HDRS_TODOS)
	gcc -ggdb -O0 -Wall -c -o $@ $< $(CFLAGS)


build/$(SRC)/%.o: $(SRC)/%.c $(HDRS_TODOS)
	gcc -ggdb -O0 -Wall -c -o $@ $< $(CFLAGS)


build/%.o: %.c $(HDRS_TODOS)
	gcc -ggdb -O0 -Wall -c -o $@ $< $(CFLAGS)


# Aqui são gerados os arquivos objeto da depuração
build/$(PATH_DEBUG)/%.o: $(PATH_DEBUG)/%.c $(HDRS_TODOS)
	gcc -ggdb -O0 -Wall -c -o $@ $< $(CFLAGS)


# Aqui são gerados os arquivos objeto da pasta movimentos
build/$(PATH_MOVIMENTOS)/%.o: $(PATH_MOVIMENTOS)/%.c $(HDRS_TODOS)
	gcc -ggdb -O0 -Wall -c -o $@ $< $(CFLAGS)


# Aqui são gerados os arquivos objeto da pasta peca
build/$(PATH_PECAS)/%.o: $(PATH_PECAS)/%.c $(HDRS_TODOS)
	gcc -ggdb -O0 -Wall -c -o $@ $< $(CFLAGS)


# Aqui são gerados os arquivos objeto da pasta criar_peca
build/$(PATH_CRIAR_PECA)/%.o: $(PATH_CRIAR_PECA)/%.c $(HDRS_TODOS)
	gcc -ggdb -O0 -Wall -c -o $@ $< $(CFLAGS)


# Aqui são gerados os arquivos objeto da pasta elemento_peca
build/$(PATH_ELEMENTO_PECA)/%.o: $(PATH_ELEMENTO_PECA)/%.c $(HDRS_TODOS)
	gcc -ggdb -O0 -Wall -c -o $@ $< $(CFLAGS)


# Aqui são gerados os arquivos objeto da pasta tabuleiro
build/$(PATH_TABULEIRO)/%.o: $(PATH_TABULEIRO)/%.c $(HDRS_TODOS)
	gcc -ggdb -O0 -Wall -c -o $@ $< $(CFLAGS)


# Aqui são gerados os arquivos objeto da 
build/$(PATH_UTILITARIOS)/%.o: $(PATH_UTILITARIOS)/%.c $(HDRS_TODOS)
	gcc -ggdb -O0 -Wall -c -o $@ $< $(CFLAGS)

# Aqui o programa é finalmente compilado
main: $(OBJS_TODOS) $(HDRS_TODOS)
	gcc -ggdb -O0 -Wall $^ -o $@ -lglut -lGLU -lGL
