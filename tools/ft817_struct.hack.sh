cat c_structures/ft817_struct.h |grep -v "&gt;"|awk '
BEGIN{FS=","}
NF>=5{
 n++;
 name=$1;
 qth=$5;
 gsub("{","",name);
 gsub("}","",qth);
 v[n] = "prog_char ch"n"_name[] PROGMEM = "name";";
 w[n] = "prog_char ch"n"_qth[] PROGMEM = "qth";";
}

END{
 for (i=0;i<n;i++)
	 {
		 print v[i];
		 print w[i];
	 }
}
'

