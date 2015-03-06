CC = gcc
CFLAGS = -Wall
OBJS = main.o temperature_table.o

TARGET = fahrenheit-to-celcius.out

all: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

$(OBJS): temperature_table.h

.PHONY: clean
clean:
	-rm $(OBJS) $(TARGET)