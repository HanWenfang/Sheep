INCLUDE = -I. -I/usr/local/include
CPP 	= g++
LIBRARY = -L. -L/usr/local/lib
SYSLIBS = 

obj-Sheep += Object.o
obj-Sheep += Integer.o
obj-Sheep += SparseStack.o
obj-Sheep += Stack.o


obj-Sheep += Sheep.o

