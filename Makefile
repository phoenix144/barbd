CC      = /usr/bin/gcc
CFLAGS  = -std=gnu11 -Werror -Wall
LIBS = -pthread -lrt

SDIR=src
IDIR=include
BDIR=bin
ODIR=obj

_OBJ = main.o daemon.o worker.o util.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

_DEPS = daemon.h worker.h util.h
DEPS = $(patsubst %,$(IDIR)%,$(_DEPS))


$(ODIR)/util.o: $(SDIR)/util.c
	$(CC) -c -o $@ $< $(CFLAGS)
	
$(ODIR)/daemon.o: $(SDIR)/daemon.c
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/worker.o: $(SDIR)/worker.c
	$(CC) -c -o $@ $< $(CFLAGS)

$(ODIR)/main.o: $(SDIR)/main.c
	$(CC) -c -o $@ $< $(CFLAGS)


barbd: $(OBJ)
	$(CC) -o $(BDIR)/$@ $^ $(CFLAGS) $(LIBS)


.PHONY: all clean execute

all: barbd

clean:
	rm -f $(ODIR)/*.o $(BDIR)/* 

execute:
	$(BDIR)/barbd
