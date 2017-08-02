CFLAGS=-g -O2


PROGRAM_NAME= ppmf
OBJS = main.o processimage.o readwriteppm.o PPM.o

$(PROGRAM_NAME): $(OBJS)
	cc -o $@ $? 

clean:
	rm  *.o $(PROGRAM_NAME) *~
