CC=g++
CFLAGS=-std=c++11 -Wall -Wpedantic
IFLAGS=
LFLAGS=-lsfml-graphics -lsfml-window -lsfml-system

ODIR=../obj

_OBJ=GameObject.o Component.o GraphicsSystem.o GraphicsComponent.o InitState.o StateManager.o Vector2f.o
OBJ=$(patsubst %,$(ODIR)/%,$(_OBJ))

all: sge

sge: main.cpp $(OBJ)
	$(CC) main.cpp -o game $(LFLAGS)

$(ODIR)/%.o: %.cpp %.hpp
	$(CC) $^ -c $(CFLAGS) $(IFLAGS) 

.PHONY: clean

clean:
	rm -f ../$(ODIR)/*.o *~ game
