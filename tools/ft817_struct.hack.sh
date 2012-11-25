cat c_structures/ft817_struct.h |grep -v "&gt;"|awk '
BEGIN{FS=","}
NF>=5{
 n++;
 name=$1;
 freq=$2;
 mode=$3;
 shift=$4;
 qth=$5;
 gsub("{","",name);
 gsub("}","",qth);
 v[n] = "prog_char ch"n"_name[] PROGMEM = "name";";
 w[n] = "prog_char ch"n"_qth[] PROGMEM = "qth";";
 l[n] = "{ch"n"_name,"freq","mode","shift",ch"n"_qth},";
 $0="";
}
{
	m++;
	ll[m] =$0;
}

END{
 print "/* Unmodified lines */";
 for (i=0;i<m;i++)
	 {
		 print ll[i];
	 }
 print "/* String definitions */";
 for (i=0;i<n;i++)
	 {
		 print v[i];
		 print w[i];
	 }
 print "/* Channels structure */";
 print "PROGMEM  t_channel channels[] = {";
 for (i=0;i<n;i++)
	 {
		 print l[i];
	 }
 print "};";
 print "int nchannels = "n";";
}
'

