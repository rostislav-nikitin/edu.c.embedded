CC=gcc
CFLAGS=-O0

all:struct.o struct_typedef.o struct_align.o struct_bit_field.o union.o union_bit_field.o

struct.o:struct.c
	$(CC) $(CFLAGS) -o $@ $^

struct_typedef.o:struct_typedef.c
	$(CC) $(CFLAGS) -o $@ $^

struct_align.o:struct_align.c  
	$(CC) $(CFLAGS) -o $@ $^

struct_bit_field.o:struct_bit_field.c  
	$(CC) $(CFLAGS) -o $@ $^

union.o:union.c
	$(CC) $(CFLAGS) -o $@ $^

union_bit_field.o:union_bit_field.c  
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f *.o
