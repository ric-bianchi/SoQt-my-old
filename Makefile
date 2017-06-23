all:
	cd src/Inventor/Qt; qmake ; make

install:
	cd src/Inventor/Qt; qmake; make install


uninstall:
	cd src/Inventor/Qt; qmake; make uninstall


clean:
	cd src/Inventor/Qt; qmake; make clean

distclean:
	cd src/Inventor/Qt; qmake; make distclean

