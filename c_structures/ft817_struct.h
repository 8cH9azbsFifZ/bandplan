
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


		/* Error: Wrong version. *//* Error: Wrong version. *//* Error: Wrong version. */
	 

	
		
		
			
		
		
			
		
		
			automatic stations
		
		
			automatic stations
		
		
			digital modes
		
		
			SSB contests
		
	
	
		
		
			
		
		
			SSB contests
		
		
			Intercontinental QSO
		
	

	{"QRP",703000,FT817_MODE_CW_NARROW, NaN,""},
{"Emergency Region 1",711000, NULL , NaN,""},
{"ATV",716500, NULL , NaN,""},
{"Digital Speech",707000, NULL , NaN,""},
{"QRP",709000, NULL , NaN,""},
{"WSPR",703860, NULL , NaN,""},
&gt;
		&gt;
	
/* Error: Wrong version. *//* Error: Wrong version. *//* Error: Wrong version. *//* Error: Wrong version. *//* Error: Wrong version. *//* Error: Wrong version. *//* Error: Wrong version. *//* Error: Wrong version. */
	 

	
      
      

		
			
			
				
				EME CW and Random MS Freq.
			
			
				
				EME MGM
			
			
				
				EME CW
			
		
		
			
			
			
				
				SSB
			
		
		
			
			
			
		
		
			Beacons, no sending (excl. WSPR)
		
		
			
			
				
				Lineartransponder Output
			
			
				
				Lineartransponder Output
			
		
		
			
			MGM, Packet Radio
			
				
				Digimode, automatic stations
			
		
		
			
			
				
				Relais Input
				RV 48(X) / RV 63
				Shift 6.25 kHz
			
		
		
		
		
					
			Relais Output
			RV 48(X) / RV 63
			Shift 6.25 kHz
		
		
			
			Space-Earth
		
		
			
			Satellites
		
	


	{"S1: simplex channel",14521250,FT817_MODE_FM, NaN,""},
{"ARPS",14480000,FT817_MODE_FM, NaN,""},
{"Echolink",14496250,FT817_MODE_FM, NaN,""},
{"Echolink",14497500,FT817_MODE_FM, NaN,""},
{"RTTY local",14530000, NULL , NaN,""},
{"DV CQ: Digital Speech with ",14537500, NULL , NaN,""},
{"PSK31: MGM PSK31",14417000, NULL , NaN,""},
{"SSB CQ",14430000, NULL , NaN,""},
{"MGM CQ",14437000, NULL , NaN,""},
{"WSPR",14448900, NULL , NaN,""},
{"SSTV CQ",14450000, NULL , NaN,""},
{"ATV: ATV SSB Callback",14452500, NULL , NaN,""},
{"RTTY CQ",14460000, NULL , NaN,""},
{"Fax CQ",14470000, NULL , NaN,""},
{"ATV CQ / Callback",14475000, NULL , NaN,""},
&gt;
		&gt;
	

	 

	
      
      

		
			Echolink
			NBFM / DV Simplex U 003-028
			DVR RU30 - RU31
			PR Duplex Input, +9.4MHz shift, 25 kHz width, RU 784 - RU 798
			PR Simplex, Digipeater, 25 kHz width, U048 - U050
			PR Duplex, +7.6MHz shift, 25 kHz width, RU 664- (RU)682
			NBFM Relais Input, +7.6 MHz shift, 12.5 kHz width, RU 684 - RU 690
			DV (RX) 12.6 kHz width, TX +7.6 MHz shift
		

		
		
		Beacons, no sending
		
		ATV
		
		
	

	&gt;
		{"DB0VA",43932500,FT817_MODE_FM, -760000,"JO40BC"},
{"DB0ESW",43905000,FT817_MODE_FM, -760000,"JO51AE"},
&gt;
	
/* Error: Wrong version. *//* Error: Wrong version. */
