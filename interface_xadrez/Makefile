SOURCES:=$(wildcard *.c) # wildcard is a function

# main is a target, a file to be built
# ${SOURCES} is the list of files required to build main. this files are called prerequisites
main: ${SOURCES}
#indented comments will get printed to terminal when makefile is run
# here we have the recipee to build main: call gcc linker with target and prerequisites as arguments
# $@ expands to the target name and $^ expands to the full list of prerequisites
	gcc -o $@ $^ -lglut -lGLU -lGL
