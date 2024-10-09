#compilar interface
SRCS := $(wildcard src/interface_xadrez/*.c) testes.c

HEADERS := $(wildcard src/interface_xadrez/*.h)

OBJS := $(patsubst src/interface_xadrez/%.c,build/%.o,$(SRCS))

build/%.o: src/interface_xadrez/%.c $(HEADERS)
	gcc -c -o $@ $< $(CFLAGS)


# main is a target, a file to be built
# ${OBJS} is the list of files required to build main. this files are called prerequisites
main: ${OBJS}
#indented comments will get printed to terminal when makefile is run
# here we have the recipee to build main: call gcc linker with target and prerequisites as arguments
# $@ expands to the target name and $^ expands to the full list of prerequisites
	gcc $^ -o $@ -lglut -lGLU -lGL
