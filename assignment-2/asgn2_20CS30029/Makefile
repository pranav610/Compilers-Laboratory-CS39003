a.out:  main.o libMyStdio.a
		cc main.o -L. -lMyStdio  

main.o: main.c myl.h
		cc -c main.c

libMyStdio.a: ass2_20CS30029.o
			  ar -rcs libMyStdio.a ass2_20CS30029.o

ass2_20CS30029.o: ass2_20CS30029.c myl.h
			      cc -c ass2_20CS30029.c

clean:
		rm main.o libMyStdio.a ass2_20CS30029.o