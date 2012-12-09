DEP=bandplans/10m.xml bandplans/12m.xml bandplans/15m.xml bandplans/160m.xml bandplans/17m.xml bandplans/20m.xml bandplans/2200m.xml bandplans/2m.xml bandplans/30m.xml bandplans/40m.xml bandplans/6m.xml bandplans/70cm.xml bandplans/80m.xml bandplans/bandplan.xml bandplans/cb.xml bandplans/licenses.xml bandplans/lpd.xml bandplans/pmr.xml bandplans/references.xml

xmltest:
	xmllint --noout --dtdvalid bandplans/bandplan.dtd bandplans/*.xml

check_references:
	./tools/check_references_for_changes.pl -filename=bandplans/references.xml 

html: html/bandplan.html 

html/bandplan.html: $(DEP)
	xsltproc tools/html.xsl bandplans/bandplan.xml > html/bandplan.html 


arduino:
	xsltproc tools/ft817_struct.xsl bandplans/bandplan.xml > c_structures/ft817_struct.h
	./tools/ft817_struct.hack.sh > c_structures/arduino_header.h

test:
	xmltest
	check_references

all: html arduino

