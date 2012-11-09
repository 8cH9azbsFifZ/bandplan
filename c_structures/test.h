
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

// Bands configuration
typedef struct
{   
  char *name; // name of the band
  long low;   // lower frequency
  long high;  // upper frequency
  byte mode;  // main mode for this band
} t_band;

// Single channels
typedef struct 
{
  char *name; // channel name
  long freq;  // frequency
  byte mode;  // mode
} t_channel;

const t_band bands[] = {
				{"40m",700000,704000,FT817_MODE_CW_NARROW},
{"40m",704000,704700,FT817_MODE_CW_NARROW},
{"40m: automatic stations",704700,705000,FT817_MODE_CW_NARROW},
{"40m: automatic stations",705000,705300,FT817_MODE_USB},
{"40m: digital modes",705300,706000,FT817_MODE_USB},
{"40m: SSB contests",706000,710000,FT817_MODE_USB},
{"40m",710000,713000,FT817_MODE_USB},
{"40m: SSB contests",713000,720000,FT817_MODE_USB},
{"40m: Intercontinental QSO",717500,720000,FT817_MODE_USB},

};
int nbands = sizeof(bands)/sizeof(bands[0]);
				
