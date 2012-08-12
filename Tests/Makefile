CC = cxxtestgen
TESTER = tester

DEPS = ../src/Utils/UtilsTests.h ../src/Generators/GeneratorsTests.h \
	   ../src/FencePacket/FencePacketTests.h

$(TESTER).cpp: $(DEPS)
	$(CC) --error-printer -o $@ $(DEPS)

.PHONY: clean

clean:
	rm -f $(TESTER).cpp 

