compile: main.c 
	 gcc main.c -o sasit

run: sasit
	 ./sasit

clean: sasit
	 rm sasit