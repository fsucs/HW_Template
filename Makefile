
all:
	cd src; make; cd ..

clean:
	cd src; make clean; cd ..;
	rm -rf ./doc/*
	rm -rf ./bin/*

