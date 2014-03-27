# ------------ Options du projet -----------
TARGET=main

OBJECTS= src/$(TARGET).o src/Window.o

# ------------ Compilateur -----------
CC=g++
CCFLAGS=-W -Wall 

# ----------- Repertoires -----------
SFMLLIBDIR=./SFML-2.1/lib
SFMLINCDIR=./SFML-2.1/include


# ----------- Options de compilation -------
INCFLAGS=-I$(SFMLINCDIR) -I./include
LIBFLAGS=-L$(SFMLLIBDIR) -lsfml-graphics -lsfml-window -lsfml-system

# ---------- Regles de generation du projet -------

# ----- Compilation par defaut des source cpp
.cpp.o: 
	@echo Compiling $< ....
	$(CC) -c $(CCFLAGS) $(INCFLAGS) $< -o $*.o 

# ----- Edition de liens ------------
$(TARGET) : $(OBJECTS)
	@echo Linking ...
	$(CC) $(OBJECTS) $(LIBFLAGS) -o $(TARGET) -Wl,-rpath,$(SFMLLIBDIR)

run :
	./$(TARGET)

clean : 
	rm -f $(OBJECTS) src/*~ include/*~ *~

clear : clean
	rm -rf $(TARGET)

