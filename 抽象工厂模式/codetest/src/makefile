IDIR =../inc
CC=g++
CFLAGS=-I$(IDIR)
ODIR=obj
LIBS=-lm
_DEPS = concrete_factory.h concrete_product.h product.h factory.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))
_OBJ = main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))
$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
factory: $(OBJ)
	g++ -o $@ $^ $(CFLAGS) $(LIBS)
.PHONY: clean
clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
