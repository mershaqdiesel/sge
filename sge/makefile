CC=g++
CFLAGS=-std=c++11 -Wall -Wpedantic
DFLAGS=-DDebug -g
IFLAGS=
LFLAGS=-lsfml-graphics -lsfml-window -lsfml-system

ODIR=.

_OBJ=GameObject.o Component.o GraphicsSystem.o GraphicsComponent.o InitState.o StateManager.o Car.o
OBJ=$(patsubst %,$(ODIR)/%,$(_OBJ))

all: sge

debug: main.cpp $(OBJ)
	$(CC) $^ -o game_debug $(LFLAGS) $(DFLAGS)

sge: main.cpp $(OBJ)
	$(CC) $^ -o game $(LFLAGS)

$(ODIR)/%.o: %.cpp %.hpp
	$(CC) $^ -c $(CFLAGS) $(IFLAGS) $(DFLAGS)

.PHONY: clean

clean:
	rm -f *.gch *.swp $(ODIR)/*.o *~ game
