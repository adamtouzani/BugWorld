.SUFFIXES:  .cpp .o
CC      = g++ -std=c++11
OBJS    = Bug.o	I_drop.o I_move.o I_unmark.o Structs.o Cell.o I_flip.o \
					I_pickup.o Instruction.o	World.o	I_sense.o	Marker.o I_direction.o \
					I_mark.o I_turn.o Program.o
CFLAGS  = -Wall

all:		simulator
simulator:	$(OBJS)
			$(CC) $(OBJS) main.cpp -o simulator

%.o:		source_files/%.cpp header_files/%.h
			$(CC) $(CFLAGS) -c $<

clean:
			rm *.o simulator
