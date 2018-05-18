main:	main.cc a_what.o a_why.o
			g++ -o main a_what.o a_why.o main.cc

a_what.o:	a_what.cc
			g++ -c a_what.cc

a_why.o:	a_why.cc
			g++ -c a_why.cc
