xmltest:
	xmllint --noout --dtdvalid bandplans/bandplan.dtd bandplans/*.xml

check_references:
	./tools/check_references_for_changes.pl -filename=bandplans/references.xml 

html: 
	xsltproc tools/html.xsl bandplans/bandplan.xml > html/bandplan.html 

arduino:
	xsltproc tools/ft817_struct.xsl bandplans/bandplan.xml > c_structures/ft817_struct.h
	./tools/ft817_struct.hack.sh > c_structures/arduino_header.h

test:
	xmltest
	check_references

all: html arduino

