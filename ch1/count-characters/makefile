CC = cc
CFLAGS = -Wall

OBJS = count-char.o
TARGETS = count-char.out

all: $(TARGETS)

$(TARGETS): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGETS)

clean:
	-rm $(OBJS)
	-rm $(TARGETS)