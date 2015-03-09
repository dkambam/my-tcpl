CC = cc
CFLAGS = -Wall

OBJS = copy.o
TARGETS = copy.out

all: $(TARGETS)

$(TARGETS): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGETS)

clean:
	-rm $(OBJS)
	-rm $(TARGETS)