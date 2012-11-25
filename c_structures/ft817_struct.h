
/*
	 This file is part of xmlbandplan.

    Xmlbandplan is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Xmlbandplan is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Xmlbandplan.  If not, see http://www.gnu.org/licenses/;.	  
*/

/*
 * This file has been created by xmlbandplan.
 */


#include "FT817.h" 

typedef struct 
{
  prog_char *name; // channel name
  prog_int32_t freq;  // frequency (Hz/10)  
  prog_uint16_t mode;  // mode
  prog_int32_t shift;
  prog_char *qth;
} t_channel;

// Reference structure
prog_char ch1_name[] PROGMEM = "WSPR";
prog_char ch2_name[] PROGMEM = "WS2PR";
prog_char ch1_qth[] PROGMEM = "";
prog_char ch2_qth[] PROGMEM = "JO40BC";

PROGMEM  t_channel chxx[] = {
{ch1_name,13600, FT817_MODE_FM ,760000 ,ch1_qth},
{ch2_name,183660, FT817_MODE_AM ,NULL ,ch2_qth},
};


		
	 

	

	{"WSPR",13600, NULL , NULL, NULL},
&gt;
		&gt;
	

	 

	

	

	


	{"WSPR",183660, NULL , NULL, NULL},
{"QRP",183600,FT817_MODE_CW_NARROW, NULL, NULL},
&gt;
		&gt;
	
	

	 

	
	
	{"ATV",373500, NULL , NULL, NULL},
{"Emergency Region 1",376000, NULL , NULL, NULL},
{"QRP",369000, NULL , NULL, NULL},
{"Digital Speech",363000, NULL , NULL, NULL},
{"QRP",356000,FT817_MODE_CW_NARROW, NULL, NULL},
{"QRS",355500,FT817_MODE_CW_NARROW, NULL, NULL},
{"WSPR",359260, NULL , NULL, NULL},
&gt;
		&gt;
	

	 

	
	

	{"QRP",703000,FT817_MODE_CW_NARROW, NULL, NULL},
{"Emergency Region 1",711000, NULL , NULL, NULL},
{"ATV",716500, NULL , NULL, NULL},
{"Digital Speech",707000, NULL , NULL, NULL},
{"QRP",709000, NULL , NULL, NULL},
{"WSPR",703860, NULL , NULL, NULL},
&gt;
		&gt;
	

	 

	

	{"QRP",1011600,FT817_MODE_CW_NARROW, NULL, NULL},
{"WSPR",1013870, NULL , NULL, NULL},
&gt;
		&gt;
	

	 

	

	{"QRP",1406000,FT817_MODE_CW_NARROW, NULL, NULL},
{"Emergency",1430000, NULL , NULL, NULL},
{"WSPR",1409560, NULL , NULL, NULL},
&gt;
		&gt;
	

	 
	
	

	{"QRP",1808600,FT817_MODE_CW_NARROW, NULL, NULL},
{"QRP",1813000, NULL , NULL, NULL},
{"Digital Speech",1815000, NULL , NULL, NULL},
{"Emergency",1816000, NULL , NULL, NULL},
{"WSPR",1810460, NULL , NULL, NULL},
&gt;
		&gt;
	


	 
	


	{"QRP",2106000,FT817_MODE_CW_NARROW, NULL, NULL},
{"QRS",2105500,FT817_MODE_CW_NARROW, NULL, NULL},
{"Digital Speech",2118000, NULL , NULL, NULL},
{"WSPR",2199460, NULL , NULL, NULL},
&gt;
		&gt;
	

	 
	
	
	{"QRP",2490600,FT817_MODE_CW_NARROW, NULL, NULL},
{"QRP",2495000, NULL , NULL, NULL},
{"WSPR",2492460, NULL , NULL, NULL},
&gt;
		&gt;
	

	 

	
	{"QRP",2836000, NULL , NULL, NULL},
{"Digital Speech",2833000, NULL , NULL, NULL},
{"FM Call",2960000,FT817_MODE_FM, NULL, NULL},
{"FM Call",2961000,FT817_MODE_FM, NULL, NULL},
{"QRS",2805500,FT817_MODE_CW_NARROW, NULL, NULL},
{"QRP",2806000,FT817_MODE_CW_NARROW, NULL, NULL},
{"APRS",2925000,FT817_MODE_FM, NULL, NULL},
{"WSPR",2812460, NULL , NULL, NULL},
&gt;
		&gt;
	

/* Error: Wrong version. */
	 

	

	

	{"WSPR",502930, NULL , NULL, NULL},
&gt;
		&gt;
	


	 

	


	{"S1",14521250,FT817_MODE_FM, NULL, NULL},
{"ARPS",14480000,FT817_MODE_FM, NULL, NULL},
{"Echolink",14496250,FT817_MODE_FM, NULL, NULL},
{"Echolink",14497500,FT817_MODE_FM, NULL, NULL},
{"RTTY local",14530000, NULL , NULL, NULL},
{"DV CQ",14537500, NULL , NULL, NULL},
{"PSK31",14417000, NULL , NULL, NULL},
{"SSB CQ",14430000, NULL , NULL, NULL},
{"MGM CQ",14437000, NULL , NULL, NULL},
{"WSPR",14448900, NULL , NULL, NULL},
{"SSTV CQ",14450000, NULL , NULL, NULL},
{"ATV",14452500, NULL , NULL, NULL},
{"RTTY CQ",14460000, NULL , NULL, NULL},
{"Fax CQ",14470000, NULL , NULL, NULL},
{"ATV CQ / Callback",14475000, NULL , NULL, NULL},
&gt;
		&gt;
	

	 

	

	&gt;
		{"DB0VA",43932500,FT817_MODE_FM, -760000, "JO40BC"},
{"DB0ESW",43905000,FT817_MODE_FM, -760000, "JO51AE"},
&gt;
	
/* Error: Wrong version. *//* Error: Wrong version. */
