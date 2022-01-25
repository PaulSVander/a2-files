main:
	gcc -std=c99 -Wall -g -o movies_by_year movies_by_year.c

clean:
	rm -f movies_by_year