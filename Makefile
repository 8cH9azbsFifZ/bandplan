xmltest:
	xmllint --noout --dtdvalid bandplans/bandplan.dtd bandplans/*.xml

check_references:
	./tools/check_references_for_changes.pl -filename=bandplans/references.xml 

html: 
	xsltproc tools/html.xsl bandplans/bandplan.xml > html/bandplan.html 

arduino:
	xsltproc tools/ft817_bandplan.xsl bandplans/bandplan.xml > c_structures/t_bandplan.h
	xsltproc tools/ft817_channels.xsl bandplans/bandplan.xml > c_structures/t_channels.h
	xsltproc tools/ft817_repeaters.xsl bandplans/bandplan.xml > c_structures/t_repeaters.h
	xsltproc tools/channels_txt.xsl bandplans/bandplan.xml > c_structures/ch.txt

test:
	xmltest
	check_references

all: html arduino

