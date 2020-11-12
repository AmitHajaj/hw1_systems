CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB=basicMath.o power.o
FLAGS= -Wall -g

all: libmyMath.so libmyMath.a progmains progmaind
progmains: $(OBJECTS_MAIN) libmyMath.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyMath.a
progmaind: $(OBJECTS_MAIN) 
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./libmyMath.so
libmyMath.so: $(OBJECTS_LIB)
	$(CC) -shared -o libmyMath.so $(OBJECTS_LIB)
libmyMath.a: $(OBJECTS_LIB)
	$(AR) -rcs libmyMath.a $(OBJECTS_LIB)
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAG) -c basicMath.c
power.o: power.c myMath.h
		$(CC) $(FLAG) -c power.c
main.o: main.c myMath.h power.c basicMath.c
	$(CC) $(FLAGS) -c main.c power.c basicMath.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maind
