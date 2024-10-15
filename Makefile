# Essa linha adiciona arquivos fonte para serem compilados
# Aqui estão somente os arquivos referentes à interface
# Para adicionarem os de vocês, basta colocarem os caminhos relativos à pasta do makefile 
# Vocês podem adicionar quantos arquivos quiserem, desde que usem espaços para separar cada nome e não removam nenhum dos que já estão na lista
# $(wildcard alguma_pasta/*.c) vai adicionar todos os arquivos .c da pasta "alguma_pasta"
SRCS := $(wildcard src/interface/*.c) $(wildcard src/debug/*.c) $(wildcard src/game_manager/movimentos/*.c) $(wildcard src/game_manager/peca/criar_peca/*.c) $(wildcard src/game_manager/peca/elemento_peca/*.c) src/game_manager/peca/inicializar_peca.c $(wildcard src/game_manager/tabuleiro/*.c) src/globais.c testes.c

# Aqui devem ser adicionados os cabeçalhos, as regras são as mesmas 
HEADERS := $(wildcard src/interface/*.h)

# Aqui ficam os arquivos objeto. Eles serão criados pelo makefile, mas precisam ter seus nomes especificados. As regras são as mesmas
# $(patsubst alguma_pasta/%.c,build/%.o,$(SRCS)) vai pegar os arquivos na lista de arquivos SRCS e testar se se são arquivos .c da pasta "alguma_pasta". Se sim, o nome do arquivo vai ser usado  como nome do arquivo objeto, que vai ser criado na pasta build
OBJS := $(patsubst src/interface/%.c,build/%.o,$(SRCS))

# Aqui são gerados os arquivos objeto
build/%.o: src/interface/%.c $(HEADERS)
	gcc -g -Wall -c -o $@ $< $(CFLAGS)


# Aqui o programa é finalmente compilado
main: ${OBJS}
	gcc -g -Wall $^ -o $@ -lglut -lGLU -lGL
