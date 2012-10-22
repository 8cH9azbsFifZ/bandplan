#!/bin/bash
infile=$1
outfile=$infile.out
cat $infile |awk '
{
	gsub("&deg;","°");
	gsub("el#","EL#");
	gsub("il#","IL#");
	print;
}
' |awk '
BEGIN{
	FS=";"
}
{
	call=$1;qrg=$2;input=$3;locator=$4;info=$5;lat=$6;lon=$7;ctcss=$8;mode=$9;
	if(qrg==""){next;}
	gsub(",",".",qrg);
	gsub(",",".",ctcss);
	gsub(",",".",input);
	print "<channel name=\""call"\" freq=\""qrg"\">";
	if(input!=""){print "\t<repeater input=\""input"\"/>";}
	print "\t<position locator=\""locator"\"/>";
	print "\t<position lat=\""lat"\" lon=\""lon"\"/>";
	print "\t<comment>"info"</comment>";
	if (mode!="")
	{
		if (match(mode,"EL#"))
		{			
			node=mode;
			gsub(".*EL#","",node);
			gsub(",.*","",node);
			gsub("/.*","",node);
			print "\t<echolink node=\""node"\"/>";
		}
		if (match(mode,"IL#"))
		{			
			node=mode;
			gsub(".*IL#","",node);
			gsub("/.*","",node);
			print "\t<ilrp node=\""node"\"/>";
		}

		print "\t<comment>"mode"</comment>";
	}
	if (ctcss!="")
	{
		print "\t<ctcss>"ctcss"</ctcss>";
	}
	print "\t<source href=\"http://www.darc.de/echolink-bin/relais.pl\"/>";
	print "</channel>";
}' >$outfile

