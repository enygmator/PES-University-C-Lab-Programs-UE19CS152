a.out : $(FILENO)client.o $(FILENO)server.o
	gcc $? -o $@
$(FILENO)client.o : $(FILENO)client.c $(FILENO)server.h
	gcc -c $?
$(FILENO)server.o : $(FILENO)server.c $(FILENO)server.h
	gcc -c $?
clean:
	rm -f *.o *.h.gch a.out
