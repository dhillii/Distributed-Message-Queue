CC=gcc
CFLAGS=-I.

makeall: consumer.c producer.c
	$(CC) consumer.c -o consume.exe
	$(CC) producer.c -o produce.exe