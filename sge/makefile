CC=g++

IFLAGS=
LFLAGS=-lsfml-graphics -lsfml-window -lsfml-system

ODIR=../obj

all: sge

sge: main.cpp Car.o GameObject.o Component.o GraphicsComponent.o GraphicsSystem.o InitState.o StateManager.o Vector2f.o
	$(CC) main.cpp -o game $(LFLAGS)

%.o: %.cpp %.hpp
	$(CC) $^ $(IFLAGS) $(LFLAGS) -o $@

.PHONY: clean

clean:
	rm -f ../$(ODIR)/*.o *~ game
