
OBJS = son_hongju_Assn2.o son_baconCode.o

CC = gcc

DEBUG = -g


LFLAGS = -Wall $(DEBUG)


assn2exe: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o assn2exe


clean:
	\rm *.o *~ baconize

