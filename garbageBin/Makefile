

include common.mk

default: bin/Sheep

bin/Sheep: $(obj-Sheep)
	$(CPP) $^ -o $@ $(LIBRARY) $(SYSLIBS)

%.o: %.cpp
	$(CPP) -Wall $(INCLUDE) -c $< -o $@

clean:
	rm -rf $(obj-Sheep) bin/Sheep



