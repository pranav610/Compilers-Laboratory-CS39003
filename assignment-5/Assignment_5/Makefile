a.out: lex.yy.o y.tab.o translator.o
	g++ lex.yy.o y.tab.o translator.o -ll

translator.o: translator.cpp translator.h
	g++ -c translator.h
	g++ -c translator.cpp

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

y.tab.o: y.tab.c
	g++ -c y.tab.c

lex.yy.c: lexer.l y.tab.c translator.h
	flex lexer.l

y.tab.c: parser.y
	yacc -dtv parser.y
	
clean:
	rm lex.yy.c y.tab.c y.tab.h lex.yy.o y.tab.o translator.o parser.output a.out translator.h.gch

run: a.out
	./a.out < TestFiles/test1.c > Test\ Outputs/quads1.out
	./a.out < TestFiles/test2.c > Test\ Outputs/quads2.out
	./a.out < TestFiles/test3.c > Test\ Outputs/quads3.out
	./a.out < TestFiles/test4.c > Test\ Outputs/quads4.out
	./a.out < TestFiles/test5.c > Test\ Outputs/quads5.out

