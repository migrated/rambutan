BIN = $(HOME)/Local/bin/
TEXINPUTS = $(HOME)/Local/tex/misc/
CC = gcc -w
OBJS = common.o pathopen.o

$(OBJS): common.c pathopen.c
	$(CC) -c common.c
	$(CC) -c pathopen.c

javatangle: tangle.c $(OBJS)
	$(CC) tangle.c $(OBJS) -o javatangle

javaweave: weave.c $(OBJS)
	$(CC) weave.c $(OBJS) -o javaweave

install: javatangle javaweave
	mv javatangle $(BIN)
	mv javaweave $(BIN)
	cp -p javaweb*.tex $(TEXINPUTS)

clean:
	rm -f *.o *~
