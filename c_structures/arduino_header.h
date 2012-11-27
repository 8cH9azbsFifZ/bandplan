/* Unmodified lines */


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

		
	 

	


	

	 

	

	

	




	
	

	 

	
	







	

	 

	
	







	

	 

	



	

	 

	




	

	 
	
	






	


	 
	






	

	 
	
	



	

	 

	








	


	

	






















































































	

	 

	

	


	


	 

	

































































































	

	 

	


































































































































































































































































































































































































































































































































































































































































































































































































































	

	

	






































































	

	

	

	
	









	
/* String definitions */


prog_char ch1_name[] PROGMEM = 	"WSPR";
prog_char ch1_qth[] PROGMEM =  "";
prog_char ch2_name[] PROGMEM = 	"WSPR";
prog_char ch2_qth[] PROGMEM =  "";
prog_char ch3_name[] PROGMEM = "QRP";
prog_char ch3_qth[] PROGMEM =  "";
prog_char ch4_name[] PROGMEM = 	"ATV";
prog_char ch4_qth[] PROGMEM =  "";
prog_char ch5_name[] PROGMEM = "Emergency Region 1";
prog_char ch5_qth[] PROGMEM =  "";
prog_char ch6_name[] PROGMEM = "QRP";
prog_char ch6_qth[] PROGMEM =  "";
prog_char ch7_name[] PROGMEM = "Digital Speech";
prog_char ch7_qth[] PROGMEM =  "";
prog_char ch8_name[] PROGMEM = "QRP";
prog_char ch8_qth[] PROGMEM =  "";
prog_char ch9_name[] PROGMEM = "QRS";
prog_char ch9_qth[] PROGMEM =  "";
prog_char ch10_name[] PROGMEM = "WSPR";
prog_char ch10_qth[] PROGMEM =  "";
prog_char ch11_name[] PROGMEM = 	"QRP";
prog_char ch11_qth[] PROGMEM =  "";
prog_char ch12_name[] PROGMEM = "Emergency Region 1";
prog_char ch12_qth[] PROGMEM =  "";
prog_char ch13_name[] PROGMEM = "ATV";
prog_char ch13_qth[] PROGMEM =  "";
prog_char ch14_name[] PROGMEM = "Digital Speech";
prog_char ch14_qth[] PROGMEM =  "";
prog_char ch15_name[] PROGMEM = "QRP";
prog_char ch15_qth[] PROGMEM =  "";
prog_char ch16_name[] PROGMEM = "WSPR";
prog_char ch16_qth[] PROGMEM =  "";
prog_char ch17_name[] PROGMEM = 	"QRP";
prog_char ch17_qth[] PROGMEM =  "";
prog_char ch18_name[] PROGMEM = "WSPR";
prog_char ch18_qth[] PROGMEM =  "";
prog_char ch19_name[] PROGMEM = 	"QRP";
prog_char ch19_qth[] PROGMEM =  "";
prog_char ch20_name[] PROGMEM = "Emergency";
prog_char ch20_qth[] PROGMEM =  "";
prog_char ch21_name[] PROGMEM = "WSPR";
prog_char ch21_qth[] PROGMEM =  "";
prog_char ch22_name[] PROGMEM = 	"QRP";
prog_char ch22_qth[] PROGMEM =  "";
prog_char ch23_name[] PROGMEM = "QRP";
prog_char ch23_qth[] PROGMEM =  "";
prog_char ch24_name[] PROGMEM = "Digital Speech";
prog_char ch24_qth[] PROGMEM =  "";
prog_char ch25_name[] PROGMEM = "Emergency";
prog_char ch25_qth[] PROGMEM =  "";
prog_char ch26_name[] PROGMEM = "WSPR";
prog_char ch26_qth[] PROGMEM =  "";
prog_char ch27_name[] PROGMEM = 	"QRP";
prog_char ch27_qth[] PROGMEM =  "";
prog_char ch28_name[] PROGMEM = "QRS";
prog_char ch28_qth[] PROGMEM =  "";
prog_char ch29_name[] PROGMEM = "Digital Speech";
prog_char ch29_qth[] PROGMEM =  "";
prog_char ch30_name[] PROGMEM = "WSPR";
prog_char ch30_qth[] PROGMEM =  "";
prog_char ch31_name[] PROGMEM = 	"QRP";
prog_char ch31_qth[] PROGMEM =  "";
prog_char ch32_name[] PROGMEM = "QRP";
prog_char ch32_qth[] PROGMEM =  "";
prog_char ch33_name[] PROGMEM = "WSPR";
prog_char ch33_qth[] PROGMEM =  "";
prog_char ch34_name[] PROGMEM = 	"QRP";
prog_char ch34_qth[] PROGMEM =  "";
prog_char ch35_name[] PROGMEM = "Digital Speech";
prog_char ch35_qth[] PROGMEM =  "";
prog_char ch36_name[] PROGMEM = "FM Call";
prog_char ch36_qth[] PROGMEM =  "";
prog_char ch37_name[] PROGMEM = "FM Call";
prog_char ch37_qth[] PROGMEM =  "";
prog_char ch38_name[] PROGMEM = "QRS";
prog_char ch38_qth[] PROGMEM =  "";
prog_char ch39_name[] PROGMEM = "QRP";
prog_char ch39_qth[] PROGMEM =  "";
prog_char ch40_name[] PROGMEM = "APRS";
prog_char ch40_qth[] PROGMEM =  "";
prog_char ch41_name[] PROGMEM = "WSPR";
prog_char ch41_qth[] PROGMEM =  "";
prog_char ch42_name[] PROGMEM = 	"1";
prog_char ch42_qth[] PROGMEM =  "";
prog_char ch43_name[] PROGMEM = "2";
prog_char ch43_qth[] PROGMEM =  "";
prog_char ch44_name[] PROGMEM = "3";
prog_char ch44_qth[] PROGMEM =  "";
prog_char ch45_name[] PROGMEM = "3A";
prog_char ch45_qth[] PROGMEM =  "";
prog_char ch46_name[] PROGMEM = "4";
prog_char ch46_qth[] PROGMEM =  "";
prog_char ch47_name[] PROGMEM = "5";
prog_char ch47_qth[] PROGMEM =  "";
prog_char ch48_name[] PROGMEM = "6";
prog_char ch48_qth[] PROGMEM =  "";
prog_char ch49_name[] PROGMEM = "7";
prog_char ch49_qth[] PROGMEM =  "";
prog_char ch50_name[] PROGMEM = "7A";
prog_char ch50_qth[] PROGMEM =  "";
prog_char ch51_name[] PROGMEM = "8";
prog_char ch51_qth[] PROGMEM =  "";
prog_char ch52_name[] PROGMEM = "9";
prog_char ch52_qth[] PROGMEM =  "";
prog_char ch53_name[] PROGMEM = "10";
prog_char ch53_qth[] PROGMEM =  "";
prog_char ch54_name[] PROGMEM = "11";
prog_char ch54_qth[] PROGMEM =  "";
prog_char ch55_name[] PROGMEM = "11A";
prog_char ch55_qth[] PROGMEM =  "";
prog_char ch56_name[] PROGMEM = "12";
prog_char ch56_qth[] PROGMEM =  "";
prog_char ch57_name[] PROGMEM = "13";
prog_char ch57_qth[] PROGMEM =  "";
prog_char ch58_name[] PROGMEM = "14";
prog_char ch58_qth[] PROGMEM =  "";
prog_char ch59_name[] PROGMEM = "15";
prog_char ch59_qth[] PROGMEM =  "";
prog_char ch60_name[] PROGMEM = "15A";
prog_char ch60_qth[] PROGMEM =  "";
prog_char ch61_name[] PROGMEM = "16";
prog_char ch61_qth[] PROGMEM =  "";
prog_char ch62_name[] PROGMEM = "17";
prog_char ch62_qth[] PROGMEM =  "";
prog_char ch63_name[] PROGMEM = "18";
prog_char ch63_qth[] PROGMEM =  "";
prog_char ch64_name[] PROGMEM = "19";
prog_char ch64_qth[] PROGMEM =  "";
prog_char ch65_name[] PROGMEM = "19A";
prog_char ch65_qth[] PROGMEM =  "";
prog_char ch66_name[] PROGMEM = "20";
prog_char ch66_qth[] PROGMEM =  "";
prog_char ch67_name[] PROGMEM = "21";
prog_char ch67_qth[] PROGMEM =  "";
prog_char ch68_name[] PROGMEM = "22";
prog_char ch68_qth[] PROGMEM =  "";
prog_char ch69_name[] PROGMEM = "23";
prog_char ch69_qth[] PROGMEM =  "";
prog_char ch70_name[] PROGMEM = "24";
prog_char ch70_qth[] PROGMEM =  "";
prog_char ch71_name[] PROGMEM = "25";
prog_char ch71_qth[] PROGMEM =  "";
prog_char ch72_name[] PROGMEM = "26";
prog_char ch72_qth[] PROGMEM =  "";
prog_char ch73_name[] PROGMEM = "27";
prog_char ch73_qth[] PROGMEM =  "";
prog_char ch74_name[] PROGMEM = "28";
prog_char ch74_qth[] PROGMEM =  "";
prog_char ch75_name[] PROGMEM = "29";
prog_char ch75_qth[] PROGMEM =  "";
prog_char ch76_name[] PROGMEM = "30";
prog_char ch76_qth[] PROGMEM =  "";
prog_char ch77_name[] PROGMEM = "31";
prog_char ch77_qth[] PROGMEM =  "";
prog_char ch78_name[] PROGMEM = "32";
prog_char ch78_qth[] PROGMEM =  "";
prog_char ch79_name[] PROGMEM = "33";
prog_char ch79_qth[] PROGMEM =  "";
prog_char ch80_name[] PROGMEM = "34";
prog_char ch80_qth[] PROGMEM =  "";
prog_char ch81_name[] PROGMEM = "35";
prog_char ch81_qth[] PROGMEM =  "";
prog_char ch82_name[] PROGMEM = "36";
prog_char ch82_qth[] PROGMEM =  "";
prog_char ch83_name[] PROGMEM = "37";
prog_char ch83_qth[] PROGMEM =  "";
prog_char ch84_name[] PROGMEM = "38";
prog_char ch84_qth[] PROGMEM =  "";
prog_char ch85_name[] PROGMEM = "39";
prog_char ch85_qth[] PROGMEM =  "";
prog_char ch86_name[] PROGMEM = "40";
prog_char ch86_qth[] PROGMEM =  "";
prog_char ch87_name[] PROGMEM = "41";
prog_char ch87_qth[] PROGMEM =  "";
prog_char ch88_name[] PROGMEM = "42";
prog_char ch88_qth[] PROGMEM =  "";
prog_char ch89_name[] PROGMEM = "43";
prog_char ch89_qth[] PROGMEM =  "";
prog_char ch90_name[] PROGMEM = "44";
prog_char ch90_qth[] PROGMEM =  "";
prog_char ch91_name[] PROGMEM = "45";
prog_char ch91_qth[] PROGMEM =  "";
prog_char ch92_name[] PROGMEM = "46";
prog_char ch92_qth[] PROGMEM =  "";
prog_char ch93_name[] PROGMEM = "47";
prog_char ch93_qth[] PROGMEM =  "";
prog_char ch94_name[] PROGMEM = "48";
prog_char ch94_qth[] PROGMEM =  "";
prog_char ch95_name[] PROGMEM = "49";
prog_char ch95_qth[] PROGMEM =  "";
prog_char ch96_name[] PROGMEM = "50";
prog_char ch96_qth[] PROGMEM =  "";
prog_char ch97_name[] PROGMEM = "51";
prog_char ch97_qth[] PROGMEM =  "";
prog_char ch98_name[] PROGMEM = "52";
prog_char ch98_qth[] PROGMEM =  "";
prog_char ch99_name[] PROGMEM = "53";
prog_char ch99_qth[] PROGMEM =  "";
prog_char ch100_name[] PROGMEM = "54";
prog_char ch100_qth[] PROGMEM =  "";
prog_char ch101_name[] PROGMEM = "55";
prog_char ch101_qth[] PROGMEM =  "";
prog_char ch102_name[] PROGMEM = "56";
prog_char ch102_qth[] PROGMEM =  "";
prog_char ch103_name[] PROGMEM = "57";
prog_char ch103_qth[] PROGMEM =  "";
prog_char ch104_name[] PROGMEM = "58";
prog_char ch104_qth[] PROGMEM =  "";
prog_char ch105_name[] PROGMEM = "59";
prog_char ch105_qth[] PROGMEM =  "";
prog_char ch106_name[] PROGMEM = "60";
prog_char ch106_qth[] PROGMEM =  "";
prog_char ch107_name[] PROGMEM = "61";
prog_char ch107_qth[] PROGMEM =  "";
prog_char ch108_name[] PROGMEM = "62";
prog_char ch108_qth[] PROGMEM =  "";
prog_char ch109_name[] PROGMEM = "63";
prog_char ch109_qth[] PROGMEM =  "";
prog_char ch110_name[] PROGMEM = "64";
prog_char ch110_qth[] PROGMEM =  "";
prog_char ch111_name[] PROGMEM = "65";
prog_char ch111_qth[] PROGMEM =  "";
prog_char ch112_name[] PROGMEM = "66";
prog_char ch112_qth[] PROGMEM =  "";
prog_char ch113_name[] PROGMEM = "67";
prog_char ch113_qth[] PROGMEM =  "";
prog_char ch114_name[] PROGMEM = "68";
prog_char ch114_qth[] PROGMEM =  "";
prog_char ch115_name[] PROGMEM = "69";
prog_char ch115_qth[] PROGMEM =  "";
prog_char ch116_name[] PROGMEM = "70";
prog_char ch116_qth[] PROGMEM =  "";
prog_char ch117_name[] PROGMEM = "71";
prog_char ch117_qth[] PROGMEM =  "";
prog_char ch118_name[] PROGMEM = "72";
prog_char ch118_qth[] PROGMEM =  "";
prog_char ch119_name[] PROGMEM = "73";
prog_char ch119_qth[] PROGMEM =  "";
prog_char ch120_name[] PROGMEM = "74";
prog_char ch120_qth[] PROGMEM =  "";
prog_char ch121_name[] PROGMEM = "75";
prog_char ch121_qth[] PROGMEM =  "";
prog_char ch122_name[] PROGMEM = "76";
prog_char ch122_qth[] PROGMEM =  "";
prog_char ch123_name[] PROGMEM = "77";
prog_char ch123_qth[] PROGMEM =  "";
prog_char ch124_name[] PROGMEM = "78";
prog_char ch124_qth[] PROGMEM =  "";
prog_char ch125_name[] PROGMEM = "79";
prog_char ch125_qth[] PROGMEM =  "";
prog_char ch126_name[] PROGMEM = "80";
prog_char ch126_qth[] PROGMEM =  "";
prog_char ch127_name[] PROGMEM = 	"WSPR";
prog_char ch127_qth[] PROGMEM =  "";
prog_char ch128_name[] PROGMEM = 	"S1";
prog_char ch128_qth[] PROGMEM =  "";
prog_char ch129_name[] PROGMEM = "ARPS";
prog_char ch129_qth[] PROGMEM =  "";
prog_char ch130_name[] PROGMEM = "Echolink";
prog_char ch130_qth[] PROGMEM =  "";
prog_char ch131_name[] PROGMEM = "Echolink";
prog_char ch131_qth[] PROGMEM =  "";
prog_char ch132_name[] PROGMEM = "RTTY local";
prog_char ch132_qth[] PROGMEM =  "";
prog_char ch133_name[] PROGMEM = "DV CQ";
prog_char ch133_qth[] PROGMEM =  "";
prog_char ch134_name[] PROGMEM = "PSK31";
prog_char ch134_qth[] PROGMEM =  "";
prog_char ch135_name[] PROGMEM = "SSB CQ";
prog_char ch135_qth[] PROGMEM =  "";
prog_char ch136_name[] PROGMEM = "MGM CQ";
prog_char ch136_qth[] PROGMEM =  "";
prog_char ch137_name[] PROGMEM = "WSPR";
prog_char ch137_qth[] PROGMEM =  "";
prog_char ch138_name[] PROGMEM = "SSTV CQ";
prog_char ch138_qth[] PROGMEM =  "";
prog_char ch139_name[] PROGMEM = "ATV";
prog_char ch139_qth[] PROGMEM =  "";
prog_char ch140_name[] PROGMEM = "RTTY CQ";
prog_char ch140_qth[] PROGMEM =  "";
prog_char ch141_name[] PROGMEM = "Fax CQ";
prog_char ch141_qth[] PROGMEM =  "";
prog_char ch142_name[] PROGMEM = "ATV CQ / Callback";
prog_char ch142_qth[] PROGMEM =  "";
prog_char ch143_name[] PROGMEM = "V000";
prog_char ch143_qth[] PROGMEM =  "";
prog_char ch144_name[] PROGMEM = "V001";
prog_char ch144_qth[] PROGMEM =  "";
prog_char ch145_name[] PROGMEM = "V002";
prog_char ch145_qth[] PROGMEM =  "";
prog_char ch146_name[] PROGMEM = "V003";
prog_char ch146_qth[] PROGMEM =  "";
prog_char ch147_name[] PROGMEM = "V004";
prog_char ch147_qth[] PROGMEM =  "";
prog_char ch148_name[] PROGMEM = "V005";
prog_char ch148_qth[] PROGMEM =  "";
prog_char ch149_name[] PROGMEM = "V006";
prog_char ch149_qth[] PROGMEM =  "";
prog_char ch150_name[] PROGMEM = "V007";
prog_char ch150_qth[] PROGMEM =  "";
prog_char ch151_name[] PROGMEM = "V008";
prog_char ch151_qth[] PROGMEM =  "";
prog_char ch152_name[] PROGMEM = "V009";
prog_char ch152_qth[] PROGMEM =  "";
prog_char ch153_name[] PROGMEM = "V010";
prog_char ch153_qth[] PROGMEM =  "";
prog_char ch154_name[] PROGMEM = "V011";
prog_char ch154_qth[] PROGMEM =  "";
prog_char ch155_name[] PROGMEM = "V012";
prog_char ch155_qth[] PROGMEM =  "";
prog_char ch156_name[] PROGMEM = "V013";
prog_char ch156_qth[] PROGMEM =  "";
prog_char ch157_name[] PROGMEM = "V014";
prog_char ch157_qth[] PROGMEM =  "";
prog_char ch158_name[] PROGMEM = "V015";
prog_char ch158_qth[] PROGMEM =  "";
prog_char ch159_name[] PROGMEM = "V016";
prog_char ch159_qth[] PROGMEM =  "";
prog_char ch160_name[] PROGMEM = "V017";
prog_char ch160_qth[] PROGMEM =  "";
prog_char ch161_name[] PROGMEM = "V018";
prog_char ch161_qth[] PROGMEM =  "";
prog_char ch162_name[] PROGMEM = "V019";
prog_char ch162_qth[] PROGMEM =  "";
prog_char ch163_name[] PROGMEM = "V020";
prog_char ch163_qth[] PROGMEM =  "";
prog_char ch164_name[] PROGMEM = "V021";
prog_char ch164_qth[] PROGMEM =  "";
prog_char ch165_name[] PROGMEM = "V022";
prog_char ch165_qth[] PROGMEM =  "";
prog_char ch166_name[] PROGMEM = "V023";
prog_char ch166_qth[] PROGMEM =  "";
prog_char ch167_name[] PROGMEM = "V024";
prog_char ch167_qth[] PROGMEM =  "";
prog_char ch168_name[] PROGMEM = "V025";
prog_char ch168_qth[] PROGMEM =  "";
prog_char ch169_name[] PROGMEM = "V026";
prog_char ch169_qth[] PROGMEM =  "";
prog_char ch170_name[] PROGMEM = "V027";
prog_char ch170_qth[] PROGMEM =  "";
prog_char ch171_name[] PROGMEM = "V028";
prog_char ch171_qth[] PROGMEM =  "";
prog_char ch172_name[] PROGMEM = "V029";
prog_char ch172_qth[] PROGMEM =  "";
prog_char ch173_name[] PROGMEM = "V030";
prog_char ch173_qth[] PROGMEM =  "";
prog_char ch174_name[] PROGMEM = "V031";
prog_char ch174_qth[] PROGMEM =  "";
prog_char ch175_name[] PROGMEM = "V032";
prog_char ch175_qth[] PROGMEM =  "";
prog_char ch176_name[] PROGMEM = "V033";
prog_char ch176_qth[] PROGMEM =  "";
prog_char ch177_name[] PROGMEM = "V034";
prog_char ch177_qth[] PROGMEM =  "";
prog_char ch178_name[] PROGMEM = "V035";
prog_char ch178_qth[] PROGMEM =  "";
prog_char ch179_name[] PROGMEM = "V036";
prog_char ch179_qth[] PROGMEM =  "";
prog_char ch180_name[] PROGMEM = "V037";
prog_char ch180_qth[] PROGMEM =  "";
prog_char ch181_name[] PROGMEM = "V038";
prog_char ch181_qth[] PROGMEM =  "";
prog_char ch182_name[] PROGMEM = "V039";
prog_char ch182_qth[] PROGMEM =  "";
prog_char ch183_name[] PROGMEM = "V040";
prog_char ch183_qth[] PROGMEM =  "";
prog_char ch184_name[] PROGMEM = "V041";
prog_char ch184_qth[] PROGMEM =  "";
prog_char ch185_name[] PROGMEM = "V042";
prog_char ch185_qth[] PROGMEM =  "";
prog_char ch186_name[] PROGMEM = "V043";
prog_char ch186_qth[] PROGMEM =  "";
prog_char ch187_name[] PROGMEM = "V044";
prog_char ch187_qth[] PROGMEM =  "";
prog_char ch188_name[] PROGMEM = "V045";
prog_char ch188_qth[] PROGMEM =  "";
prog_char ch189_name[] PROGMEM = "V046";
prog_char ch189_qth[] PROGMEM =  "";
prog_char ch190_name[] PROGMEM = "V047";
prog_char ch190_qth[] PROGMEM =  "";
prog_char ch191_name[] PROGMEM = "RV048";
prog_char ch191_qth[] PROGMEM =  "";
prog_char ch192_name[] PROGMEM = "RV049";
prog_char ch192_qth[] PROGMEM =  "";
prog_char ch193_name[] PROGMEM = "RV050";
prog_char ch193_qth[] PROGMEM =  "";
prog_char ch194_name[] PROGMEM = "RV051";
prog_char ch194_qth[] PROGMEM =  "";
prog_char ch195_name[] PROGMEM = "RV052";
prog_char ch195_qth[] PROGMEM =  "";
prog_char ch196_name[] PROGMEM = "RV053";
prog_char ch196_qth[] PROGMEM =  "";
prog_char ch197_name[] PROGMEM = "RV054";
prog_char ch197_qth[] PROGMEM =  "";
prog_char ch198_name[] PROGMEM = "RV055";
prog_char ch198_qth[] PROGMEM =  "";
prog_char ch199_name[] PROGMEM = "RV056";
prog_char ch199_qth[] PROGMEM =  "";
prog_char ch200_name[] PROGMEM = "RV057";
prog_char ch200_qth[] PROGMEM =  "";
prog_char ch201_name[] PROGMEM = "RV058";
prog_char ch201_qth[] PROGMEM =  "";
prog_char ch202_name[] PROGMEM = "RV059";
prog_char ch202_qth[] PROGMEM =  "";
prog_char ch203_name[] PROGMEM = "RV060";
prog_char ch203_qth[] PROGMEM =  "";
prog_char ch204_name[] PROGMEM = "RV061";
prog_char ch204_qth[] PROGMEM =  "";
prog_char ch205_name[] PROGMEM = "RV062";
prog_char ch205_qth[] PROGMEM =  "";
prog_char ch206_name[] PROGMEM = "RV063";
prog_char ch206_qth[] PROGMEM =  "";
prog_char ch207_name[] PROGMEM = "V064";
prog_char ch207_qth[] PROGMEM =  "";
prog_char ch208_name[] PROGMEM = "V065";
prog_char ch208_qth[] PROGMEM =  "";
prog_char ch209_name[] PROGMEM = "V066";
prog_char ch209_qth[] PROGMEM =  "";
prog_char ch210_name[] PROGMEM = "V067";
prog_char ch210_qth[] PROGMEM =  "";
prog_char ch211_name[] PROGMEM = "V068";
prog_char ch211_qth[] PROGMEM =  "";
prog_char ch212_name[] PROGMEM = "V069";
prog_char ch212_qth[] PROGMEM =  "";
prog_char ch213_name[] PROGMEM = "V070";
prog_char ch213_qth[] PROGMEM =  "";
prog_char ch214_name[] PROGMEM = "V071";
prog_char ch214_qth[] PROGMEM =  "";
prog_char ch215_name[] PROGMEM = "V072";
prog_char ch215_qth[] PROGMEM =  "";
prog_char ch216_name[] PROGMEM = "V073";
prog_char ch216_qth[] PROGMEM =  "";
prog_char ch217_name[] PROGMEM = "V074";
prog_char ch217_qth[] PROGMEM =  "";
prog_char ch218_name[] PROGMEM = "V075";
prog_char ch218_qth[] PROGMEM =  "";
prog_char ch219_name[] PROGMEM = "V076";
prog_char ch219_qth[] PROGMEM =  "";
prog_char ch220_name[] PROGMEM = "V077";
prog_char ch220_qth[] PROGMEM =  "";
prog_char ch221_name[] PROGMEM = "V078";
prog_char ch221_qth[] PROGMEM =  "";
prog_char ch222_name[] PROGMEM = "V079";
prog_char ch222_qth[] PROGMEM =  "";
prog_char ch223_name[] PROGMEM = 	"U001";
prog_char ch223_qth[] PROGMEM =  "";
prog_char ch224_name[] PROGMEM = "U002";
prog_char ch224_qth[] PROGMEM =  "";
prog_char ch225_name[] PROGMEM = "U003";
prog_char ch225_qth[] PROGMEM =  "";
prog_char ch226_name[] PROGMEM = "U004";
prog_char ch226_qth[] PROGMEM =  "";
prog_char ch227_name[] PROGMEM = "U005";
prog_char ch227_qth[] PROGMEM =  "";
prog_char ch228_name[] PROGMEM = "U006";
prog_char ch228_qth[] PROGMEM =  "";
prog_char ch229_name[] PROGMEM = "U007";
prog_char ch229_qth[] PROGMEM =  "";
prog_char ch230_name[] PROGMEM = "U008";
prog_char ch230_qth[] PROGMEM =  "";
prog_char ch231_name[] PROGMEM = "U009";
prog_char ch231_qth[] PROGMEM =  "";
prog_char ch232_name[] PROGMEM = "U010";
prog_char ch232_qth[] PROGMEM =  "";
prog_char ch233_name[] PROGMEM = "U011";
prog_char ch233_qth[] PROGMEM =  "";
prog_char ch234_name[] PROGMEM = "U012";
prog_char ch234_qth[] PROGMEM =  "";
prog_char ch235_name[] PROGMEM = "U013";
prog_char ch235_qth[] PROGMEM =  "";
prog_char ch236_name[] PROGMEM = "U014";
prog_char ch236_qth[] PROGMEM =  "";
prog_char ch237_name[] PROGMEM = "U015";
prog_char ch237_qth[] PROGMEM =  "";
prog_char ch238_name[] PROGMEM = "U016";
prog_char ch238_qth[] PROGMEM =  "";
prog_char ch239_name[] PROGMEM = "U017";
prog_char ch239_qth[] PROGMEM =  "";
prog_char ch240_name[] PROGMEM = "U018";
prog_char ch240_qth[] PROGMEM =  "";
prog_char ch241_name[] PROGMEM = "U019";
prog_char ch241_qth[] PROGMEM =  "";
prog_char ch242_name[] PROGMEM = "U020";
prog_char ch242_qth[] PROGMEM =  "";
prog_char ch243_name[] PROGMEM = "U021";
prog_char ch243_qth[] PROGMEM =  "";
prog_char ch244_name[] PROGMEM = "U022";
prog_char ch244_qth[] PROGMEM =  "";
prog_char ch245_name[] PROGMEM = "U023";
prog_char ch245_qth[] PROGMEM =  "";
prog_char ch246_name[] PROGMEM = "U024";
prog_char ch246_qth[] PROGMEM =  "";
prog_char ch247_name[] PROGMEM = "U025";
prog_char ch247_qth[] PROGMEM =  "";
prog_char ch248_name[] PROGMEM = "U026";
prog_char ch248_qth[] PROGMEM =  "";
prog_char ch249_name[] PROGMEM = "U027";
prog_char ch249_qth[] PROGMEM =  "";
prog_char ch250_name[] PROGMEM = "U028";
prog_char ch250_qth[] PROGMEM =  "";
prog_char ch251_name[] PROGMEM = "U029";
prog_char ch251_qth[] PROGMEM =  "";
prog_char ch252_name[] PROGMEM = "U030";
prog_char ch252_qth[] PROGMEM =  "";
prog_char ch253_name[] PROGMEM = "U031";
prog_char ch253_qth[] PROGMEM =  "";
prog_char ch254_name[] PROGMEM = "U032";
prog_char ch254_qth[] PROGMEM =  "";
prog_char ch255_name[] PROGMEM = "U033";
prog_char ch255_qth[] PROGMEM =  "";
prog_char ch256_name[] PROGMEM = "U034";
prog_char ch256_qth[] PROGMEM =  "";
prog_char ch257_name[] PROGMEM = "U035";
prog_char ch257_qth[] PROGMEM =  "";
prog_char ch258_name[] PROGMEM = "U036";
prog_char ch258_qth[] PROGMEM =  "";
prog_char ch259_name[] PROGMEM = "U037";
prog_char ch259_qth[] PROGMEM =  "";
prog_char ch260_name[] PROGMEM = "U038";
prog_char ch260_qth[] PROGMEM =  "";
prog_char ch261_name[] PROGMEM = "U039";
prog_char ch261_qth[] PROGMEM =  "";
prog_char ch262_name[] PROGMEM = "U040";
prog_char ch262_qth[] PROGMEM =  "";
prog_char ch263_name[] PROGMEM = "U041";
prog_char ch263_qth[] PROGMEM =  "";
prog_char ch264_name[] PROGMEM = "U042";
prog_char ch264_qth[] PROGMEM =  "";
prog_char ch265_name[] PROGMEM = "U043";
prog_char ch265_qth[] PROGMEM =  "";
prog_char ch266_name[] PROGMEM = "U044";
prog_char ch266_qth[] PROGMEM =  "";
prog_char ch267_name[] PROGMEM = "U045";
prog_char ch267_qth[] PROGMEM =  "";
prog_char ch268_name[] PROGMEM = "U046";
prog_char ch268_qth[] PROGMEM =  "";
prog_char ch269_name[] PROGMEM = "U047";
prog_char ch269_qth[] PROGMEM =  "";
prog_char ch270_name[] PROGMEM = "U048";
prog_char ch270_qth[] PROGMEM =  "";
prog_char ch271_name[] PROGMEM = "U049";
prog_char ch271_qth[] PROGMEM =  "";
prog_char ch272_name[] PROGMEM = "U050";
prog_char ch272_qth[] PROGMEM =  "";
prog_char ch273_name[] PROGMEM = "U051";
prog_char ch273_qth[] PROGMEM =  "";
prog_char ch274_name[] PROGMEM = "U052";
prog_char ch274_qth[] PROGMEM =  "";
prog_char ch275_name[] PROGMEM = "U053";
prog_char ch275_qth[] PROGMEM =  "";
prog_char ch276_name[] PROGMEM = "U054";
prog_char ch276_qth[] PROGMEM =  "";
prog_char ch277_name[] PROGMEM = "U055";
prog_char ch277_qth[] PROGMEM =  "";
prog_char ch278_name[] PROGMEM = "U056";
prog_char ch278_qth[] PROGMEM =  "";
prog_char ch279_name[] PROGMEM = "U057";
prog_char ch279_qth[] PROGMEM =  "";
prog_char ch280_name[] PROGMEM = "U058";
prog_char ch280_qth[] PROGMEM =  "";
prog_char ch281_name[] PROGMEM = "U059";
prog_char ch281_qth[] PROGMEM =  "";
prog_char ch282_name[] PROGMEM = "U060";
prog_char ch282_qth[] PROGMEM =  "";
prog_char ch283_name[] PROGMEM = "U061";
prog_char ch283_qth[] PROGMEM =  "";
prog_char ch284_name[] PROGMEM = "U062";
prog_char ch284_qth[] PROGMEM =  "";
prog_char ch285_name[] PROGMEM = "U063";
prog_char ch285_qth[] PROGMEM =  "";
prog_char ch286_name[] PROGMEM = "U064";
prog_char ch286_qth[] PROGMEM =  "";
prog_char ch287_name[] PROGMEM = "U065";
prog_char ch287_qth[] PROGMEM =  "";
prog_char ch288_name[] PROGMEM = "U066";
prog_char ch288_qth[] PROGMEM =  "";
prog_char ch289_name[] PROGMEM = "U067";
prog_char ch289_qth[] PROGMEM =  "";
prog_char ch290_name[] PROGMEM = "U068";
prog_char ch290_qth[] PROGMEM =  "";
prog_char ch291_name[] PROGMEM = "U069";
prog_char ch291_qth[] PROGMEM =  "";
prog_char ch292_name[] PROGMEM = "U070";
prog_char ch292_qth[] PROGMEM =  "";
prog_char ch293_name[] PROGMEM = "U071";
prog_char ch293_qth[] PROGMEM =  "";
prog_char ch294_name[] PROGMEM = "U072";
prog_char ch294_qth[] PROGMEM =  "";
prog_char ch295_name[] PROGMEM = "U073";
prog_char ch295_qth[] PROGMEM =  "";
prog_char ch296_name[] PROGMEM = "U074";
prog_char ch296_qth[] PROGMEM =  "";
prog_char ch297_name[] PROGMEM = "U075";
prog_char ch297_qth[] PROGMEM =  "";
prog_char ch298_name[] PROGMEM = "U076";
prog_char ch298_qth[] PROGMEM =  "";
prog_char ch299_name[] PROGMEM = "U077";
prog_char ch299_qth[] PROGMEM =  "";
prog_char ch300_name[] PROGMEM = "U078";
prog_char ch300_qth[] PROGMEM =  "";
prog_char ch301_name[] PROGMEM = "U079";
prog_char ch301_qth[] PROGMEM =  "";
prog_char ch302_name[] PROGMEM = "U080";
prog_char ch302_qth[] PROGMEM =  "";
prog_char ch303_name[] PROGMEM = "U081";
prog_char ch303_qth[] PROGMEM =  "";
prog_char ch304_name[] PROGMEM = "U082";
prog_char ch304_qth[] PROGMEM =  "";
prog_char ch305_name[] PROGMEM = "U083";
prog_char ch305_qth[] PROGMEM =  "";
prog_char ch306_name[] PROGMEM = "U084";
prog_char ch306_qth[] PROGMEM =  "";
prog_char ch307_name[] PROGMEM = "U085";
prog_char ch307_qth[] PROGMEM =  "";
prog_char ch308_name[] PROGMEM = "U086";
prog_char ch308_qth[] PROGMEM =  "";
prog_char ch309_name[] PROGMEM = "U087";
prog_char ch309_qth[] PROGMEM =  "";
prog_char ch310_name[] PROGMEM = "U088";
prog_char ch310_qth[] PROGMEM =  "";
prog_char ch311_name[] PROGMEM = "U089";
prog_char ch311_qth[] PROGMEM =  "";
prog_char ch312_name[] PROGMEM = "U090";
prog_char ch312_qth[] PROGMEM =  "";
prog_char ch313_name[] PROGMEM = "U091";
prog_char ch313_qth[] PROGMEM =  "";
prog_char ch314_name[] PROGMEM = "U092";
prog_char ch314_qth[] PROGMEM =  "";
prog_char ch315_name[] PROGMEM = "U093";
prog_char ch315_qth[] PROGMEM =  "";
prog_char ch316_name[] PROGMEM = "U094";
prog_char ch316_qth[] PROGMEM =  "";
prog_char ch317_name[] PROGMEM = "U095";
prog_char ch317_qth[] PROGMEM =  "";
prog_char ch318_name[] PROGMEM = "U096";
prog_char ch318_qth[] PROGMEM =  "";
prog_char ch319_name[] PROGMEM = "U097";
prog_char ch319_qth[] PROGMEM =  "";
prog_char ch320_name[] PROGMEM = "U098";
prog_char ch320_qth[] PROGMEM =  "";
prog_char ch321_name[] PROGMEM = "U099";
prog_char ch321_qth[] PROGMEM =  "";
prog_char ch322_name[] PROGMEM = "U100";
prog_char ch322_qth[] PROGMEM =  "";
prog_char ch323_name[] PROGMEM = "U101";
prog_char ch323_qth[] PROGMEM =  "";
prog_char ch324_name[] PROGMEM = "U102";
prog_char ch324_qth[] PROGMEM =  "";
prog_char ch325_name[] PROGMEM = "U103";
prog_char ch325_qth[] PROGMEM =  "";
prog_char ch326_name[] PROGMEM = "U104";
prog_char ch326_qth[] PROGMEM =  "";
prog_char ch327_name[] PROGMEM = "U105";
prog_char ch327_qth[] PROGMEM =  "";
prog_char ch328_name[] PROGMEM = "U106";
prog_char ch328_qth[] PROGMEM =  "";
prog_char ch329_name[] PROGMEM = "U107";
prog_char ch329_qth[] PROGMEM =  "";
prog_char ch330_name[] PROGMEM = "U108";
prog_char ch330_qth[] PROGMEM =  "";
prog_char ch331_name[] PROGMEM = "U109";
prog_char ch331_qth[] PROGMEM =  "";
prog_char ch332_name[] PROGMEM = "U110";
prog_char ch332_qth[] PROGMEM =  "";
prog_char ch333_name[] PROGMEM = "U111";
prog_char ch333_qth[] PROGMEM =  "";
prog_char ch334_name[] PROGMEM = "U112";
prog_char ch334_qth[] PROGMEM =  "";
prog_char ch335_name[] PROGMEM = "U113";
prog_char ch335_qth[] PROGMEM =  "";
prog_char ch336_name[] PROGMEM = "U114";
prog_char ch336_qth[] PROGMEM =  "";
prog_char ch337_name[] PROGMEM = "U115";
prog_char ch337_qth[] PROGMEM =  "";
prog_char ch338_name[] PROGMEM = "U116";
prog_char ch338_qth[] PROGMEM =  "";
prog_char ch339_name[] PROGMEM = "U117";
prog_char ch339_qth[] PROGMEM =  "";
prog_char ch340_name[] PROGMEM = "U118";
prog_char ch340_qth[] PROGMEM =  "";
prog_char ch341_name[] PROGMEM = "U119";
prog_char ch341_qth[] PROGMEM =  "";
prog_char ch342_name[] PROGMEM = "U120";
prog_char ch342_qth[] PROGMEM =  "";
prog_char ch343_name[] PROGMEM = "U121";
prog_char ch343_qth[] PROGMEM =  "";
prog_char ch344_name[] PROGMEM = "U122";
prog_char ch344_qth[] PROGMEM =  "";
prog_char ch345_name[] PROGMEM = "U123";
prog_char ch345_qth[] PROGMEM =  "";
prog_char ch346_name[] PROGMEM = "U124";
prog_char ch346_qth[] PROGMEM =  "";
prog_char ch347_name[] PROGMEM = "U125";
prog_char ch347_qth[] PROGMEM =  "";
prog_char ch348_name[] PROGMEM = "U126";
prog_char ch348_qth[] PROGMEM =  "";
prog_char ch349_name[] PROGMEM = "U127";
prog_char ch349_qth[] PROGMEM =  "";
prog_char ch350_name[] PROGMEM = "U128";
prog_char ch350_qth[] PROGMEM =  "";
prog_char ch351_name[] PROGMEM = "U129";
prog_char ch351_qth[] PROGMEM =  "";
prog_char ch352_name[] PROGMEM = "U130";
prog_char ch352_qth[] PROGMEM =  "";
prog_char ch353_name[] PROGMEM = "U131";
prog_char ch353_qth[] PROGMEM =  "";
prog_char ch354_name[] PROGMEM = "U132";
prog_char ch354_qth[] PROGMEM =  "";
prog_char ch355_name[] PROGMEM = "U133";
prog_char ch355_qth[] PROGMEM =  "";
prog_char ch356_name[] PROGMEM = "U134";
prog_char ch356_qth[] PROGMEM =  "";
prog_char ch357_name[] PROGMEM = "U135";
prog_char ch357_qth[] PROGMEM =  "";
prog_char ch358_name[] PROGMEM = "U136";
prog_char ch358_qth[] PROGMEM =  "";
prog_char ch359_name[] PROGMEM = "U137";
prog_char ch359_qth[] PROGMEM =  "";
prog_char ch360_name[] PROGMEM = "U138";
prog_char ch360_qth[] PROGMEM =  "";
prog_char ch361_name[] PROGMEM = "U139";
prog_char ch361_qth[] PROGMEM =  "";
prog_char ch362_name[] PROGMEM = "U140";
prog_char ch362_qth[] PROGMEM =  "";
prog_char ch363_name[] PROGMEM = "U141";
prog_char ch363_qth[] PROGMEM =  "";
prog_char ch364_name[] PROGMEM = "U142";
prog_char ch364_qth[] PROGMEM =  "";
prog_char ch365_name[] PROGMEM = "U143";
prog_char ch365_qth[] PROGMEM =  "";
prog_char ch366_name[] PROGMEM = "U144";
prog_char ch366_qth[] PROGMEM =  "";
prog_char ch367_name[] PROGMEM = "U145";
prog_char ch367_qth[] PROGMEM =  "";
prog_char ch368_name[] PROGMEM = "U146";
prog_char ch368_qth[] PROGMEM =  "";
prog_char ch369_name[] PROGMEM = "U147";
prog_char ch369_qth[] PROGMEM =  "";
prog_char ch370_name[] PROGMEM = "U148";
prog_char ch370_qth[] PROGMEM =  "";
prog_char ch371_name[] PROGMEM = "U149";
prog_char ch371_qth[] PROGMEM =  "";
prog_char ch372_name[] PROGMEM = "U150";
prog_char ch372_qth[] PROGMEM =  "";
prog_char ch373_name[] PROGMEM = "U151";
prog_char ch373_qth[] PROGMEM =  "";
prog_char ch374_name[] PROGMEM = "U152";
prog_char ch374_qth[] PROGMEM =  "";
prog_char ch375_name[] PROGMEM = "U153";
prog_char ch375_qth[] PROGMEM =  "";
prog_char ch376_name[] PROGMEM = "U154";
prog_char ch376_qth[] PROGMEM =  "";
prog_char ch377_name[] PROGMEM = "U155";
prog_char ch377_qth[] PROGMEM =  "";
prog_char ch378_name[] PROGMEM = "U156";
prog_char ch378_qth[] PROGMEM =  "";
prog_char ch379_name[] PROGMEM = "U157";
prog_char ch379_qth[] PROGMEM =  "";
prog_char ch380_name[] PROGMEM = "U158";
prog_char ch380_qth[] PROGMEM =  "";
prog_char ch381_name[] PROGMEM = "U159";
prog_char ch381_qth[] PROGMEM =  "";
prog_char ch382_name[] PROGMEM = "U160";
prog_char ch382_qth[] PROGMEM =  "";
prog_char ch383_name[] PROGMEM = "U161";
prog_char ch383_qth[] PROGMEM =  "";
prog_char ch384_name[] PROGMEM = "U162";
prog_char ch384_qth[] PROGMEM =  "";
prog_char ch385_name[] PROGMEM = "U163";
prog_char ch385_qth[] PROGMEM =  "";
prog_char ch386_name[] PROGMEM = "U164";
prog_char ch386_qth[] PROGMEM =  "";
prog_char ch387_name[] PROGMEM = "U165";
prog_char ch387_qth[] PROGMEM =  "";
prog_char ch388_name[] PROGMEM = "U166";
prog_char ch388_qth[] PROGMEM =  "";
prog_char ch389_name[] PROGMEM = "U167";
prog_char ch389_qth[] PROGMEM =  "";
prog_char ch390_name[] PROGMEM = "U168";
prog_char ch390_qth[] PROGMEM =  "";
prog_char ch391_name[] PROGMEM = "U169";
prog_char ch391_qth[] PROGMEM =  "";
prog_char ch392_name[] PROGMEM = "U170";
prog_char ch392_qth[] PROGMEM =  "";
prog_char ch393_name[] PROGMEM = "U171";
prog_char ch393_qth[] PROGMEM =  "";
prog_char ch394_name[] PROGMEM = "U172";
prog_char ch394_qth[] PROGMEM =  "";
prog_char ch395_name[] PROGMEM = "U173";
prog_char ch395_qth[] PROGMEM =  "";
prog_char ch396_name[] PROGMEM = "U174";
prog_char ch396_qth[] PROGMEM =  "";
prog_char ch397_name[] PROGMEM = "U175";
prog_char ch397_qth[] PROGMEM =  "";
prog_char ch398_name[] PROGMEM = "U176";
prog_char ch398_qth[] PROGMEM =  "";
prog_char ch399_name[] PROGMEM = "U177";
prog_char ch399_qth[] PROGMEM =  "";
prog_char ch400_name[] PROGMEM = "U178";
prog_char ch400_qth[] PROGMEM =  "";
prog_char ch401_name[] PROGMEM = "U179";
prog_char ch401_qth[] PROGMEM =  "";
prog_char ch402_name[] PROGMEM = "U180";
prog_char ch402_qth[] PROGMEM =  "";
prog_char ch403_name[] PROGMEM = "U181";
prog_char ch403_qth[] PROGMEM =  "";
prog_char ch404_name[] PROGMEM = "U182";
prog_char ch404_qth[] PROGMEM =  "";
prog_char ch405_name[] PROGMEM = "U183";
prog_char ch405_qth[] PROGMEM =  "";
prog_char ch406_name[] PROGMEM = "U184";
prog_char ch406_qth[] PROGMEM =  "";
prog_char ch407_name[] PROGMEM = "U185";
prog_char ch407_qth[] PROGMEM =  "";
prog_char ch408_name[] PROGMEM = "U186";
prog_char ch408_qth[] PROGMEM =  "";
prog_char ch409_name[] PROGMEM = "U187";
prog_char ch409_qth[] PROGMEM =  "";
prog_char ch410_name[] PROGMEM = "U188";
prog_char ch410_qth[] PROGMEM =  "";
prog_char ch411_name[] PROGMEM = "U189";
prog_char ch411_qth[] PROGMEM =  "";
prog_char ch412_name[] PROGMEM = "U190";
prog_char ch412_qth[] PROGMEM =  "";
prog_char ch413_name[] PROGMEM = "U191";
prog_char ch413_qth[] PROGMEM =  "";
prog_char ch414_name[] PROGMEM = "U192";
prog_char ch414_qth[] PROGMEM =  "";
prog_char ch415_name[] PROGMEM = "U193";
prog_char ch415_qth[] PROGMEM =  "";
prog_char ch416_name[] PROGMEM = "U194";
prog_char ch416_qth[] PROGMEM =  "";
prog_char ch417_name[] PROGMEM = "U195";
prog_char ch417_qth[] PROGMEM =  "";
prog_char ch418_name[] PROGMEM = "U196";
prog_char ch418_qth[] PROGMEM =  "";
prog_char ch419_name[] PROGMEM = "U197";
prog_char ch419_qth[] PROGMEM =  "";
prog_char ch420_name[] PROGMEM = "U198";
prog_char ch420_qth[] PROGMEM =  "";
prog_char ch421_name[] PROGMEM = "U199";
prog_char ch421_qth[] PROGMEM =  "";
prog_char ch422_name[] PROGMEM = "U200";
prog_char ch422_qth[] PROGMEM =  "";
prog_char ch423_name[] PROGMEM = "U201";
prog_char ch423_qth[] PROGMEM =  "";
prog_char ch424_name[] PROGMEM = "U202";
prog_char ch424_qth[] PROGMEM =  "";
prog_char ch425_name[] PROGMEM = "U203";
prog_char ch425_qth[] PROGMEM =  "";
prog_char ch426_name[] PROGMEM = "U204";
prog_char ch426_qth[] PROGMEM =  "";
prog_char ch427_name[] PROGMEM = "U205";
prog_char ch427_qth[] PROGMEM =  "";
prog_char ch428_name[] PROGMEM = "U206";
prog_char ch428_qth[] PROGMEM =  "";
prog_char ch429_name[] PROGMEM = "U207";
prog_char ch429_qth[] PROGMEM =  "";
prog_char ch430_name[] PROGMEM = "U208";
prog_char ch430_qth[] PROGMEM =  "";
prog_char ch431_name[] PROGMEM = "U209";
prog_char ch431_qth[] PROGMEM =  "";
prog_char ch432_name[] PROGMEM = "U210";
prog_char ch432_qth[] PROGMEM =  "";
prog_char ch433_name[] PROGMEM = "U211";
prog_char ch433_qth[] PROGMEM =  "";
prog_char ch434_name[] PROGMEM = "U212";
prog_char ch434_qth[] PROGMEM =  "";
prog_char ch435_name[] PROGMEM = "U213";
prog_char ch435_qth[] PROGMEM =  "";
prog_char ch436_name[] PROGMEM = "U214";
prog_char ch436_qth[] PROGMEM =  "";
prog_char ch437_name[] PROGMEM = "U215";
prog_char ch437_qth[] PROGMEM =  "";
prog_char ch438_name[] PROGMEM = "U216";
prog_char ch438_qth[] PROGMEM =  "";
prog_char ch439_name[] PROGMEM = "U217";
prog_char ch439_qth[] PROGMEM =  "";
prog_char ch440_name[] PROGMEM = "U218";
prog_char ch440_qth[] PROGMEM =  "";
prog_char ch441_name[] PROGMEM = "U219";
prog_char ch441_qth[] PROGMEM =  "";
prog_char ch442_name[] PROGMEM = "U220";
prog_char ch442_qth[] PROGMEM =  "";
prog_char ch443_name[] PROGMEM = "U221";
prog_char ch443_qth[] PROGMEM =  "";
prog_char ch444_name[] PROGMEM = "U222";
prog_char ch444_qth[] PROGMEM =  "";
prog_char ch445_name[] PROGMEM = "U223";
prog_char ch445_qth[] PROGMEM =  "";
prog_char ch446_name[] PROGMEM = "U224";
prog_char ch446_qth[] PROGMEM =  "";
prog_char ch447_name[] PROGMEM = "U225";
prog_char ch447_qth[] PROGMEM =  "";
prog_char ch448_name[] PROGMEM = "U226";
prog_char ch448_qth[] PROGMEM =  "";
prog_char ch449_name[] PROGMEM = "U227";
prog_char ch449_qth[] PROGMEM =  "";
prog_char ch450_name[] PROGMEM = "U228";
prog_char ch450_qth[] PROGMEM =  "";
prog_char ch451_name[] PROGMEM = "U229";
prog_char ch451_qth[] PROGMEM =  "";
prog_char ch452_name[] PROGMEM = "U230";
prog_char ch452_qth[] PROGMEM =  "";
prog_char ch453_name[] PROGMEM = "U231";
prog_char ch453_qth[] PROGMEM =  "";
prog_char ch454_name[] PROGMEM = "U232";
prog_char ch454_qth[] PROGMEM =  "";
prog_char ch455_name[] PROGMEM = "U233";
prog_char ch455_qth[] PROGMEM =  "";
prog_char ch456_name[] PROGMEM = "U234";
prog_char ch456_qth[] PROGMEM =  "";
prog_char ch457_name[] PROGMEM = "U235";
prog_char ch457_qth[] PROGMEM =  "";
prog_char ch458_name[] PROGMEM = "U236";
prog_char ch458_qth[] PROGMEM =  "";
prog_char ch459_name[] PROGMEM = "U237";
prog_char ch459_qth[] PROGMEM =  "";
prog_char ch460_name[] PROGMEM = "U238";
prog_char ch460_qth[] PROGMEM =  "";
prog_char ch461_name[] PROGMEM = "U239";
prog_char ch461_qth[] PROGMEM =  "";
prog_char ch462_name[] PROGMEM = "U240";
prog_char ch462_qth[] PROGMEM =  "";
prog_char ch463_name[] PROGMEM = "U241";
prog_char ch463_qth[] PROGMEM =  "";
prog_char ch464_name[] PROGMEM = "U242";
prog_char ch464_qth[] PROGMEM =  "";
prog_char ch465_name[] PROGMEM = "U243";
prog_char ch465_qth[] PROGMEM =  "";
prog_char ch466_name[] PROGMEM = "U244";
prog_char ch466_qth[] PROGMEM =  "";
prog_char ch467_name[] PROGMEM = "U245";
prog_char ch467_qth[] PROGMEM =  "";
prog_char ch468_name[] PROGMEM = "U246";
prog_char ch468_qth[] PROGMEM =  "";
prog_char ch469_name[] PROGMEM = "U247";
prog_char ch469_qth[] PROGMEM =  "";
prog_char ch470_name[] PROGMEM = "U248";
prog_char ch470_qth[] PROGMEM =  "";
prog_char ch471_name[] PROGMEM = "U249";
prog_char ch471_qth[] PROGMEM =  "";
prog_char ch472_name[] PROGMEM = "U250";
prog_char ch472_qth[] PROGMEM =  "";
prog_char ch473_name[] PROGMEM = "U251";
prog_char ch473_qth[] PROGMEM =  "";
prog_char ch474_name[] PROGMEM = "U252";
prog_char ch474_qth[] PROGMEM =  "";
prog_char ch475_name[] PROGMEM = "U253";
prog_char ch475_qth[] PROGMEM =  "";
prog_char ch476_name[] PROGMEM = "U254";
prog_char ch476_qth[] PROGMEM =  "";
prog_char ch477_name[] PROGMEM = "U255";
prog_char ch477_qth[] PROGMEM =  "";
prog_char ch478_name[] PROGMEM = "U256";
prog_char ch478_qth[] PROGMEM =  "";
prog_char ch479_name[] PROGMEM = "U257";
prog_char ch479_qth[] PROGMEM =  "";
prog_char ch480_name[] PROGMEM = "U258";
prog_char ch480_qth[] PROGMEM =  "";
prog_char ch481_name[] PROGMEM = "U259";
prog_char ch481_qth[] PROGMEM =  "";
prog_char ch482_name[] PROGMEM = "U260";
prog_char ch482_qth[] PROGMEM =  "";
prog_char ch483_name[] PROGMEM = "U261";
prog_char ch483_qth[] PROGMEM =  "";
prog_char ch484_name[] PROGMEM = "U262";
prog_char ch484_qth[] PROGMEM =  "";
prog_char ch485_name[] PROGMEM = "U263";
prog_char ch485_qth[] PROGMEM =  "";
prog_char ch486_name[] PROGMEM = "U264";
prog_char ch486_qth[] PROGMEM =  "";
prog_char ch487_name[] PROGMEM = "U265";
prog_char ch487_qth[] PROGMEM =  "";
prog_char ch488_name[] PROGMEM = "U266";
prog_char ch488_qth[] PROGMEM =  "";
prog_char ch489_name[] PROGMEM = "U267";
prog_char ch489_qth[] PROGMEM =  "";
prog_char ch490_name[] PROGMEM = "U268";
prog_char ch490_qth[] PROGMEM =  "";
prog_char ch491_name[] PROGMEM = "U269";
prog_char ch491_qth[] PROGMEM =  "";
prog_char ch492_name[] PROGMEM = "U270";
prog_char ch492_qth[] PROGMEM =  "";
prog_char ch493_name[] PROGMEM = "U271";
prog_char ch493_qth[] PROGMEM =  "";
prog_char ch494_name[] PROGMEM = "U272";
prog_char ch494_qth[] PROGMEM =  "";
prog_char ch495_name[] PROGMEM = "U273";
prog_char ch495_qth[] PROGMEM =  "";
prog_char ch496_name[] PROGMEM = "U274";
prog_char ch496_qth[] PROGMEM =  "";
prog_char ch497_name[] PROGMEM = "U275";
prog_char ch497_qth[] PROGMEM =  "";
prog_char ch498_name[] PROGMEM = "U276";
prog_char ch498_qth[] PROGMEM =  "";
prog_char ch499_name[] PROGMEM = "U277";
prog_char ch499_qth[] PROGMEM =  "";
prog_char ch500_name[] PROGMEM = "U278";
prog_char ch500_qth[] PROGMEM =  "";
prog_char ch501_name[] PROGMEM = "U279";
prog_char ch501_qth[] PROGMEM =  "";
prog_char ch502_name[] PROGMEM = "U280";
prog_char ch502_qth[] PROGMEM =  "";
prog_char ch503_name[] PROGMEM = "U281";
prog_char ch503_qth[] PROGMEM =  "";
prog_char ch504_name[] PROGMEM = "U282";
prog_char ch504_qth[] PROGMEM =  "";
prog_char ch505_name[] PROGMEM = "U283";
prog_char ch505_qth[] PROGMEM =  "";
prog_char ch506_name[] PROGMEM = "U284";
prog_char ch506_qth[] PROGMEM =  "";
prog_char ch507_name[] PROGMEM = "U285";
prog_char ch507_qth[] PROGMEM =  "";
prog_char ch508_name[] PROGMEM = "U286";
prog_char ch508_qth[] PROGMEM =  "";
prog_char ch509_name[] PROGMEM = "U287";
prog_char ch509_qth[] PROGMEM =  "";
prog_char ch510_name[] PROGMEM = "U288";
prog_char ch510_qth[] PROGMEM =  "";
prog_char ch511_name[] PROGMEM = "U289";
prog_char ch511_qth[] PROGMEM =  "";
prog_char ch512_name[] PROGMEM = "U290";
prog_char ch512_qth[] PROGMEM =  "";
prog_char ch513_name[] PROGMEM = "U291";
prog_char ch513_qth[] PROGMEM =  "";
prog_char ch514_name[] PROGMEM = "U292";
prog_char ch514_qth[] PROGMEM =  "";
prog_char ch515_name[] PROGMEM = "U293";
prog_char ch515_qth[] PROGMEM =  "";
prog_char ch516_name[] PROGMEM = "U294";
prog_char ch516_qth[] PROGMEM =  "";
prog_char ch517_name[] PROGMEM = "U295";
prog_char ch517_qth[] PROGMEM =  "";
prog_char ch518_name[] PROGMEM = "U296";
prog_char ch518_qth[] PROGMEM =  "";
prog_char ch519_name[] PROGMEM = "U297";
prog_char ch519_qth[] PROGMEM =  "";
prog_char ch520_name[] PROGMEM = "U298";
prog_char ch520_qth[] PROGMEM =  "";
prog_char ch521_name[] PROGMEM = "U299";
prog_char ch521_qth[] PROGMEM =  "";
prog_char ch522_name[] PROGMEM = "U300";
prog_char ch522_qth[] PROGMEM =  "";
prog_char ch523_name[] PROGMEM = "U301";
prog_char ch523_qth[] PROGMEM =  "";
prog_char ch524_name[] PROGMEM = "U302";
prog_char ch524_qth[] PROGMEM =  "";
prog_char ch525_name[] PROGMEM = "U303";
prog_char ch525_qth[] PROGMEM =  "";
prog_char ch526_name[] PROGMEM = "U304";
prog_char ch526_qth[] PROGMEM =  "";
prog_char ch527_name[] PROGMEM = "U305";
prog_char ch527_qth[] PROGMEM =  "";
prog_char ch528_name[] PROGMEM = "U306";
prog_char ch528_qth[] PROGMEM =  "";
prog_char ch529_name[] PROGMEM = "U307";
prog_char ch529_qth[] PROGMEM =  "";
prog_char ch530_name[] PROGMEM = "U308";
prog_char ch530_qth[] PROGMEM =  "";
prog_char ch531_name[] PROGMEM = "U309";
prog_char ch531_qth[] PROGMEM =  "";
prog_char ch532_name[] PROGMEM = "U310";
prog_char ch532_qth[] PROGMEM =  "";
prog_char ch533_name[] PROGMEM = "U311";
prog_char ch533_qth[] PROGMEM =  "";
prog_char ch534_name[] PROGMEM = "U312";
prog_char ch534_qth[] PROGMEM =  "";
prog_char ch535_name[] PROGMEM = "U313";
prog_char ch535_qth[] PROGMEM =  "";
prog_char ch536_name[] PROGMEM = "U314";
prog_char ch536_qth[] PROGMEM =  "";
prog_char ch537_name[] PROGMEM = "U315";
prog_char ch537_qth[] PROGMEM =  "";
prog_char ch538_name[] PROGMEM = "U316";
prog_char ch538_qth[] PROGMEM =  "";
prog_char ch539_name[] PROGMEM = "U317";
prog_char ch539_qth[] PROGMEM =  "";
prog_char ch540_name[] PROGMEM = "U318";
prog_char ch540_qth[] PROGMEM =  "";
prog_char ch541_name[] PROGMEM = "U319";
prog_char ch541_qth[] PROGMEM =  "";
prog_char ch542_name[] PROGMEM = "U320";
prog_char ch542_qth[] PROGMEM =  "";
prog_char ch543_name[] PROGMEM = "U321";
prog_char ch543_qth[] PROGMEM =  "";
prog_char ch544_name[] PROGMEM = "U322";
prog_char ch544_qth[] PROGMEM =  "";
prog_char ch545_name[] PROGMEM = "U323";
prog_char ch545_qth[] PROGMEM =  "";
prog_char ch546_name[] PROGMEM = "U324";
prog_char ch546_qth[] PROGMEM =  "";
prog_char ch547_name[] PROGMEM = "U325";
prog_char ch547_qth[] PROGMEM =  "";
prog_char ch548_name[] PROGMEM = "U326";
prog_char ch548_qth[] PROGMEM =  "";
prog_char ch549_name[] PROGMEM = "U327";
prog_char ch549_qth[] PROGMEM =  "";
prog_char ch550_name[] PROGMEM = "U328";
prog_char ch550_qth[] PROGMEM =  "";
prog_char ch551_name[] PROGMEM = "U329";
prog_char ch551_qth[] PROGMEM =  "";
prog_char ch552_name[] PROGMEM = "U330";
prog_char ch552_qth[] PROGMEM =  "";
prog_char ch553_name[] PROGMEM = "U331";
prog_char ch553_qth[] PROGMEM =  "";
prog_char ch554_name[] PROGMEM = "U332";
prog_char ch554_qth[] PROGMEM =  "";
prog_char ch555_name[] PROGMEM = "U333";
prog_char ch555_qth[] PROGMEM =  "";
prog_char ch556_name[] PROGMEM = "U334";
prog_char ch556_qth[] PROGMEM =  "";
prog_char ch557_name[] PROGMEM = "U335";
prog_char ch557_qth[] PROGMEM =  "";
prog_char ch558_name[] PROGMEM = "U336";
prog_char ch558_qth[] PROGMEM =  "";
prog_char ch559_name[] PROGMEM = "U337";
prog_char ch559_qth[] PROGMEM =  "";
prog_char ch560_name[] PROGMEM = "U338";
prog_char ch560_qth[] PROGMEM =  "";
prog_char ch561_name[] PROGMEM = "U339";
prog_char ch561_qth[] PROGMEM =  "";
prog_char ch562_name[] PROGMEM = "U340";
prog_char ch562_qth[] PROGMEM =  "";
prog_char ch563_name[] PROGMEM = "U341";
prog_char ch563_qth[] PROGMEM =  "";
prog_char ch564_name[] PROGMEM = "U342";
prog_char ch564_qth[] PROGMEM =  "";
prog_char ch565_name[] PROGMEM = "U343";
prog_char ch565_qth[] PROGMEM =  "";
prog_char ch566_name[] PROGMEM = "U344";
prog_char ch566_qth[] PROGMEM =  "";
prog_char ch567_name[] PROGMEM = "U345";
prog_char ch567_qth[] PROGMEM =  "";
prog_char ch568_name[] PROGMEM = "U346";
prog_char ch568_qth[] PROGMEM =  "";
prog_char ch569_name[] PROGMEM = "U347";
prog_char ch569_qth[] PROGMEM =  "";
prog_char ch570_name[] PROGMEM = "U348";
prog_char ch570_qth[] PROGMEM =  "";
prog_char ch571_name[] PROGMEM = "U349";
prog_char ch571_qth[] PROGMEM =  "";
prog_char ch572_name[] PROGMEM = "U350";
prog_char ch572_qth[] PROGMEM =  "";
prog_char ch573_name[] PROGMEM = "U351";
prog_char ch573_qth[] PROGMEM =  "";
prog_char ch574_name[] PROGMEM = "U352";
prog_char ch574_qth[] PROGMEM =  "";
prog_char ch575_name[] PROGMEM = "U353";
prog_char ch575_qth[] PROGMEM =  "";
prog_char ch576_name[] PROGMEM = "U354";
prog_char ch576_qth[] PROGMEM =  "";
prog_char ch577_name[] PROGMEM = "U355";
prog_char ch577_qth[] PROGMEM =  "";
prog_char ch578_name[] PROGMEM = "U356";
prog_char ch578_qth[] PROGMEM =  "";
prog_char ch579_name[] PROGMEM = "U357";
prog_char ch579_qth[] PROGMEM =  "";
prog_char ch580_name[] PROGMEM = "U358";
prog_char ch580_qth[] PROGMEM =  "";
prog_char ch581_name[] PROGMEM = "U359";
prog_char ch581_qth[] PROGMEM =  "";
prog_char ch582_name[] PROGMEM = "U360";
prog_char ch582_qth[] PROGMEM =  "";
prog_char ch583_name[] PROGMEM = "U361";
prog_char ch583_qth[] PROGMEM =  "";
prog_char ch584_name[] PROGMEM = "U362";
prog_char ch584_qth[] PROGMEM =  "";
prog_char ch585_name[] PROGMEM = "U363";
prog_char ch585_qth[] PROGMEM =  "";
prog_char ch586_name[] PROGMEM = "U364";
prog_char ch586_qth[] PROGMEM =  "";
prog_char ch587_name[] PROGMEM = "U365";
prog_char ch587_qth[] PROGMEM =  "";
prog_char ch588_name[] PROGMEM = "U366";
prog_char ch588_qth[] PROGMEM =  "";
prog_char ch589_name[] PROGMEM = "U367";
prog_char ch589_qth[] PROGMEM =  "";
prog_char ch590_name[] PROGMEM = "U368";
prog_char ch590_qth[] PROGMEM =  "";
prog_char ch591_name[] PROGMEM = "U369";
prog_char ch591_qth[] PROGMEM =  "";
prog_char ch592_name[] PROGMEM = "U370";
prog_char ch592_qth[] PROGMEM =  "";
prog_char ch593_name[] PROGMEM = "U371";
prog_char ch593_qth[] PROGMEM =  "";
prog_char ch594_name[] PROGMEM = "U372";
prog_char ch594_qth[] PROGMEM =  "";
prog_char ch595_name[] PROGMEM = "U373";
prog_char ch595_qth[] PROGMEM =  "";
prog_char ch596_name[] PROGMEM = "U374";
prog_char ch596_qth[] PROGMEM =  "";
prog_char ch597_name[] PROGMEM = "U375";
prog_char ch597_qth[] PROGMEM =  "";
prog_char ch598_name[] PROGMEM = "U376";
prog_char ch598_qth[] PROGMEM =  "";
prog_char ch599_name[] PROGMEM = "U377";
prog_char ch599_qth[] PROGMEM =  "";
prog_char ch600_name[] PROGMEM = "U378";
prog_char ch600_qth[] PROGMEM =  "";
prog_char ch601_name[] PROGMEM = "U379";
prog_char ch601_qth[] PROGMEM =  "";
prog_char ch602_name[] PROGMEM = "U380";
prog_char ch602_qth[] PROGMEM =  "";
prog_char ch603_name[] PROGMEM = "U381";
prog_char ch603_qth[] PROGMEM =  "";
prog_char ch604_name[] PROGMEM = "U382";
prog_char ch604_qth[] PROGMEM =  "";
prog_char ch605_name[] PROGMEM = "U383";
prog_char ch605_qth[] PROGMEM =  "";
prog_char ch606_name[] PROGMEM = "U384";
prog_char ch606_qth[] PROGMEM =  "";
prog_char ch607_name[] PROGMEM = "U385";
prog_char ch607_qth[] PROGMEM =  "";
prog_char ch608_name[] PROGMEM = "U386";
prog_char ch608_qth[] PROGMEM =  "";
prog_char ch609_name[] PROGMEM = "U387";
prog_char ch609_qth[] PROGMEM =  "";
prog_char ch610_name[] PROGMEM = "U388";
prog_char ch610_qth[] PROGMEM =  "";
prog_char ch611_name[] PROGMEM = "U389";
prog_char ch611_qth[] PROGMEM =  "";
prog_char ch612_name[] PROGMEM = "U390";
prog_char ch612_qth[] PROGMEM =  "";
prog_char ch613_name[] PROGMEM = "U391";
prog_char ch613_qth[] PROGMEM =  "";
prog_char ch614_name[] PROGMEM = "U392";
prog_char ch614_qth[] PROGMEM =  "";
prog_char ch615_name[] PROGMEM = "U393";
prog_char ch615_qth[] PROGMEM =  "";
prog_char ch616_name[] PROGMEM = "U394";
prog_char ch616_qth[] PROGMEM =  "";
prog_char ch617_name[] PROGMEM = "U395";
prog_char ch617_qth[] PROGMEM =  "";
prog_char ch618_name[] PROGMEM = "U396";
prog_char ch618_qth[] PROGMEM =  "";
prog_char ch619_name[] PROGMEM = "U397";
prog_char ch619_qth[] PROGMEM =  "";
prog_char ch620_name[] PROGMEM = "U398";
prog_char ch620_qth[] PROGMEM =  "";
prog_char ch621_name[] PROGMEM = "U399";
prog_char ch621_qth[] PROGMEM =  "";
prog_char ch622_name[] PROGMEM = "U400";
prog_char ch622_qth[] PROGMEM =  "";
prog_char ch623_name[] PROGMEM = "U401";
prog_char ch623_qth[] PROGMEM =  "";
prog_char ch624_name[] PROGMEM = "U402";
prog_char ch624_qth[] PROGMEM =  "";
prog_char ch625_name[] PROGMEM = "U403";
prog_char ch625_qth[] PROGMEM =  "";
prog_char ch626_name[] PROGMEM = "U404";
prog_char ch626_qth[] PROGMEM =  "";
prog_char ch627_name[] PROGMEM = "U405";
prog_char ch627_qth[] PROGMEM =  "";
prog_char ch628_name[] PROGMEM = "U406";
prog_char ch628_qth[] PROGMEM =  "";
prog_char ch629_name[] PROGMEM = "U407";
prog_char ch629_qth[] PROGMEM =  "";
prog_char ch630_name[] PROGMEM = "U408";
prog_char ch630_qth[] PROGMEM =  "";
prog_char ch631_name[] PROGMEM = "U409";
prog_char ch631_qth[] PROGMEM =  "";
prog_char ch632_name[] PROGMEM = "U410";
prog_char ch632_qth[] PROGMEM =  "";
prog_char ch633_name[] PROGMEM = "U411";
prog_char ch633_qth[] PROGMEM =  "";
prog_char ch634_name[] PROGMEM = "U412";
prog_char ch634_qth[] PROGMEM =  "";
prog_char ch635_name[] PROGMEM = "U413";
prog_char ch635_qth[] PROGMEM =  "";
prog_char ch636_name[] PROGMEM = "U414";
prog_char ch636_qth[] PROGMEM =  "";
prog_char ch637_name[] PROGMEM = "U415";
prog_char ch637_qth[] PROGMEM =  "";
prog_char ch638_name[] PROGMEM = "U416";
prog_char ch638_qth[] PROGMEM =  "";
prog_char ch639_name[] PROGMEM = "U417";
prog_char ch639_qth[] PROGMEM =  "";
prog_char ch640_name[] PROGMEM = "U418";
prog_char ch640_qth[] PROGMEM =  "";
prog_char ch641_name[] PROGMEM = "U419";
prog_char ch641_qth[] PROGMEM =  "";
prog_char ch642_name[] PROGMEM = "U420";
prog_char ch642_qth[] PROGMEM =  "";
prog_char ch643_name[] PROGMEM = "U421";
prog_char ch643_qth[] PROGMEM =  "";
prog_char ch644_name[] PROGMEM = "U422";
prog_char ch644_qth[] PROGMEM =  "";
prog_char ch645_name[] PROGMEM = "U423";
prog_char ch645_qth[] PROGMEM =  "";
prog_char ch646_name[] PROGMEM = "U424";
prog_char ch646_qth[] PROGMEM =  "";
prog_char ch647_name[] PROGMEM = "U425";
prog_char ch647_qth[] PROGMEM =  "";
prog_char ch648_name[] PROGMEM = "U426";
prog_char ch648_qth[] PROGMEM =  "";
prog_char ch649_name[] PROGMEM = "U427";
prog_char ch649_qth[] PROGMEM =  "";
prog_char ch650_name[] PROGMEM = "U428";
prog_char ch650_qth[] PROGMEM =  "";
prog_char ch651_name[] PROGMEM = "U429";
prog_char ch651_qth[] PROGMEM =  "";
prog_char ch652_name[] PROGMEM = "U430";
prog_char ch652_qth[] PROGMEM =  "";
prog_char ch653_name[] PROGMEM = "U431";
prog_char ch653_qth[] PROGMEM =  "";
prog_char ch654_name[] PROGMEM = "U432";
prog_char ch654_qth[] PROGMEM =  "";
prog_char ch655_name[] PROGMEM = "U433";
prog_char ch655_qth[] PROGMEM =  "";
prog_char ch656_name[] PROGMEM = "U434";
prog_char ch656_qth[] PROGMEM =  "";
prog_char ch657_name[] PROGMEM = "U435";
prog_char ch657_qth[] PROGMEM =  "";
prog_char ch658_name[] PROGMEM = "U436";
prog_char ch658_qth[] PROGMEM =  "";
prog_char ch659_name[] PROGMEM = "U437";
prog_char ch659_qth[] PROGMEM =  "";
prog_char ch660_name[] PROGMEM = "U438";
prog_char ch660_qth[] PROGMEM =  "";
prog_char ch661_name[] PROGMEM = "U439";
prog_char ch661_qth[] PROGMEM =  "";
prog_char ch662_name[] PROGMEM = "U440";
prog_char ch662_qth[] PROGMEM =  "";
prog_char ch663_name[] PROGMEM = "U441";
prog_char ch663_qth[] PROGMEM =  "";
prog_char ch664_name[] PROGMEM = "U442";
prog_char ch664_qth[] PROGMEM =  "";
prog_char ch665_name[] PROGMEM = "U443";
prog_char ch665_qth[] PROGMEM =  "";
prog_char ch666_name[] PROGMEM = "U444";
prog_char ch666_qth[] PROGMEM =  "";
prog_char ch667_name[] PROGMEM = "U445";
prog_char ch667_qth[] PROGMEM =  "";
prog_char ch668_name[] PROGMEM = "U446";
prog_char ch668_qth[] PROGMEM =  "";
prog_char ch669_name[] PROGMEM = "U447";
prog_char ch669_qth[] PROGMEM =  "";
prog_char ch670_name[] PROGMEM = "U448";
prog_char ch670_qth[] PROGMEM =  "";
prog_char ch671_name[] PROGMEM = "U449";
prog_char ch671_qth[] PROGMEM =  "";
prog_char ch672_name[] PROGMEM = "U450";
prog_char ch672_qth[] PROGMEM =  "";
prog_char ch673_name[] PROGMEM = "U451";
prog_char ch673_qth[] PROGMEM =  "";
prog_char ch674_name[] PROGMEM = "U452";
prog_char ch674_qth[] PROGMEM =  "";
prog_char ch675_name[] PROGMEM = "U453";
prog_char ch675_qth[] PROGMEM =  "";
prog_char ch676_name[] PROGMEM = "U454";
prog_char ch676_qth[] PROGMEM =  "";
prog_char ch677_name[] PROGMEM = "U455";
prog_char ch677_qth[] PROGMEM =  "";
prog_char ch678_name[] PROGMEM = "U456";
prog_char ch678_qth[] PROGMEM =  "";
prog_char ch679_name[] PROGMEM = "U457";
prog_char ch679_qth[] PROGMEM =  "";
prog_char ch680_name[] PROGMEM = "U458";
prog_char ch680_qth[] PROGMEM =  "";
prog_char ch681_name[] PROGMEM = "U459";
prog_char ch681_qth[] PROGMEM =  "";
prog_char ch682_name[] PROGMEM = "U460";
prog_char ch682_qth[] PROGMEM =  "";
prog_char ch683_name[] PROGMEM = "U461";
prog_char ch683_qth[] PROGMEM =  "";
prog_char ch684_name[] PROGMEM = "U462";
prog_char ch684_qth[] PROGMEM =  "";
prog_char ch685_name[] PROGMEM = "U463";
prog_char ch685_qth[] PROGMEM =  "";
prog_char ch686_name[] PROGMEM = "U464";
prog_char ch686_qth[] PROGMEM =  "";
prog_char ch687_name[] PROGMEM = "U465";
prog_char ch687_qth[] PROGMEM =  "";
prog_char ch688_name[] PROGMEM = "U466";
prog_char ch688_qth[] PROGMEM =  "";
prog_char ch689_name[] PROGMEM = "U467";
prog_char ch689_qth[] PROGMEM =  "";
prog_char ch690_name[] PROGMEM = "U468";
prog_char ch690_qth[] PROGMEM =  "";
prog_char ch691_name[] PROGMEM = "U469";
prog_char ch691_qth[] PROGMEM =  "";
prog_char ch692_name[] PROGMEM = "U470";
prog_char ch692_qth[] PROGMEM =  "";
prog_char ch693_name[] PROGMEM = "U471";
prog_char ch693_qth[] PROGMEM =  "";
prog_char ch694_name[] PROGMEM = "U472";
prog_char ch694_qth[] PROGMEM =  "";
prog_char ch695_name[] PROGMEM = "U473";
prog_char ch695_qth[] PROGMEM =  "";
prog_char ch696_name[] PROGMEM = "U474";
prog_char ch696_qth[] PROGMEM =  "";
prog_char ch697_name[] PROGMEM = "U475";
prog_char ch697_qth[] PROGMEM =  "";
prog_char ch698_name[] PROGMEM = "U476";
prog_char ch698_qth[] PROGMEM =  "";
prog_char ch699_name[] PROGMEM = "U477";
prog_char ch699_qth[] PROGMEM =  "";
prog_char ch700_name[] PROGMEM = "U478";
prog_char ch700_qth[] PROGMEM =  "";
prog_char ch701_name[] PROGMEM = "U479";
prog_char ch701_qth[] PROGMEM =  "";
prog_char ch702_name[] PROGMEM = "U480";
prog_char ch702_qth[] PROGMEM =  "";
prog_char ch703_name[] PROGMEM = "U481";
prog_char ch703_qth[] PROGMEM =  "";
prog_char ch704_name[] PROGMEM = "U482";
prog_char ch704_qth[] PROGMEM =  "";
prog_char ch705_name[] PROGMEM = "U483";
prog_char ch705_qth[] PROGMEM =  "";
prog_char ch706_name[] PROGMEM = "U484";
prog_char ch706_qth[] PROGMEM =  "";
prog_char ch707_name[] PROGMEM = "U485";
prog_char ch707_qth[] PROGMEM =  "";
prog_char ch708_name[] PROGMEM = "U486";
prog_char ch708_qth[] PROGMEM =  "";
prog_char ch709_name[] PROGMEM = "U487";
prog_char ch709_qth[] PROGMEM =  "";
prog_char ch710_name[] PROGMEM = "U488";
prog_char ch710_qth[] PROGMEM =  "";
prog_char ch711_name[] PROGMEM = "U489";
prog_char ch711_qth[] PROGMEM =  "";
prog_char ch712_name[] PROGMEM = "U490";
prog_char ch712_qth[] PROGMEM =  "";
prog_char ch713_name[] PROGMEM = "U491";
prog_char ch713_qth[] PROGMEM =  "";
prog_char ch714_name[] PROGMEM = "U492";
prog_char ch714_qth[] PROGMEM =  "";
prog_char ch715_name[] PROGMEM = "U493";
prog_char ch715_qth[] PROGMEM =  "";
prog_char ch716_name[] PROGMEM = "U494";
prog_char ch716_qth[] PROGMEM =  "";
prog_char ch717_name[] PROGMEM = "U495";
prog_char ch717_qth[] PROGMEM =  "";
prog_char ch718_name[] PROGMEM = "U496";
prog_char ch718_qth[] PROGMEM =  "";
prog_char ch719_name[] PROGMEM = "U497";
prog_char ch719_qth[] PROGMEM =  "";
prog_char ch720_name[] PROGMEM = "U498";
prog_char ch720_qth[] PROGMEM =  "";
prog_char ch721_name[] PROGMEM = "U499";
prog_char ch721_qth[] PROGMEM =  "";
prog_char ch722_name[] PROGMEM = "U500";
prog_char ch722_qth[] PROGMEM =  "";
prog_char ch723_name[] PROGMEM = "U501";
prog_char ch723_qth[] PROGMEM =  "";
prog_char ch724_name[] PROGMEM = "U502";
prog_char ch724_qth[] PROGMEM =  "";
prog_char ch725_name[] PROGMEM = "U503";
prog_char ch725_qth[] PROGMEM =  "";
prog_char ch726_name[] PROGMEM = "U504";
prog_char ch726_qth[] PROGMEM =  "";
prog_char ch727_name[] PROGMEM = "U505";
prog_char ch727_qth[] PROGMEM =  "";
prog_char ch728_name[] PROGMEM = "U506";
prog_char ch728_qth[] PROGMEM =  "";
prog_char ch729_name[] PROGMEM = "U507";
prog_char ch729_qth[] PROGMEM =  "";
prog_char ch730_name[] PROGMEM = "U508";
prog_char ch730_qth[] PROGMEM =  "";
prog_char ch731_name[] PROGMEM = "U509";
prog_char ch731_qth[] PROGMEM =  "";
prog_char ch732_name[] PROGMEM = "U510";
prog_char ch732_qth[] PROGMEM =  "";
prog_char ch733_name[] PROGMEM = "U511";
prog_char ch733_qth[] PROGMEM =  "";
prog_char ch734_name[] PROGMEM = "U512";
prog_char ch734_qth[] PROGMEM =  "";
prog_char ch735_name[] PROGMEM = "U513";
prog_char ch735_qth[] PROGMEM =  "";
prog_char ch736_name[] PROGMEM = "U514";
prog_char ch736_qth[] PROGMEM =  "";
prog_char ch737_name[] PROGMEM = "U515";
prog_char ch737_qth[] PROGMEM =  "";
prog_char ch738_name[] PROGMEM = "U516";
prog_char ch738_qth[] PROGMEM =  "";
prog_char ch739_name[] PROGMEM = "U517";
prog_char ch739_qth[] PROGMEM =  "";
prog_char ch740_name[] PROGMEM = "U518";
prog_char ch740_qth[] PROGMEM =  "";
prog_char ch741_name[] PROGMEM = "U519";
prog_char ch741_qth[] PROGMEM =  "";
prog_char ch742_name[] PROGMEM = "U520";
prog_char ch742_qth[] PROGMEM =  "";
prog_char ch743_name[] PROGMEM = "U521";
prog_char ch743_qth[] PROGMEM =  "";
prog_char ch744_name[] PROGMEM = "U522";
prog_char ch744_qth[] PROGMEM =  "";
prog_char ch745_name[] PROGMEM = "U523";
prog_char ch745_qth[] PROGMEM =  "";
prog_char ch746_name[] PROGMEM = "U524";
prog_char ch746_qth[] PROGMEM =  "";
prog_char ch747_name[] PROGMEM = "U525";
prog_char ch747_qth[] PROGMEM =  "";
prog_char ch748_name[] PROGMEM = "U526";
prog_char ch748_qth[] PROGMEM =  "";
prog_char ch749_name[] PROGMEM = "U527";
prog_char ch749_qth[] PROGMEM =  "";
prog_char ch750_name[] PROGMEM = "U528";
prog_char ch750_qth[] PROGMEM =  "";
prog_char ch751_name[] PROGMEM = "U529";
prog_char ch751_qth[] PROGMEM =  "";
prog_char ch752_name[] PROGMEM = "U530";
prog_char ch752_qth[] PROGMEM =  "";
prog_char ch753_name[] PROGMEM = "U531";
prog_char ch753_qth[] PROGMEM =  "";
prog_char ch754_name[] PROGMEM = "U532";
prog_char ch754_qth[] PROGMEM =  "";
prog_char ch755_name[] PROGMEM = "U533";
prog_char ch755_qth[] PROGMEM =  "";
prog_char ch756_name[] PROGMEM = "U534";
prog_char ch756_qth[] PROGMEM =  "";
prog_char ch757_name[] PROGMEM = "U535";
prog_char ch757_qth[] PROGMEM =  "";
prog_char ch758_name[] PROGMEM = "U536";
prog_char ch758_qth[] PROGMEM =  "";
prog_char ch759_name[] PROGMEM = "U537";
prog_char ch759_qth[] PROGMEM =  "";
prog_char ch760_name[] PROGMEM = "U538";
prog_char ch760_qth[] PROGMEM =  "";
prog_char ch761_name[] PROGMEM = "U539";
prog_char ch761_qth[] PROGMEM =  "";
prog_char ch762_name[] PROGMEM = "U540";
prog_char ch762_qth[] PROGMEM =  "";
prog_char ch763_name[] PROGMEM = "U541";
prog_char ch763_qth[] PROGMEM =  "";
prog_char ch764_name[] PROGMEM = "U542";
prog_char ch764_qth[] PROGMEM =  "";
prog_char ch765_name[] PROGMEM = "U543";
prog_char ch765_qth[] PROGMEM =  "";
prog_char ch766_name[] PROGMEM = "U544";
prog_char ch766_qth[] PROGMEM =  "";
prog_char ch767_name[] PROGMEM = "U545";
prog_char ch767_qth[] PROGMEM =  "";
prog_char ch768_name[] PROGMEM = "U546";
prog_char ch768_qth[] PROGMEM =  "";
prog_char ch769_name[] PROGMEM = "U547";
prog_char ch769_qth[] PROGMEM =  "";
prog_char ch770_name[] PROGMEM = "U548";
prog_char ch770_qth[] PROGMEM =  "";
prog_char ch771_name[] PROGMEM = "U549";
prog_char ch771_qth[] PROGMEM =  "";
prog_char ch772_name[] PROGMEM = "U550";
prog_char ch772_qth[] PROGMEM =  "";
prog_char ch773_name[] PROGMEM = "U551";
prog_char ch773_qth[] PROGMEM =  "";
prog_char ch774_name[] PROGMEM = "U552";
prog_char ch774_qth[] PROGMEM =  "";
prog_char ch775_name[] PROGMEM = "U553";
prog_char ch775_qth[] PROGMEM =  "";
prog_char ch776_name[] PROGMEM = "U554";
prog_char ch776_qth[] PROGMEM =  "";
prog_char ch777_name[] PROGMEM = "U555";
prog_char ch777_qth[] PROGMEM =  "";
prog_char ch778_name[] PROGMEM = "U556";
prog_char ch778_qth[] PROGMEM =  "";
prog_char ch779_name[] PROGMEM = "U557";
prog_char ch779_qth[] PROGMEM =  "";
prog_char ch780_name[] PROGMEM = "U558";
prog_char ch780_qth[] PROGMEM =  "";
prog_char ch781_name[] PROGMEM = "U559";
prog_char ch781_qth[] PROGMEM =  "";
prog_char ch782_name[] PROGMEM = "U560";
prog_char ch782_qth[] PROGMEM =  "";
prog_char ch783_name[] PROGMEM = "U561";
prog_char ch783_qth[] PROGMEM =  "";
prog_char ch784_name[] PROGMEM = "U562";
prog_char ch784_qth[] PROGMEM =  "";
prog_char ch785_name[] PROGMEM = "U563";
prog_char ch785_qth[] PROGMEM =  "";
prog_char ch786_name[] PROGMEM = "U564";
prog_char ch786_qth[] PROGMEM =  "";
prog_char ch787_name[] PROGMEM = "U565";
prog_char ch787_qth[] PROGMEM =  "";
prog_char ch788_name[] PROGMEM = "U566";
prog_char ch788_qth[] PROGMEM =  "";
prog_char ch789_name[] PROGMEM = "U567";
prog_char ch789_qth[] PROGMEM =  "";
prog_char ch790_name[] PROGMEM = "U568";
prog_char ch790_qth[] PROGMEM =  "";
prog_char ch791_name[] PROGMEM = "U569";
prog_char ch791_qth[] PROGMEM =  "";
prog_char ch792_name[] PROGMEM = "U570";
prog_char ch792_qth[] PROGMEM =  "";
prog_char ch793_name[] PROGMEM = "U571";
prog_char ch793_qth[] PROGMEM =  "";
prog_char ch794_name[] PROGMEM = "U572";
prog_char ch794_qth[] PROGMEM =  "";
prog_char ch795_name[] PROGMEM = "U573";
prog_char ch795_qth[] PROGMEM =  "";
prog_char ch796_name[] PROGMEM = "U574";
prog_char ch796_qth[] PROGMEM =  "";
prog_char ch797_name[] PROGMEM = "U575";
prog_char ch797_qth[] PROGMEM =  "";
prog_char ch798_name[] PROGMEM = "U576";
prog_char ch798_qth[] PROGMEM =  "";
prog_char ch799_name[] PROGMEM = "U577";
prog_char ch799_qth[] PROGMEM =  "";
prog_char ch800_name[] PROGMEM = "U578";
prog_char ch800_qth[] PROGMEM =  "";
prog_char ch801_name[] PROGMEM = "U579";
prog_char ch801_qth[] PROGMEM =  "";
prog_char ch802_name[] PROGMEM = "U580";
prog_char ch802_qth[] PROGMEM =  "";
prog_char ch803_name[] PROGMEM = "U581";
prog_char ch803_qth[] PROGMEM =  "";
prog_char ch804_name[] PROGMEM = "U582";
prog_char ch804_qth[] PROGMEM =  "";
prog_char ch805_name[] PROGMEM = "U583";
prog_char ch805_qth[] PROGMEM =  "";
prog_char ch806_name[] PROGMEM = "U584";
prog_char ch806_qth[] PROGMEM =  "";
prog_char ch807_name[] PROGMEM = "U585";
prog_char ch807_qth[] PROGMEM =  "";
prog_char ch808_name[] PROGMEM = "U586";
prog_char ch808_qth[] PROGMEM =  "";
prog_char ch809_name[] PROGMEM = "U587";
prog_char ch809_qth[] PROGMEM =  "";
prog_char ch810_name[] PROGMEM = "U588";
prog_char ch810_qth[] PROGMEM =  "";
prog_char ch811_name[] PROGMEM = "U589";
prog_char ch811_qth[] PROGMEM =  "";
prog_char ch812_name[] PROGMEM = "U590";
prog_char ch812_qth[] PROGMEM =  "";
prog_char ch813_name[] PROGMEM = "U591";
prog_char ch813_qth[] PROGMEM =  "";
prog_char ch814_name[] PROGMEM = "U592";
prog_char ch814_qth[] PROGMEM =  "";
prog_char ch815_name[] PROGMEM = "U593";
prog_char ch815_qth[] PROGMEM =  "";
prog_char ch816_name[] PROGMEM = "U594";
prog_char ch816_qth[] PROGMEM =  "";
prog_char ch817_name[] PROGMEM = "U595";
prog_char ch817_qth[] PROGMEM =  "";
prog_char ch818_name[] PROGMEM = "U596";
prog_char ch818_qth[] PROGMEM =  "";
prog_char ch819_name[] PROGMEM = "U597";
prog_char ch819_qth[] PROGMEM =  "";
prog_char ch820_name[] PROGMEM = "U598";
prog_char ch820_qth[] PROGMEM =  "";
prog_char ch821_name[] PROGMEM = "U599";
prog_char ch821_qth[] PROGMEM =  "";
prog_char ch822_name[] PROGMEM = "U600";
prog_char ch822_qth[] PROGMEM =  "";
prog_char ch823_name[] PROGMEM = "U601";
prog_char ch823_qth[] PROGMEM =  "";
prog_char ch824_name[] PROGMEM = "U602";
prog_char ch824_qth[] PROGMEM =  "";
prog_char ch825_name[] PROGMEM = "U603";
prog_char ch825_qth[] PROGMEM =  "";
prog_char ch826_name[] PROGMEM = "U604";
prog_char ch826_qth[] PROGMEM =  "";
prog_char ch827_name[] PROGMEM = "U605";
prog_char ch827_qth[] PROGMEM =  "";
prog_char ch828_name[] PROGMEM = "U606";
prog_char ch828_qth[] PROGMEM =  "";
prog_char ch829_name[] PROGMEM = "U607";
prog_char ch829_qth[] PROGMEM =  "";
prog_char ch830_name[] PROGMEM = "U608";
prog_char ch830_qth[] PROGMEM =  "";
prog_char ch831_name[] PROGMEM = "U609";
prog_char ch831_qth[] PROGMEM =  "";
prog_char ch832_name[] PROGMEM = "U610";
prog_char ch832_qth[] PROGMEM =  "";
prog_char ch833_name[] PROGMEM = "U611";
prog_char ch833_qth[] PROGMEM =  "";
prog_char ch834_name[] PROGMEM = "U612";
prog_char ch834_qth[] PROGMEM =  "";
prog_char ch835_name[] PROGMEM = "U613";
prog_char ch835_qth[] PROGMEM =  "";
prog_char ch836_name[] PROGMEM = "U614";
prog_char ch836_qth[] PROGMEM =  "";
prog_char ch837_name[] PROGMEM = "U615";
prog_char ch837_qth[] PROGMEM =  "";
prog_char ch838_name[] PROGMEM = "U616";
prog_char ch838_qth[] PROGMEM =  "";
prog_char ch839_name[] PROGMEM = "U617";
prog_char ch839_qth[] PROGMEM =  "";
prog_char ch840_name[] PROGMEM = "U618";
prog_char ch840_qth[] PROGMEM =  "";
prog_char ch841_name[] PROGMEM = "U619";
prog_char ch841_qth[] PROGMEM =  "";
prog_char ch842_name[] PROGMEM = "U620";
prog_char ch842_qth[] PROGMEM =  "";
prog_char ch843_name[] PROGMEM = "U621";
prog_char ch843_qth[] PROGMEM =  "";
prog_char ch844_name[] PROGMEM = "U622";
prog_char ch844_qth[] PROGMEM =  "";
prog_char ch845_name[] PROGMEM = "U623";
prog_char ch845_qth[] PROGMEM =  "";
prog_char ch846_name[] PROGMEM = "U624";
prog_char ch846_qth[] PROGMEM =  "";
prog_char ch847_name[] PROGMEM = "U625";
prog_char ch847_qth[] PROGMEM =  "";
prog_char ch848_name[] PROGMEM = "U626";
prog_char ch848_qth[] PROGMEM =  "";
prog_char ch849_name[] PROGMEM = "U627";
prog_char ch849_qth[] PROGMEM =  "";
prog_char ch850_name[] PROGMEM = "U628";
prog_char ch850_qth[] PROGMEM =  "";
prog_char ch851_name[] PROGMEM = "U629";
prog_char ch851_qth[] PROGMEM =  "";
prog_char ch852_name[] PROGMEM = "U630";
prog_char ch852_qth[] PROGMEM =  "";
prog_char ch853_name[] PROGMEM = "U631";
prog_char ch853_qth[] PROGMEM =  "";
prog_char ch854_name[] PROGMEM = "U632";
prog_char ch854_qth[] PROGMEM =  "";
prog_char ch855_name[] PROGMEM = "U633";
prog_char ch855_qth[] PROGMEM =  "";
prog_char ch856_name[] PROGMEM = "U634";
prog_char ch856_qth[] PROGMEM =  "";
prog_char ch857_name[] PROGMEM = "U635";
prog_char ch857_qth[] PROGMEM =  "";
prog_char ch858_name[] PROGMEM = "U636";
prog_char ch858_qth[] PROGMEM =  "";
prog_char ch859_name[] PROGMEM = "U637";
prog_char ch859_qth[] PROGMEM =  "";
prog_char ch860_name[] PROGMEM = "U638";
prog_char ch860_qth[] PROGMEM =  "";
prog_char ch861_name[] PROGMEM = "U639";
prog_char ch861_qth[] PROGMEM =  "";
prog_char ch862_name[] PROGMEM = "U640";
prog_char ch862_qth[] PROGMEM =  "";
prog_char ch863_name[] PROGMEM = "U641";
prog_char ch863_qth[] PROGMEM =  "";
prog_char ch864_name[] PROGMEM = "U642";
prog_char ch864_qth[] PROGMEM =  "";
prog_char ch865_name[] PROGMEM = "U643";
prog_char ch865_qth[] PROGMEM =  "";
prog_char ch866_name[] PROGMEM = "U644";
prog_char ch866_qth[] PROGMEM =  "";
prog_char ch867_name[] PROGMEM = "U645";
prog_char ch867_qth[] PROGMEM =  "";
prog_char ch868_name[] PROGMEM = "U646";
prog_char ch868_qth[] PROGMEM =  "";
prog_char ch869_name[] PROGMEM = "U647";
prog_char ch869_qth[] PROGMEM =  "";
prog_char ch870_name[] PROGMEM = "U648";
prog_char ch870_qth[] PROGMEM =  "";
prog_char ch871_name[] PROGMEM = "U649";
prog_char ch871_qth[] PROGMEM =  "";
prog_char ch872_name[] PROGMEM = "U650";
prog_char ch872_qth[] PROGMEM =  "";
prog_char ch873_name[] PROGMEM = "U651";
prog_char ch873_qth[] PROGMEM =  "";
prog_char ch874_name[] PROGMEM = "U652";
prog_char ch874_qth[] PROGMEM =  "";
prog_char ch875_name[] PROGMEM = "U653";
prog_char ch875_qth[] PROGMEM =  "";
prog_char ch876_name[] PROGMEM = "U654";
prog_char ch876_qth[] PROGMEM =  "";
prog_char ch877_name[] PROGMEM = "U655";
prog_char ch877_qth[] PROGMEM =  "";
prog_char ch878_name[] PROGMEM = "RU656";
prog_char ch878_qth[] PROGMEM =  "";
prog_char ch879_name[] PROGMEM = "RU657";
prog_char ch879_qth[] PROGMEM =  "";
prog_char ch880_name[] PROGMEM = "RU658";
prog_char ch880_qth[] PROGMEM =  "";
prog_char ch881_name[] PROGMEM = "RU659";
prog_char ch881_qth[] PROGMEM =  "";
prog_char ch882_name[] PROGMEM = "RU660";
prog_char ch882_qth[] PROGMEM =  "";
prog_char ch883_name[] PROGMEM = "RU661";
prog_char ch883_qth[] PROGMEM =  "";
prog_char ch884_name[] PROGMEM = "RU662";
prog_char ch884_qth[] PROGMEM =  "";
prog_char ch885_name[] PROGMEM = "RU663";
prog_char ch885_qth[] PROGMEM =  "";
prog_char ch886_name[] PROGMEM = "RU664";
prog_char ch886_qth[] PROGMEM =  "";
prog_char ch887_name[] PROGMEM = "RU665";
prog_char ch887_qth[] PROGMEM =  "";
prog_char ch888_name[] PROGMEM = "RU666";
prog_char ch888_qth[] PROGMEM =  "";
prog_char ch889_name[] PROGMEM = "RU667";
prog_char ch889_qth[] PROGMEM =  "";
prog_char ch890_name[] PROGMEM = "RU668";
prog_char ch890_qth[] PROGMEM =  "";
prog_char ch891_name[] PROGMEM = "RU669";
prog_char ch891_qth[] PROGMEM =  "";
prog_char ch892_name[] PROGMEM = "RU670";
prog_char ch892_qth[] PROGMEM =  "";
prog_char ch893_name[] PROGMEM = "RU671";
prog_char ch893_qth[] PROGMEM =  "";
prog_char ch894_name[] PROGMEM = "RU672";
prog_char ch894_qth[] PROGMEM =  "";
prog_char ch895_name[] PROGMEM = "RU673";
prog_char ch895_qth[] PROGMEM =  "";
prog_char ch896_name[] PROGMEM = "RU674";
prog_char ch896_qth[] PROGMEM =  "";
prog_char ch897_name[] PROGMEM = "RU675";
prog_char ch897_qth[] PROGMEM =  "";
prog_char ch898_name[] PROGMEM = "RU676";
prog_char ch898_qth[] PROGMEM =  "";
prog_char ch899_name[] PROGMEM = "RU677";
prog_char ch899_qth[] PROGMEM =  "";
prog_char ch900_name[] PROGMEM = "RU678";
prog_char ch900_qth[] PROGMEM =  "";
prog_char ch901_name[] PROGMEM = "RU679";
prog_char ch901_qth[] PROGMEM =  "";
prog_char ch902_name[] PROGMEM = "RU680";
prog_char ch902_qth[] PROGMEM =  "";
prog_char ch903_name[] PROGMEM = "RU681";
prog_char ch903_qth[] PROGMEM =  "";
prog_char ch904_name[] PROGMEM = "RU682";
prog_char ch904_qth[] PROGMEM =  "";
prog_char ch905_name[] PROGMEM = "RU683";
prog_char ch905_qth[] PROGMEM =  "";
prog_char ch906_name[] PROGMEM = "RU684";
prog_char ch906_qth[] PROGMEM =  "";
prog_char ch907_name[] PROGMEM = "RU685";
prog_char ch907_qth[] PROGMEM =  "";
prog_char ch908_name[] PROGMEM = "RU686";
prog_char ch908_qth[] PROGMEM =  "";
prog_char ch909_name[] PROGMEM = "RU687";
prog_char ch909_qth[] PROGMEM =  "";
prog_char ch910_name[] PROGMEM = "RU688";
prog_char ch910_qth[] PROGMEM =  "";
prog_char ch911_name[] PROGMEM = "RU689";
prog_char ch911_qth[] PROGMEM =  "";
prog_char ch912_name[] PROGMEM = "RU690";
prog_char ch912_qth[] PROGMEM =  "";
prog_char ch913_name[] PROGMEM = "RU691";
prog_char ch913_qth[] PROGMEM =  "";
prog_char ch914_name[] PROGMEM = "RU692";
prog_char ch914_qth[] PROGMEM =  "";
prog_char ch915_name[] PROGMEM = "RU693";
prog_char ch915_qth[] PROGMEM =  "";
prog_char ch916_name[] PROGMEM = "RU694";
prog_char ch916_qth[] PROGMEM =  "";
prog_char ch917_name[] PROGMEM = "RU695";
prog_char ch917_qth[] PROGMEM =  "";
prog_char ch918_name[] PROGMEM = "RU696";
prog_char ch918_qth[] PROGMEM =  "";
prog_char ch919_name[] PROGMEM = "RU697";
prog_char ch919_qth[] PROGMEM =  "";
prog_char ch920_name[] PROGMEM = "RU698";
prog_char ch920_qth[] PROGMEM =  "";
prog_char ch921_name[] PROGMEM = "RU699";
prog_char ch921_qth[] PROGMEM =  "";
prog_char ch922_name[] PROGMEM = "RU700";
prog_char ch922_qth[] PROGMEM =  "";
prog_char ch923_name[] PROGMEM = "RU701";
prog_char ch923_qth[] PROGMEM =  "";
prog_char ch924_name[] PROGMEM = "RU702";
prog_char ch924_qth[] PROGMEM =  "";
prog_char ch925_name[] PROGMEM = "RU703";
prog_char ch925_qth[] PROGMEM =  "";
prog_char ch926_name[] PROGMEM = "RU704";
prog_char ch926_qth[] PROGMEM =  "";
prog_char ch927_name[] PROGMEM = "RU705";
prog_char ch927_qth[] PROGMEM =  "";
prog_char ch928_name[] PROGMEM = "RU706";
prog_char ch928_qth[] PROGMEM =  "";
prog_char ch929_name[] PROGMEM = "RU707";
prog_char ch929_qth[] PROGMEM =  "";
prog_char ch930_name[] PROGMEM = "RU708";
prog_char ch930_qth[] PROGMEM =  "";
prog_char ch931_name[] PROGMEM = "RU709";
prog_char ch931_qth[] PROGMEM =  "";
prog_char ch932_name[] PROGMEM = "RU710";
prog_char ch932_qth[] PROGMEM =  "";
prog_char ch933_name[] PROGMEM = "RU711";
prog_char ch933_qth[] PROGMEM =  "";
prog_char ch934_name[] PROGMEM = "RU712";
prog_char ch934_qth[] PROGMEM =  "";
prog_char ch935_name[] PROGMEM = "RU713";
prog_char ch935_qth[] PROGMEM =  "";
prog_char ch936_name[] PROGMEM = "RU714";
prog_char ch936_qth[] PROGMEM =  "";
prog_char ch937_name[] PROGMEM = "RU715";
prog_char ch937_qth[] PROGMEM =  "";
prog_char ch938_name[] PROGMEM = "RU716";
prog_char ch938_qth[] PROGMEM =  "";
prog_char ch939_name[] PROGMEM = "RU717";
prog_char ch939_qth[] PROGMEM =  "";
prog_char ch940_name[] PROGMEM = "RU718";
prog_char ch940_qth[] PROGMEM =  "";
prog_char ch941_name[] PROGMEM = "RU719";
prog_char ch941_qth[] PROGMEM =  "";
prog_char ch942_name[] PROGMEM = "RU720";
prog_char ch942_qth[] PROGMEM =  "";
prog_char ch943_name[] PROGMEM = "RU721";
prog_char ch943_qth[] PROGMEM =  "";
prog_char ch944_name[] PROGMEM = "RU722";
prog_char ch944_qth[] PROGMEM =  "";
prog_char ch945_name[] PROGMEM = "RU723";
prog_char ch945_qth[] PROGMEM =  "";
prog_char ch946_name[] PROGMEM = "RU724";
prog_char ch946_qth[] PROGMEM =  "";
prog_char ch947_name[] PROGMEM = "RU725";
prog_char ch947_qth[] PROGMEM =  "";
prog_char ch948_name[] PROGMEM = "RU726";
prog_char ch948_qth[] PROGMEM =  "";
prog_char ch949_name[] PROGMEM = "RU727";
prog_char ch949_qth[] PROGMEM =  "";
prog_char ch950_name[] PROGMEM = "RU728";
prog_char ch950_qth[] PROGMEM =  "";
prog_char ch951_name[] PROGMEM = "RU729";
prog_char ch951_qth[] PROGMEM =  "";
prog_char ch952_name[] PROGMEM = "RU730";
prog_char ch952_qth[] PROGMEM =  "";
prog_char ch953_name[] PROGMEM = "RU731";
prog_char ch953_qth[] PROGMEM =  "";
prog_char ch954_name[] PROGMEM = "RU732";
prog_char ch954_qth[] PROGMEM =  "";
prog_char ch955_name[] PROGMEM = "RU733";
prog_char ch955_qth[] PROGMEM =  "";
prog_char ch956_name[] PROGMEM = "RU734";
prog_char ch956_qth[] PROGMEM =  "";
prog_char ch957_name[] PROGMEM = "RU735";
prog_char ch957_qth[] PROGMEM =  "";
prog_char ch958_name[] PROGMEM = "RU736";
prog_char ch958_qth[] PROGMEM =  "";
prog_char ch959_name[] PROGMEM = "RU737";
prog_char ch959_qth[] PROGMEM =  "";
prog_char ch960_name[] PROGMEM = "RU738";
prog_char ch960_qth[] PROGMEM =  "";
prog_char ch961_name[] PROGMEM = "RU739";
prog_char ch961_qth[] PROGMEM =  "";
prog_char ch962_name[] PROGMEM = "RU740";
prog_char ch962_qth[] PROGMEM =  "";
prog_char ch963_name[] PROGMEM = "RU741";
prog_char ch963_qth[] PROGMEM =  "";
prog_char ch964_name[] PROGMEM = "RU742";
prog_char ch964_qth[] PROGMEM =  "";
prog_char ch965_name[] PROGMEM = "RU743";
prog_char ch965_qth[] PROGMEM =  "";
prog_char ch966_name[] PROGMEM = "RU744";
prog_char ch966_qth[] PROGMEM =  "";
prog_char ch967_name[] PROGMEM = "RU745";
prog_char ch967_qth[] PROGMEM =  "";
prog_char ch968_name[] PROGMEM = "RU746";
prog_char ch968_qth[] PROGMEM =  "";
prog_char ch969_name[] PROGMEM = "RU747";
prog_char ch969_qth[] PROGMEM =  "";
prog_char ch970_name[] PROGMEM = "RU748";
prog_char ch970_qth[] PROGMEM =  "";
prog_char ch971_name[] PROGMEM = "RU749";
prog_char ch971_qth[] PROGMEM =  "";
prog_char ch972_name[] PROGMEM = "RU750";
prog_char ch972_qth[] PROGMEM =  "";
prog_char ch973_name[] PROGMEM = "RU751";
prog_char ch973_qth[] PROGMEM =  "";
prog_char ch974_name[] PROGMEM = "RU752";
prog_char ch974_qth[] PROGMEM =  "";
prog_char ch975_name[] PROGMEM = "RU753";
prog_char ch975_qth[] PROGMEM =  "";
prog_char ch976_name[] PROGMEM = "RU754";
prog_char ch976_qth[] PROGMEM =  "";
prog_char ch977_name[] PROGMEM = "U755";
prog_char ch977_qth[] PROGMEM =  "";
prog_char ch978_name[] PROGMEM = "U756";
prog_char ch978_qth[] PROGMEM =  "";
prog_char ch979_name[] PROGMEM = "U757";
prog_char ch979_qth[] PROGMEM =  "";
prog_char ch980_name[] PROGMEM = "U758";
prog_char ch980_qth[] PROGMEM =  "";
prog_char ch981_name[] PROGMEM = "U759";
prog_char ch981_qth[] PROGMEM =  "";
prog_char ch982_name[] PROGMEM = "U760";
prog_char ch982_qth[] PROGMEM =  "";
prog_char ch983_name[] PROGMEM = "U761";
prog_char ch983_qth[] PROGMEM =  "";
prog_char ch984_name[] PROGMEM = "U762";
prog_char ch984_qth[] PROGMEM =  "";
prog_char ch985_name[] PROGMEM = "U763";
prog_char ch985_qth[] PROGMEM =  "";
prog_char ch986_name[] PROGMEM = "U764";
prog_char ch986_qth[] PROGMEM =  "";
prog_char ch987_name[] PROGMEM = "U765";
prog_char ch987_qth[] PROGMEM =  "";
prog_char ch988_name[] PROGMEM = "U766";
prog_char ch988_qth[] PROGMEM =  "";
prog_char ch989_name[] PROGMEM = "U767";
prog_char ch989_qth[] PROGMEM =  "";
prog_char ch990_name[] PROGMEM = "U768";
prog_char ch990_qth[] PROGMEM =  "";
prog_char ch991_name[] PROGMEM = "U769";
prog_char ch991_qth[] PROGMEM =  "";
prog_char ch992_name[] PROGMEM = "U770";
prog_char ch992_qth[] PROGMEM =  "";
prog_char ch993_name[] PROGMEM = "U771";
prog_char ch993_qth[] PROGMEM =  "";
prog_char ch994_name[] PROGMEM = "U772";
prog_char ch994_qth[] PROGMEM =  "";
prog_char ch995_name[] PROGMEM = "U773";
prog_char ch995_qth[] PROGMEM =  "";
prog_char ch996_name[] PROGMEM = "U774";
prog_char ch996_qth[] PROGMEM =  "";
prog_char ch997_name[] PROGMEM = "U775";
prog_char ch997_qth[] PROGMEM =  "";
prog_char ch998_name[] PROGMEM = "U776";
prog_char ch998_qth[] PROGMEM =  "";
prog_char ch999_name[] PROGMEM = "U777";
prog_char ch999_qth[] PROGMEM =  "";
prog_char ch1000_name[] PROGMEM = "U778";
prog_char ch1000_qth[] PROGMEM =  "";
prog_char ch1001_name[] PROGMEM = "U779";
prog_char ch1001_qth[] PROGMEM =  "";
prog_char ch1002_name[] PROGMEM = "U780";
prog_char ch1002_qth[] PROGMEM =  "";
prog_char ch1003_name[] PROGMEM = "U781";
prog_char ch1003_qth[] PROGMEM =  "";
prog_char ch1004_name[] PROGMEM = "U782";
prog_char ch1004_qth[] PROGMEM =  "";
prog_char ch1005_name[] PROGMEM = "U783";
prog_char ch1005_qth[] PROGMEM =  "";
prog_char ch1006_name[] PROGMEM = "U784";
prog_char ch1006_qth[] PROGMEM =  "";
prog_char ch1007_name[] PROGMEM = "U785";
prog_char ch1007_qth[] PROGMEM =  "";
prog_char ch1008_name[] PROGMEM = "U786";
prog_char ch1008_qth[] PROGMEM =  "";
prog_char ch1009_name[] PROGMEM = "U787";
prog_char ch1009_qth[] PROGMEM =  "";
prog_char ch1010_name[] PROGMEM = "U788";
prog_char ch1010_qth[] PROGMEM =  "";
prog_char ch1011_name[] PROGMEM = "U789";
prog_char ch1011_qth[] PROGMEM =  "";
prog_char ch1012_name[] PROGMEM = "U790";
prog_char ch1012_qth[] PROGMEM =  "";
prog_char ch1013_name[] PROGMEM = "U791";
prog_char ch1013_qth[] PROGMEM =  "";
prog_char ch1014_name[] PROGMEM = "U792";
prog_char ch1014_qth[] PROGMEM =  "";
prog_char ch1015_name[] PROGMEM = "U793";
prog_char ch1015_qth[] PROGMEM =  "";
prog_char ch1016_name[] PROGMEM = "U794";
prog_char ch1016_qth[] PROGMEM =  "";
prog_char ch1017_name[] PROGMEM = "U795";
prog_char ch1017_qth[] PROGMEM =  "";
prog_char ch1018_name[] PROGMEM = "U796";
prog_char ch1018_qth[] PROGMEM =  "";
prog_char ch1019_name[] PROGMEM = "U797";
prog_char ch1019_qth[] PROGMEM =  "";
prog_char ch1020_name[] PROGMEM = "U798";
prog_char ch1020_qth[] PROGMEM =  "";
prog_char ch1021_name[] PROGMEM = "U799";
prog_char ch1021_qth[] PROGMEM =  "";
prog_char ch1022_name[] PROGMEM = 		"DB0VA";
prog_char ch1022_qth[] PROGMEM =  "JO40bc";
prog_char ch1023_name[] PROGMEM = "DB0ESW";
prog_char ch1023_qth[] PROGMEM =  "JO51ae";
prog_char ch1024_name[] PROGMEM = 	"1";
prog_char ch1024_qth[] PROGMEM =  "";
prog_char ch1025_name[] PROGMEM = "2";
prog_char ch1025_qth[] PROGMEM =  "";
prog_char ch1026_name[] PROGMEM = "3";
prog_char ch1026_qth[] PROGMEM =  "";
prog_char ch1027_name[] PROGMEM = "4";
prog_char ch1027_qth[] PROGMEM =  "";
prog_char ch1028_name[] PROGMEM = "5";
prog_char ch1028_qth[] PROGMEM =  "";
prog_char ch1029_name[] PROGMEM = "6";
prog_char ch1029_qth[] PROGMEM =  "";
prog_char ch1030_name[] PROGMEM = "7";
prog_char ch1030_qth[] PROGMEM =  "";
prog_char ch1031_name[] PROGMEM = "8";
prog_char ch1031_qth[] PROGMEM =  "";
prog_char ch1032_name[] PROGMEM = "9";
prog_char ch1032_qth[] PROGMEM =  "";
prog_char ch1033_name[] PROGMEM = "10";
prog_char ch1033_qth[] PROGMEM =  "";
prog_char ch1034_name[] PROGMEM = "11";
prog_char ch1034_qth[] PROGMEM =  "";
prog_char ch1035_name[] PROGMEM = "12";
prog_char ch1035_qth[] PROGMEM =  "";
prog_char ch1036_name[] PROGMEM = "13";
prog_char ch1036_qth[] PROGMEM =  "";
prog_char ch1037_name[] PROGMEM = "14";
prog_char ch1037_qth[] PROGMEM =  "";
prog_char ch1038_name[] PROGMEM = "15";
prog_char ch1038_qth[] PROGMEM =  "";
prog_char ch1039_name[] PROGMEM = "16";
prog_char ch1039_qth[] PROGMEM =  "";
prog_char ch1040_name[] PROGMEM = "17";
prog_char ch1040_qth[] PROGMEM =  "";
prog_char ch1041_name[] PROGMEM = "18";
prog_char ch1041_qth[] PROGMEM =  "";
prog_char ch1042_name[] PROGMEM = "19";
prog_char ch1042_qth[] PROGMEM =  "";
prog_char ch1043_name[] PROGMEM = "20";
prog_char ch1043_qth[] PROGMEM =  "";
prog_char ch1044_name[] PROGMEM = "21";
prog_char ch1044_qth[] PROGMEM =  "";
prog_char ch1045_name[] PROGMEM = "22";
prog_char ch1045_qth[] PROGMEM =  "";
prog_char ch1046_name[] PROGMEM = "23";
prog_char ch1046_qth[] PROGMEM =  "";
prog_char ch1047_name[] PROGMEM = "24";
prog_char ch1047_qth[] PROGMEM =  "";
prog_char ch1048_name[] PROGMEM = "25";
prog_char ch1048_qth[] PROGMEM =  "";
prog_char ch1049_name[] PROGMEM = "26";
prog_char ch1049_qth[] PROGMEM =  "";
prog_char ch1050_name[] PROGMEM = "27";
prog_char ch1050_qth[] PROGMEM =  "";
prog_char ch1051_name[] PROGMEM = "28";
prog_char ch1051_qth[] PROGMEM =  "";
prog_char ch1052_name[] PROGMEM = "29";
prog_char ch1052_qth[] PROGMEM =  "";
prog_char ch1053_name[] PROGMEM = "30";
prog_char ch1053_qth[] PROGMEM =  "";
prog_char ch1054_name[] PROGMEM = "31";
prog_char ch1054_qth[] PROGMEM =  "";
prog_char ch1055_name[] PROGMEM = "32";
prog_char ch1055_qth[] PROGMEM =  "";
prog_char ch1056_name[] PROGMEM = "33";
prog_char ch1056_qth[] PROGMEM =  "";
prog_char ch1057_name[] PROGMEM = "34";
prog_char ch1057_qth[] PROGMEM =  "";
prog_char ch1058_name[] PROGMEM = "35";
prog_char ch1058_qth[] PROGMEM =  "";
prog_char ch1059_name[] PROGMEM = "36";
prog_char ch1059_qth[] PROGMEM =  "";
prog_char ch1060_name[] PROGMEM = "37";
prog_char ch1060_qth[] PROGMEM =  "";
prog_char ch1061_name[] PROGMEM = "38";
prog_char ch1061_qth[] PROGMEM =  "";
prog_char ch1062_name[] PROGMEM = "39";
prog_char ch1062_qth[] PROGMEM =  "";
prog_char ch1063_name[] PROGMEM = "40";
prog_char ch1063_qth[] PROGMEM =  "";
prog_char ch1064_name[] PROGMEM = "41";
prog_char ch1064_qth[] PROGMEM =  "";
prog_char ch1065_name[] PROGMEM = "42";
prog_char ch1065_qth[] PROGMEM =  "";
prog_char ch1066_name[] PROGMEM = "43";
prog_char ch1066_qth[] PROGMEM =  "";
prog_char ch1067_name[] PROGMEM = "44";
prog_char ch1067_qth[] PROGMEM =  "";
prog_char ch1068_name[] PROGMEM = "45";
prog_char ch1068_qth[] PROGMEM =  "";
prog_char ch1069_name[] PROGMEM = "46";
prog_char ch1069_qth[] PROGMEM =  "";
prog_char ch1070_name[] PROGMEM = "47";
prog_char ch1070_qth[] PROGMEM =  "";
prog_char ch1071_name[] PROGMEM = "48";
prog_char ch1071_qth[] PROGMEM =  "";
prog_char ch1072_name[] PROGMEM = "49";
prog_char ch1072_qth[] PROGMEM =  "";
prog_char ch1073_name[] PROGMEM = "50";
prog_char ch1073_qth[] PROGMEM =  "";
prog_char ch1074_name[] PROGMEM = "51";
prog_char ch1074_qth[] PROGMEM =  "";
prog_char ch1075_name[] PROGMEM = "52";
prog_char ch1075_qth[] PROGMEM =  "";
prog_char ch1076_name[] PROGMEM = "53";
prog_char ch1076_qth[] PROGMEM =  "";
prog_char ch1077_name[] PROGMEM = "54";
prog_char ch1077_qth[] PROGMEM =  "";
prog_char ch1078_name[] PROGMEM = "55";
prog_char ch1078_qth[] PROGMEM =  "";
prog_char ch1079_name[] PROGMEM = "56";
prog_char ch1079_qth[] PROGMEM =  "";
prog_char ch1080_name[] PROGMEM = "57";
prog_char ch1080_qth[] PROGMEM =  "";
prog_char ch1081_name[] PROGMEM = "58";
prog_char ch1081_qth[] PROGMEM =  "";
prog_char ch1082_name[] PROGMEM = "59";
prog_char ch1082_qth[] PROGMEM =  "";
prog_char ch1083_name[] PROGMEM = "60";
prog_char ch1083_qth[] PROGMEM =  "";
prog_char ch1084_name[] PROGMEM = "61";
prog_char ch1084_qth[] PROGMEM =  "";
prog_char ch1085_name[] PROGMEM = "62";
prog_char ch1085_qth[] PROGMEM =  "";
prog_char ch1086_name[] PROGMEM = "63";
prog_char ch1086_qth[] PROGMEM =  "";
prog_char ch1087_name[] PROGMEM = "64";
prog_char ch1087_qth[] PROGMEM =  "";
prog_char ch1088_name[] PROGMEM = "65";
prog_char ch1088_qth[] PROGMEM =  "";
prog_char ch1089_name[] PROGMEM = "66";
prog_char ch1089_qth[] PROGMEM =  "";
prog_char ch1090_name[] PROGMEM = "67";
prog_char ch1090_qth[] PROGMEM =  "";
prog_char ch1091_name[] PROGMEM = "68";
prog_char ch1091_qth[] PROGMEM =  "";
prog_char ch1092_name[] PROGMEM = "69";
prog_char ch1092_qth[] PROGMEM =  "";
prog_char ch1093_name[] PROGMEM = 	"1";
prog_char ch1093_qth[] PROGMEM =  "";
prog_char ch1094_name[] PROGMEM = "2";
prog_char ch1094_qth[] PROGMEM =  "";
prog_char ch1095_name[] PROGMEM = "3";
prog_char ch1095_qth[] PROGMEM =  "";
prog_char ch1096_name[] PROGMEM = "4";
prog_char ch1096_qth[] PROGMEM =  "";
prog_char ch1097_name[] PROGMEM = "5";
prog_char ch1097_qth[] PROGMEM =  "";
prog_char ch1098_name[] PROGMEM = "6";
prog_char ch1098_qth[] PROGMEM =  "";
prog_char ch1099_name[] PROGMEM = "7";
prog_char ch1099_qth[] PROGMEM =  "";
/* Channels structure */
PROGMEM  t_channel channels[] = {

{ch1_name, 13600, NULL , 0,ch1_qth},
{ch2_name, 183660, NULL , 0,ch2_qth},
{ch3_name, 183600,FT817_MODE_CW_NARROW, 0,ch3_qth},
{ch4_name, 373500, NULL , 0,ch4_qth},
{ch5_name, 376000, NULL , 0,ch5_qth},
{ch6_name, 369000, NULL , 0,ch6_qth},
{ch7_name, 363000, NULL , 0,ch7_qth},
{ch8_name, 356000,FT817_MODE_CW_NARROW, 0,ch8_qth},
{ch9_name, 355500,FT817_MODE_CW_NARROW, 0,ch9_qth},
{ch10_name, 359260, NULL , 0,ch10_qth},
{ch11_name, 703000,FT817_MODE_CW_NARROW, 0,ch11_qth},
{ch12_name, 711000, NULL , 0,ch12_qth},
{ch13_name, 716500, NULL , 0,ch13_qth},
{ch14_name, 707000, NULL , 0,ch14_qth},
{ch15_name, 709000, NULL , 0,ch15_qth},
{ch16_name, 703860, NULL , 0,ch16_qth},
{ch17_name, 1011600,FT817_MODE_CW_NARROW, 0,ch17_qth},
{ch18_name, 1013870, NULL , 0,ch18_qth},
{ch19_name, 1406000,FT817_MODE_CW_NARROW, 0,ch19_qth},
{ch20_name, 1430000, NULL , 0,ch20_qth},
{ch21_name, 1409560, NULL , 0,ch21_qth},
{ch22_name, 1808600,FT817_MODE_CW_NARROW, 0,ch22_qth},
{ch23_name, 1813000, NULL , 0,ch23_qth},
{ch24_name, 1815000, NULL , 0,ch24_qth},
{ch25_name, 1816000, NULL , 0,ch25_qth},
{ch26_name, 1810460, NULL , 0,ch26_qth},
{ch27_name, 2106000,FT817_MODE_CW_NARROW, 0,ch27_qth},
{ch28_name, 2105500,FT817_MODE_CW_NARROW, 0,ch28_qth},
{ch29_name, 2118000, NULL , 0,ch29_qth},
{ch30_name, 2199460, NULL , 0,ch30_qth},
{ch31_name, 2490600,FT817_MODE_CW_NARROW, 0,ch31_qth},
{ch32_name, 2495000, NULL , 0,ch32_qth},
{ch33_name, 2492460, NULL , 0,ch33_qth},
{ch34_name, 2836000, NULL , 0,ch34_qth},
{ch35_name, 2833000, NULL , 0,ch35_qth},
{ch36_name, 2960000,FT817_MODE_FM, 0,ch36_qth},
{ch37_name, 2961000,FT817_MODE_FM, 0,ch37_qth},
{ch38_name, 2805500,FT817_MODE_CW_NARROW, 0,ch38_qth},
{ch39_name, 2806000,FT817_MODE_CW_NARROW, 0,ch39_qth},
{ch40_name, 2925000,FT817_MODE_FM, 0,ch40_qth},
{ch41_name, 2812460, NULL , 0,ch41_qth},
{ch42_name, 2696500, NULL , 0,ch42_qth},
{ch43_name, 2697500, NULL , 0,ch43_qth},
{ch44_name, 2698500, NULL , 0,ch44_qth},
{ch45_name, 2699500, NULL , 0,ch45_qth},
{ch46_name, 2700500, NULL , 0,ch46_qth},
{ch47_name, 2701500, NULL , 0,ch47_qth},
{ch48_name, 2702500, NULL , 0,ch48_qth},
{ch49_name, 2703500, NULL , 0,ch49_qth},
{ch50_name, 2704500, NULL , 0,ch50_qth},
{ch51_name, 2705500, NULL , 0,ch51_qth},
{ch52_name, 2706500, NULL , 0,ch52_qth},
{ch53_name, 2707500, NULL , 0,ch53_qth},
{ch54_name, 2708500, NULL , 0,ch54_qth},
{ch55_name, 2709500, NULL , 0,ch55_qth},
{ch56_name, 2710500, NULL , 0,ch56_qth},
{ch57_name, 2711500,FT817_MODE_FM, 0,ch57_qth},
{ch58_name, 2712500,FT817_MODE_FM, 0,ch58_qth},
{ch59_name, 2713500,FT817_MODE_FM, 0,ch59_qth},
{ch60_name, 2715500, NULL , 0,ch60_qth},
{ch61_name, 2715500,FT817_MODE_FM, 0,ch61_qth},
{ch62_name, 2716500,FT817_MODE_FM, 0,ch62_qth},
{ch63_name, 2717500,FT817_MODE_FM, 0,ch63_qth},
{ch64_name, 2718500,FT817_MODE_FM, 0,ch64_qth},
{ch65_name, 2719500, NULL , 0,ch65_qth},
{ch66_name, 2720500,FT817_MODE_FM, 0,ch66_qth},
{ch67_name, 2721500,FT817_MODE_FM, 0,ch67_qth},
{ch68_name, 2722500,FT817_MODE_FM, 0,ch68_qth},
{ch69_name, 2725500,FT817_MODE_FM, 0,ch69_qth},
{ch70_name, 2723500,FT817_MODE_FM, 0,ch70_qth},
{ch71_name, 2724500,FT817_MODE_FM, 0,ch71_qth},
{ch72_name, 2726500,FT817_MODE_FM, 0,ch72_qth},
{ch73_name, 2727500,FT817_MODE_FM, 0,ch73_qth},
{ch74_name, 2728500,FT817_MODE_FM, 0,ch74_qth},
{ch75_name, 2729500,FT817_MODE_FM, 0,ch75_qth},
{ch76_name, 2730500,FT817_MODE_FM, 0,ch76_qth},
{ch77_name, 2731500,FT817_MODE_FM, 0,ch77_qth},
{ch78_name, 2732500,FT817_MODE_FM, 0,ch78_qth},
{ch79_name, 2733500,FT817_MODE_FM, 0,ch79_qth},
{ch80_name, 2734500,FT817_MODE_FM, 0,ch80_qth},
{ch81_name, 2735500,FT817_MODE_FM, 0,ch81_qth},
{ch82_name, 2736500,FT817_MODE_FM, 0,ch82_qth},
{ch83_name, 2737500,FT817_MODE_FM, 0,ch83_qth},
{ch84_name, 2738500,FT817_MODE_FM, 0,ch84_qth},
{ch85_name, 2737500,FT817_MODE_FM, 0,ch85_qth},
{ch86_name, 2740500,FT817_MODE_FM, 0,ch86_qth},
{ch87_name, 2656500,FT817_MODE_FM, 0,ch87_qth},
{ch88_name, 2657500,FT817_MODE_FM, 0,ch88_qth},
{ch89_name, 2658500,FT817_MODE_FM, 0,ch89_qth},
{ch90_name, 2659500,FT817_MODE_FM, 0,ch90_qth},
{ch91_name, 2660500,FT817_MODE_FM, 0,ch91_qth},
{ch92_name, 2661500,FT817_MODE_FM, 0,ch92_qth},
{ch93_name, 2662500,FT817_MODE_FM, 0,ch93_qth},
{ch94_name, 2663500,FT817_MODE_FM, 0,ch94_qth},
{ch95_name, 2664500,FT817_MODE_FM, 0,ch95_qth},
{ch96_name, 2665500,FT817_MODE_FM, 0,ch96_qth},
{ch97_name, 2666500,FT817_MODE_FM, 0,ch97_qth},
{ch98_name, 2667500,FT817_MODE_FM, 0,ch98_qth},
{ch99_name, 2668500,FT817_MODE_FM, 0,ch99_qth},
{ch100_name, 2669500,FT817_MODE_FM, 0,ch100_qth},
{ch101_name, 2670500,FT817_MODE_FM, 0,ch101_qth},
{ch102_name, 2671500,FT817_MODE_FM, 0,ch102_qth},
{ch103_name, 2672500,FT817_MODE_FM, 0,ch103_qth},
{ch104_name, 2673500,FT817_MODE_FM, 0,ch104_qth},
{ch105_name, 2674500,FT817_MODE_FM, 0,ch105_qth},
{ch106_name, 2675500,FT817_MODE_FM, 0,ch106_qth},
{ch107_name, 2676500,FT817_MODE_FM, 0,ch107_qth},
{ch108_name, 2677500,FT817_MODE_FM, 0,ch108_qth},
{ch109_name, 2678500,FT817_MODE_FM, 0,ch109_qth},
{ch110_name, 2679500,FT817_MODE_FM, 0,ch110_qth},
{ch111_name, 2680500,FT817_MODE_FM, 0,ch111_qth},
{ch112_name, 2681500,FT817_MODE_FM, 0,ch112_qth},
{ch113_name, 2682500,FT817_MODE_FM, 0,ch113_qth},
{ch114_name, 2683500,FT817_MODE_FM, 0,ch114_qth},
{ch115_name, 2684500,FT817_MODE_FM, 0,ch115_qth},
{ch116_name, 2685500,FT817_MODE_FM, 0,ch116_qth},
{ch117_name, 2686500,FT817_MODE_FM, 0,ch117_qth},
{ch118_name, 2687500,FT817_MODE_FM, 0,ch118_qth},
{ch119_name, 2688500,FT817_MODE_FM, 0,ch119_qth},
{ch120_name, 2689500,FT817_MODE_FM, 0,ch120_qth},
{ch121_name, 2690500,FT817_MODE_FM, 0,ch121_qth},
{ch122_name, 2691500,FT817_MODE_FM, 0,ch122_qth},
{ch123_name, 2692500,FT817_MODE_FM, 0,ch123_qth},
{ch124_name, 2693500,FT817_MODE_FM, 0,ch124_qth},
{ch125_name, 2694500,FT817_MODE_FM, 0,ch125_qth},
{ch126_name, 2695500,FT817_MODE_FM, 0,ch126_qth},
{ch127_name, 502930, NULL , 0,ch127_qth},
{ch128_name, 14521250,FT817_MODE_FM, 0,ch128_qth},
{ch129_name, 14480000,FT817_MODE_FM, 0,ch129_qth},
{ch130_name, 14496250,FT817_MODE_FM, 0,ch130_qth},
{ch131_name, 14497500,FT817_MODE_FM, 0,ch131_qth},
{ch132_name, 14530000, NULL , 0,ch132_qth},
{ch133_name, 14537500, NULL , 0,ch133_qth},
{ch134_name, 14417000, NULL , 0,ch134_qth},
{ch135_name, 14430000, NULL , 0,ch135_qth},
{ch136_name, 14437000, NULL , 0,ch136_qth},
{ch137_name, 14448900, NULL , 0,ch137_qth},
{ch138_name, 14450000, NULL , 0,ch138_qth},
{ch139_name, 14452500, NULL , 0,ch139_qth},
{ch140_name, 14460000, NULL , 0,ch140_qth},
{ch141_name, 14470000, NULL , 0,ch141_qth},
{ch142_name, 14475000, NULL , 0,ch142_qth},
{ch143_name, 14500000,FT817_MODE_FM, 0,ch143_qth},
{ch144_name, 14501250,FT817_MODE_FM, 0,ch144_qth},
{ch145_name, 14502500,FT817_MODE_FM, 0,ch145_qth},
{ch146_name, 14503750,FT817_MODE_FM, 0,ch146_qth},
{ch147_name, 14505000,FT817_MODE_FM, 0,ch147_qth},
{ch148_name, 14506250,FT817_MODE_FM, 0,ch148_qth},
{ch149_name, 14507500,FT817_MODE_FM, 0,ch149_qth},
{ch150_name, 14508750,FT817_MODE_FM, 0,ch150_qth},
{ch151_name, 14510000,FT817_MODE_FM, 0,ch151_qth},
{ch152_name, 14511250,FT817_MODE_FM, 0,ch152_qth},
{ch153_name, 14512500,FT817_MODE_FM, 0,ch153_qth},
{ch154_name, 14513750,FT817_MODE_FM, 0,ch154_qth},
{ch155_name, 14515000,FT817_MODE_FM, 0,ch155_qth},
{ch156_name, 14516250,FT817_MODE_FM, 0,ch156_qth},
{ch157_name, 14517500,FT817_MODE_FM, 0,ch157_qth},
{ch158_name, 14518750,FT817_MODE_FM, 0,ch158_qth},
{ch159_name, 14520000,FT817_MODE_FM, 0,ch159_qth},
{ch160_name, 14521250,FT817_MODE_FM, 0,ch160_qth},
{ch161_name, 14522500,FT817_MODE_FM, 0,ch161_qth},
{ch162_name, 14523750,FT817_MODE_FM, 0,ch162_qth},
{ch163_name, 14525000,FT817_MODE_FM, 0,ch163_qth},
{ch164_name, 14526250,FT817_MODE_FM, 0,ch164_qth},
{ch165_name, 14527500,FT817_MODE_FM, 0,ch165_qth},
{ch166_name, 14528750,FT817_MODE_FM, 0,ch166_qth},
{ch167_name, 14530000,FT817_MODE_FM, 0,ch167_qth},
{ch168_name, 14531250,FT817_MODE_FM, 0,ch168_qth},
{ch169_name, 14532500,FT817_MODE_FM, 0,ch169_qth},
{ch170_name, 14533750,FT817_MODE_FM, 0,ch170_qth},
{ch171_name, 14535000,FT817_MODE_FM, 0,ch171_qth},
{ch172_name, 14536250,FT817_MODE_FM, 0,ch172_qth},
{ch173_name, 14537500,FT817_MODE_FM, 0,ch173_qth},
{ch174_name, 14538750,FT817_MODE_FM, 0,ch174_qth},
{ch175_name, 14540000,FT817_MODE_FM, 0,ch175_qth},
{ch176_name, 14541250,FT817_MODE_FM, 0,ch176_qth},
{ch177_name, 14542500,FT817_MODE_FM, 0,ch177_qth},
{ch178_name, 14543750,FT817_MODE_FM, 0,ch178_qth},
{ch179_name, 14545000,FT817_MODE_FM, 0,ch179_qth},
{ch180_name, 14546250,FT817_MODE_FM, 0,ch180_qth},
{ch181_name, 14547500,FT817_MODE_FM, 0,ch181_qth},
{ch182_name, 14548750,FT817_MODE_FM, 0,ch182_qth},
{ch183_name, 14550000,FT817_MODE_FM, 0,ch183_qth},
{ch184_name, 14551250,FT817_MODE_FM, 0,ch184_qth},
{ch185_name, 14552500,FT817_MODE_FM, 0,ch185_qth},
{ch186_name, 14553750,FT817_MODE_FM, 0,ch186_qth},
{ch187_name, 14555000,FT817_MODE_FM, 0,ch187_qth},
{ch188_name, 14556250,FT817_MODE_FM, 0,ch188_qth},
{ch189_name, 14557500,FT817_MODE_FM, 0,ch189_qth},
{ch190_name, 14558750,FT817_MODE_FM, 0,ch190_qth},
{ch191_name, 14560000,FT817_MODE_FM, 0,ch191_qth},
{ch192_name, 14561250,FT817_MODE_FM, 0,ch192_qth},
{ch193_name, 14562500,FT817_MODE_FM, 0,ch193_qth},
{ch194_name, 14563750,FT817_MODE_FM, 0,ch194_qth},
{ch195_name, 14565000,FT817_MODE_FM, 0,ch195_qth},
{ch196_name, 14566250,FT817_MODE_FM, 0,ch196_qth},
{ch197_name, 14567500,FT817_MODE_FM, 0,ch197_qth},
{ch198_name, 14568750,FT817_MODE_FM, 0,ch198_qth},
{ch199_name, 14570000,FT817_MODE_FM, 0,ch199_qth},
{ch200_name, 14571250,FT817_MODE_FM, 0,ch200_qth},
{ch201_name, 14572500,FT817_MODE_FM, 0,ch201_qth},
{ch202_name, 14573750,FT817_MODE_FM, 0,ch202_qth},
{ch203_name, 14575000,FT817_MODE_FM, 0,ch203_qth},
{ch204_name, 14576250,FT817_MODE_FM, 0,ch204_qth},
{ch205_name, 14577500,FT817_MODE_FM, 0,ch205_qth},
{ch206_name, 14578750,FT817_MODE_FM, 0,ch206_qth},
{ch207_name, 14580000,FT817_MODE_FM, 0,ch207_qth},
{ch208_name, 14581250,FT817_MODE_FM, 0,ch208_qth},
{ch209_name, 14582500,FT817_MODE_FM, 0,ch209_qth},
{ch210_name, 14583750,FT817_MODE_FM, 0,ch210_qth},
{ch211_name, 14585000,FT817_MODE_FM, 0,ch211_qth},
{ch212_name, 14586250,FT817_MODE_FM, 0,ch212_qth},
{ch213_name, 14587500,FT817_MODE_FM, 0,ch213_qth},
{ch214_name, 14588750,FT817_MODE_FM, 0,ch214_qth},
{ch215_name, 14590000,FT817_MODE_FM, 0,ch215_qth},
{ch216_name, 14591250,FT817_MODE_FM, 0,ch216_qth},
{ch217_name, 14592500,FT817_MODE_FM, 0,ch217_qth},
{ch218_name, 14593750,FT817_MODE_FM, 0,ch218_qth},
{ch219_name, 14595000,FT817_MODE_FM, 0,ch219_qth},
{ch220_name, 14596250,FT817_MODE_FM, 0,ch220_qth},
{ch221_name, 14597500,FT817_MODE_FM, 0,ch221_qth},
{ch222_name, 14598750,FT817_MODE_FM, 0,ch222_qth},
{ch223_name, 43001250,FT817_MODE_FM, 0,ch223_qth},
{ch224_name, 43002500,FT817_MODE_FM, 0,ch224_qth},
{ch225_name, 43003750,FT817_MODE_FM, 0,ch225_qth},
{ch226_name, 43005000,FT817_MODE_FM, 0,ch226_qth},
{ch227_name, 43006250,FT817_MODE_FM, 0,ch227_qth},
{ch228_name, 43007500,FT817_MODE_FM, 0,ch228_qth},
{ch229_name, 43008750,FT817_MODE_FM, 0,ch229_qth},
{ch230_name, 43010000,FT817_MODE_FM, 0,ch230_qth},
{ch231_name, 43011250,FT817_MODE_FM, 0,ch231_qth},
{ch232_name, 43012500,FT817_MODE_FM, 0,ch232_qth},
{ch233_name, 43013750,FT817_MODE_FM, 0,ch233_qth},
{ch234_name, 43015000,FT817_MODE_FM, 0,ch234_qth},
{ch235_name, 43016250,FT817_MODE_FM, 0,ch235_qth},
{ch236_name, 43017500,FT817_MODE_FM, 0,ch236_qth},
{ch237_name, 43018750,FT817_MODE_FM, 0,ch237_qth},
{ch238_name, 43020000,FT817_MODE_FM, 0,ch238_qth},
{ch239_name, 43021250,FT817_MODE_FM, 0,ch239_qth},
{ch240_name, 43022500,FT817_MODE_FM, 0,ch240_qth},
{ch241_name, 43023750,FT817_MODE_FM, 0,ch241_qth},
{ch242_name, 43025000,FT817_MODE_FM, 0,ch242_qth},
{ch243_name, 43026250,FT817_MODE_FM, 0,ch243_qth},
{ch244_name, 43027500,FT817_MODE_FM, 0,ch244_qth},
{ch245_name, 43028750,FT817_MODE_FM, 0,ch245_qth},
{ch246_name, 43030000,FT817_MODE_FM, 0,ch246_qth},
{ch247_name, 43031250,FT817_MODE_FM, 0,ch247_qth},
{ch248_name, 43032500,FT817_MODE_FM, 0,ch248_qth},
{ch249_name, 43033750,FT817_MODE_FM, 0,ch249_qth},
{ch250_name, 43035000,FT817_MODE_FM, 0,ch250_qth},
{ch251_name, 43036250,FT817_MODE_FM, 0,ch251_qth},
{ch252_name, 43037500,FT817_MODE_FM, 0,ch252_qth},
{ch253_name, 43038750,FT817_MODE_FM, 0,ch253_qth},
{ch254_name, 43040000, NULL , 0,ch254_qth},
{ch255_name, 43041250, NULL , 0,ch255_qth},
{ch256_name, 43042500, NULL , 0,ch256_qth},
{ch257_name, 43043750, NULL , 0,ch257_qth},
{ch258_name, 43045000, NULL , 0,ch258_qth},
{ch259_name, 43046250, NULL , 0,ch259_qth},
{ch260_name, 43047500, NULL , 0,ch260_qth},
{ch261_name, 43048750, NULL , 0,ch261_qth},
{ch262_name, 43050000, NULL , 0,ch262_qth},
{ch263_name, 43051250, NULL , 0,ch263_qth},
{ch264_name, 43052500, NULL , 0,ch264_qth},
{ch265_name, 43053750, NULL , 0,ch265_qth},
{ch266_name, 43055000, NULL , 0,ch266_qth},
{ch267_name, 43056250, NULL , 0,ch267_qth},
{ch268_name, 43057500, NULL , 0,ch268_qth},
{ch269_name, 43058750, NULL , 0,ch269_qth},
{ch270_name, 43060000, NULL , 0,ch270_qth},
{ch271_name, 43061250, NULL , 0,ch271_qth},
{ch272_name, 43062500, NULL , 0,ch272_qth},
{ch273_name, 43063750, NULL , 0,ch273_qth},
{ch274_name, 43065000, NULL , 0,ch274_qth},
{ch275_name, 43066250, NULL , 0,ch275_qth},
{ch276_name, 43067500, NULL , 0,ch276_qth},
{ch277_name, 43068750, NULL , 0,ch277_qth},
{ch278_name, 43070000, NULL , 0,ch278_qth},
{ch279_name, 43071250, NULL , 0,ch279_qth},
{ch280_name, 43072500, NULL , 0,ch280_qth},
{ch281_name, 43073750, NULL , 0,ch281_qth},
{ch282_name, 43075000, NULL , 0,ch282_qth},
{ch283_name, 43076250, NULL , 0,ch283_qth},
{ch284_name, 43077500, NULL , 0,ch284_qth},
{ch285_name, 43078750, NULL , 0,ch285_qth},
{ch286_name, 43080000, NULL , 0,ch286_qth},
{ch287_name, 43081250, NULL , 0,ch287_qth},
{ch288_name, 43082500, NULL , 0,ch288_qth},
{ch289_name, 43083750, NULL , 0,ch289_qth},
{ch290_name, 43085000, NULL , 0,ch290_qth},
{ch291_name, 43086250, NULL , 0,ch291_qth},
{ch292_name, 43087500, NULL , 0,ch292_qth},
{ch293_name, 43088750, NULL , 0,ch293_qth},
{ch294_name, 43090000, NULL , 0,ch294_qth},
{ch295_name, 43091250, NULL , 0,ch295_qth},
{ch296_name, 43092500, NULL , 0,ch296_qth},
{ch297_name, 43093750, NULL , 0,ch297_qth},
{ch298_name, 43095000, NULL , 0,ch298_qth},
{ch299_name, 43096250, NULL , 0,ch299_qth},
{ch300_name, 43097500, NULL , 0,ch300_qth},
{ch301_name, 43098750, NULL , 0,ch301_qth},
{ch302_name, 43100000, NULL , 0,ch302_qth},
{ch303_name, 43101250, NULL , 0,ch303_qth},
{ch304_name, 43102500, NULL , 0,ch304_qth},
{ch305_name, 43103750, NULL , 0,ch305_qth},
{ch306_name, 43105000,FT817_MODE_FM, 0,ch306_qth},
{ch307_name, 43106250,FT817_MODE_FM, 0,ch307_qth},
{ch308_name, 43107500,FT817_MODE_FM, 0,ch308_qth},
{ch309_name, 43108750,FT817_MODE_FM, 0,ch309_qth},
{ch310_name, 43110000,FT817_MODE_FM, 0,ch310_qth},
{ch311_name, 43111250,FT817_MODE_FM, 0,ch311_qth},
{ch312_name, 43112500,FT817_MODE_FM, 0,ch312_qth},
{ch313_name, 43113750,FT817_MODE_FM, 0,ch313_qth},
{ch314_name, 43115000,FT817_MODE_FM, 0,ch314_qth},
{ch315_name, 43116250,FT817_MODE_FM, 0,ch315_qth},
{ch316_name, 43117500,FT817_MODE_FM, 0,ch316_qth},
{ch317_name, 43118750,FT817_MODE_FM, 0,ch317_qth},
{ch318_name, 43120000,FT817_MODE_FM, 0,ch318_qth},
{ch319_name, 43121250,FT817_MODE_FM, 0,ch319_qth},
{ch320_name, 43122500,FT817_MODE_FM, 0,ch320_qth},
{ch321_name, 43123750,FT817_MODE_FM, 0,ch321_qth},
{ch322_name, 43125000,FT817_MODE_FM, 0,ch322_qth},
{ch323_name, 43126250,FT817_MODE_FM, 0,ch323_qth},
{ch324_name, 43127500,FT817_MODE_FM, 0,ch324_qth},
{ch325_name, 43128750,FT817_MODE_FM, 0,ch325_qth},
{ch326_name, 43130000,FT817_MODE_FM, 0,ch326_qth},
{ch327_name, 43131250,FT817_MODE_FM, 0,ch327_qth},
{ch328_name, 43132500,FT817_MODE_FM, 0,ch328_qth},
{ch329_name, 43133750,FT817_MODE_FM, 0,ch329_qth},
{ch330_name, 43135000,FT817_MODE_FM, 0,ch330_qth},
{ch331_name, 43136250,FT817_MODE_FM, 0,ch331_qth},
{ch332_name, 43137500,FT817_MODE_FM, 0,ch332_qth},
{ch333_name, 43138750,FT817_MODE_FM, 0,ch333_qth},
{ch334_name, 43140000,FT817_MODE_FM, 0,ch334_qth},
{ch335_name, 43141250,FT817_MODE_FM, 0,ch335_qth},
{ch336_name, 43142500,FT817_MODE_FM, 0,ch336_qth},
{ch337_name, 43143750,FT817_MODE_FM, 0,ch337_qth},
{ch338_name, 43145000,FT817_MODE_FM, 0,ch338_qth},
{ch339_name, 43146250,FT817_MODE_FM, 0,ch339_qth},
{ch340_name, 43147500,FT817_MODE_FM, 0,ch340_qth},
{ch341_name, 43148750,FT817_MODE_FM, 0,ch341_qth},
{ch342_name, 43150000,FT817_MODE_FM, 0,ch342_qth},
{ch343_name, 43151250,FT817_MODE_FM, 0,ch343_qth},
{ch344_name, 43152500,FT817_MODE_FM, 0,ch344_qth},
{ch345_name, 43153750,FT817_MODE_FM, 0,ch345_qth},
{ch346_name, 43155000,FT817_MODE_FM, 0,ch346_qth},
{ch347_name, 43156250,FT817_MODE_FM, 0,ch347_qth},
{ch348_name, 43157500,FT817_MODE_FM, 0,ch348_qth},
{ch349_name, 43158750,FT817_MODE_FM, 0,ch349_qth},
{ch350_name, 43160000,FT817_MODE_FM, 0,ch350_qth},
{ch351_name, 43161250,FT817_MODE_FM, 0,ch351_qth},
{ch352_name, 43162500,FT817_MODE_FM, 0,ch352_qth},
{ch353_name, 43163750,FT817_MODE_FM, 0,ch353_qth},
{ch354_name, 43165000,FT817_MODE_FM, 0,ch354_qth},
{ch355_name, 43166250,FT817_MODE_FM, 0,ch355_qth},
{ch356_name, 43167500,FT817_MODE_FM, 0,ch356_qth},
{ch357_name, 43168750,FT817_MODE_FM, 0,ch357_qth},
{ch358_name, 43170000,FT817_MODE_FM, 0,ch358_qth},
{ch359_name, 43171250,FT817_MODE_FM, 0,ch359_qth},
{ch360_name, 43172500,FT817_MODE_FM, 0,ch360_qth},
{ch361_name, 43173750,FT817_MODE_FM, 0,ch361_qth},
{ch362_name, 43175000,FT817_MODE_FM, 0,ch362_qth},
{ch363_name, 43176250,FT817_MODE_FM, 0,ch363_qth},
{ch364_name, 43177500,FT817_MODE_FM, 0,ch364_qth},
{ch365_name, 43178750,FT817_MODE_FM, 0,ch365_qth},
{ch366_name, 43180000,FT817_MODE_FM, 0,ch366_qth},
{ch367_name, 43181250,FT817_MODE_FM, 0,ch367_qth},
{ch368_name, 43182500,FT817_MODE_FM, 0,ch368_qth},
{ch369_name, 43183750, NULL , 0,ch369_qth},
{ch370_name, 43185000, NULL , 0,ch370_qth},
{ch371_name, 43186250, NULL , 0,ch371_qth},
{ch372_name, 43187500, NULL , 0,ch372_qth},
{ch373_name, 43188750, NULL , 0,ch373_qth},
{ch374_name, 43190000, NULL , 0,ch374_qth},
{ch375_name, 43191250, NULL , 0,ch375_qth},
{ch376_name, 43192500, NULL , 0,ch376_qth},
{ch377_name, 43193750, NULL , 0,ch377_qth},
{ch378_name, 43195000, NULL , 0,ch378_qth},
{ch379_name, 43196250, NULL , 0,ch379_qth},
{ch380_name, 43197500, NULL , 0,ch380_qth},
{ch381_name, 43198750, NULL , 0,ch381_qth},
{ch382_name, 43200000,FT817_MODE_CW_NARROW, 0,ch382_qth},
{ch383_name, 43201250,FT817_MODE_CW_NARROW, 0,ch383_qth},
{ch384_name, 43202500,FT817_MODE_CW_NARROW, 0,ch384_qth},
{ch385_name, 43203750,FT817_MODE_CW_NARROW, 0,ch385_qth},
{ch386_name, 43205000,FT817_MODE_CW_NARROW, 0,ch386_qth},
{ch387_name, 43206250,FT817_MODE_CW_NARROW, 0,ch387_qth},
{ch388_name, 43207500,FT817_MODE_CW_NARROW, 0,ch388_qth},
{ch389_name, 43208750,FT817_MODE_CW_NARROW, 0,ch389_qth},
{ch390_name, 43210000, NULL , 0,ch390_qth},
{ch391_name, 43211250, NULL , 0,ch391_qth},
{ch392_name, 43212500, NULL , 0,ch392_qth},
{ch393_name, 43213750, NULL , 0,ch393_qth},
{ch394_name, 43215000, NULL , 0,ch394_qth},
{ch395_name, 43216250, NULL , 0,ch395_qth},
{ch396_name, 43217500, NULL , 0,ch396_qth},
{ch397_name, 43218750, NULL , 0,ch397_qth},
{ch398_name, 43220000, NULL , 0,ch398_qth},
{ch399_name, 43221250, NULL , 0,ch399_qth},
{ch400_name, 43222500, NULL , 0,ch400_qth},
{ch401_name, 43223750, NULL , 0,ch401_qth},
{ch402_name, 43225000, NULL , 0,ch402_qth},
{ch403_name, 43226250, NULL , 0,ch403_qth},
{ch404_name, 43227500, NULL , 0,ch404_qth},
{ch405_name, 43228750, NULL , 0,ch405_qth},
{ch406_name, 43230000, NULL , 0,ch406_qth},
{ch407_name, 43231250, NULL , 0,ch407_qth},
{ch408_name, 43232500, NULL , 0,ch408_qth},
{ch409_name, 43233750, NULL , 0,ch409_qth},
{ch410_name, 43235000, NULL , 0,ch410_qth},
{ch411_name, 43236250, NULL , 0,ch411_qth},
{ch412_name, 43237500, NULL , 0,ch412_qth},
{ch413_name, 43238750, NULL , 0,ch413_qth},
{ch414_name, 43240000, NULL , 0,ch414_qth},
{ch415_name, 43241250, NULL , 0,ch415_qth},
{ch416_name, 43242500, NULL , 0,ch416_qth},
{ch417_name, 43243750, NULL , 0,ch417_qth},
{ch418_name, 43245000, NULL , 0,ch418_qth},
{ch419_name, 43246250, NULL , 0,ch419_qth},
{ch420_name, 43247500, NULL , 0,ch420_qth},
{ch421_name, 43248750, NULL , 0,ch421_qth},
{ch422_name, 43250000, NULL , 0,ch422_qth},
{ch423_name, 43251250, NULL , 0,ch423_qth},
{ch424_name, 43252500, NULL , 0,ch424_qth},
{ch425_name, 43253750, NULL , 0,ch425_qth},
{ch426_name, 43255000, NULL , 0,ch426_qth},
{ch427_name, 43256250, NULL , 0,ch427_qth},
{ch428_name, 43257500, NULL , 0,ch428_qth},
{ch429_name, 43258750, NULL , 0,ch429_qth},
{ch430_name, 43260000, NULL , 0,ch430_qth},
{ch431_name, 43261250, NULL , 0,ch431_qth},
{ch432_name, 43262500, NULL , 0,ch432_qth},
{ch433_name, 43263750, NULL , 0,ch433_qth},
{ch434_name, 43265000, NULL , 0,ch434_qth},
{ch435_name, 43266250, NULL , 0,ch435_qth},
{ch436_name, 43267500, NULL , 0,ch436_qth},
{ch437_name, 43268750, NULL , 0,ch437_qth},
{ch438_name, 43270000, NULL , 0,ch438_qth},
{ch439_name, 43271250, NULL , 0,ch439_qth},
{ch440_name, 43272500, NULL , 0,ch440_qth},
{ch441_name, 43273750, NULL , 0,ch441_qth},
{ch442_name, 43275000, NULL , 0,ch442_qth},
{ch443_name, 43276250, NULL , 0,ch443_qth},
{ch444_name, 43277500, NULL , 0,ch444_qth},
{ch445_name, 43278750, NULL , 0,ch445_qth},
{ch446_name, 43280000,FT817_MODE_FM, 0,ch446_qth},
{ch447_name, 43281250,FT817_MODE_FM, 0,ch447_qth},
{ch448_name, 43282500,FT817_MODE_FM, 0,ch448_qth},
{ch449_name, 43283750,FT817_MODE_FM, 0,ch449_qth},
{ch450_name, 43285000,FT817_MODE_FM, 0,ch450_qth},
{ch451_name, 43286250,FT817_MODE_FM, 0,ch451_qth},
{ch452_name, 43287500,FT817_MODE_FM, 0,ch452_qth},
{ch453_name, 43288750,FT817_MODE_FM, 0,ch453_qth},
{ch454_name, 43290000,FT817_MODE_FM, 0,ch454_qth},
{ch455_name, 43291250,FT817_MODE_FM, 0,ch455_qth},
{ch456_name, 43292500,FT817_MODE_FM, 0,ch456_qth},
{ch457_name, 43293750,FT817_MODE_FM, 0,ch457_qth},
{ch458_name, 43295000,FT817_MODE_FM, 0,ch458_qth},
{ch459_name, 43296250,FT817_MODE_FM, 0,ch459_qth},
{ch460_name, 43297500,FT817_MODE_FM, 0,ch460_qth},
{ch461_name, 43298750,FT817_MODE_FM, 0,ch461_qth},
{ch462_name, 43300000,FT817_MODE_FM, 0,ch462_qth},
{ch463_name, 43301250,FT817_MODE_FM, 0,ch463_qth},
{ch464_name, 43302500,FT817_MODE_FM, 0,ch464_qth},
{ch465_name, 43303750,FT817_MODE_FM, 0,ch465_qth},
{ch466_name, 43305000,FT817_MODE_FM, 0,ch466_qth},
{ch467_name, 43306250,FT817_MODE_FM, 0,ch467_qth},
{ch468_name, 43307500,FT817_MODE_FM, 0,ch468_qth},
{ch469_name, 43308750,FT817_MODE_FM, 0,ch469_qth},
{ch470_name, 43310000,FT817_MODE_FM, 0,ch470_qth},
{ch471_name, 43311250,FT817_MODE_FM, 0,ch471_qth},
{ch472_name, 43312500,FT817_MODE_FM, 0,ch472_qth},
{ch473_name, 43313750,FT817_MODE_FM, 0,ch473_qth},
{ch474_name, 43315000,FT817_MODE_FM, 0,ch474_qth},
{ch475_name, 43316250,FT817_MODE_FM, 0,ch475_qth},
{ch476_name, 43317500,FT817_MODE_FM, 0,ch476_qth},
{ch477_name, 43318750,FT817_MODE_FM, 0,ch477_qth},
{ch478_name, 43320000,FT817_MODE_FM, 0,ch478_qth},
{ch479_name, 43321250,FT817_MODE_FM, 0,ch479_qth},
{ch480_name, 43322500,FT817_MODE_FM, 0,ch480_qth},
{ch481_name, 43323750,FT817_MODE_FM, 0,ch481_qth},
{ch482_name, 43325000,FT817_MODE_FM, 0,ch482_qth},
{ch483_name, 43326250,FT817_MODE_FM, 0,ch483_qth},
{ch484_name, 43327500,FT817_MODE_FM, 0,ch484_qth},
{ch485_name, 43328750,FT817_MODE_FM, 0,ch485_qth},
{ch486_name, 43330000,FT817_MODE_FM, 0,ch486_qth},
{ch487_name, 43331250,FT817_MODE_FM, 0,ch487_qth},
{ch488_name, 43332500,FT817_MODE_FM, 0,ch488_qth},
{ch489_name, 43333750,FT817_MODE_FM, 0,ch489_qth},
{ch490_name, 43335000,FT817_MODE_FM, 0,ch490_qth},
{ch491_name, 43336250,FT817_MODE_FM, 0,ch491_qth},
{ch492_name, 43337500,FT817_MODE_FM, 0,ch492_qth},
{ch493_name, 43338750,FT817_MODE_FM, 0,ch493_qth},
{ch494_name, 43340000, NULL , 0,ch494_qth},
{ch495_name, 43341250,FT817_MODE_FM, 0,ch495_qth},
{ch496_name, 43342500,FT817_MODE_FM, 0,ch496_qth},
{ch497_name, 43343750,FT817_MODE_FM, 0,ch497_qth},
{ch498_name, 43345000,FT817_MODE_FM, 0,ch498_qth},
{ch499_name, 43346250,FT817_MODE_FM, 0,ch499_qth},
{ch500_name, 43347500,FT817_MODE_FM, 0,ch500_qth},
{ch501_name, 43348750,FT817_MODE_FM, 0,ch501_qth},
{ch502_name, 43350000,FT817_MODE_FM, 0,ch502_qth},
{ch503_name, 43351250,FT817_MODE_FM, 0,ch503_qth},
{ch504_name, 43352500,FT817_MODE_FM, 0,ch504_qth},
{ch505_name, 43353750,FT817_MODE_FM, 0,ch505_qth},
{ch506_name, 43355000,FT817_MODE_FM, 0,ch506_qth},
{ch507_name, 43356250,FT817_MODE_FM, 0,ch507_qth},
{ch508_name, 43357500,FT817_MODE_FM, 0,ch508_qth},
{ch509_name, 43358750,FT817_MODE_FM, 0,ch509_qth},
{ch510_name, 43360000, NULL , 0,ch510_qth},
{ch511_name, 43361250,FT817_MODE_FM, 0,ch511_qth},
{ch512_name, 43362500,FT817_MODE_FM, 0,ch512_qth},
{ch513_name, 43363750,FT817_MODE_FM, 0,ch513_qth},
{ch514_name, 43365000,FT817_MODE_FM, 0,ch514_qth},
{ch515_name, 43366250,FT817_MODE_FM, 0,ch515_qth},
{ch516_name, 43367500,FT817_MODE_FM, 0,ch516_qth},
{ch517_name, 43368750,FT817_MODE_FM, 0,ch517_qth},
{ch518_name, 43370000, NULL , 0,ch518_qth},
{ch519_name, 43371250,FT817_MODE_FM, 0,ch519_qth},
{ch520_name, 43372500,FT817_MODE_FM, 0,ch520_qth},
{ch521_name, 43373750,FT817_MODE_FM, 0,ch521_qth},
{ch522_name, 43375000,FT817_MODE_FM, 0,ch522_qth},
{ch523_name, 43376250,FT817_MODE_FM, 0,ch523_qth},
{ch524_name, 43377500,FT817_MODE_FM, 0,ch524_qth},
{ch525_name, 43378750,FT817_MODE_FM, 0,ch525_qth},
{ch526_name, 43380000,FT817_MODE_FM, 0,ch526_qth},
{ch527_name, 43381250,FT817_MODE_FM, 0,ch527_qth},
{ch528_name, 43382500,FT817_MODE_FM, 0,ch528_qth},
{ch529_name, 43383750,FT817_MODE_FM, 0,ch529_qth},
{ch530_name, 43385000,FT817_MODE_FM, 0,ch530_qth},
{ch531_name, 43386250,FT817_MODE_FM, 0,ch531_qth},
{ch532_name, 43387500,FT817_MODE_FM, 0,ch532_qth},
{ch533_name, 43388750,FT817_MODE_FM, 0,ch533_qth},
{ch534_name, 43390000,FT817_MODE_FM, 0,ch534_qth},
{ch535_name, 43391250,FT817_MODE_FM, 0,ch535_qth},
{ch536_name, 43392500,FT817_MODE_FM, 0,ch536_qth},
{ch537_name, 43393750,FT817_MODE_FM, 0,ch537_qth},
{ch538_name, 43395000,FT817_MODE_FM, 0,ch538_qth},
{ch539_name, 43396250,FT817_MODE_FM, 0,ch539_qth},
{ch540_name, 43397500,FT817_MODE_FM, 0,ch540_qth},
{ch541_name, 43398750,FT817_MODE_FM, 0,ch541_qth},
{ch542_name, 43400000, NULL , 0,ch542_qth},
{ch543_name, 43401250, NULL , 0,ch543_qth},
{ch544_name, 43402500, NULL , 0,ch544_qth},
{ch545_name, 43403750, NULL , 0,ch545_qth},
{ch546_name, 43405000, NULL , 0,ch546_qth},
{ch547_name, 43406250, NULL , 0,ch547_qth},
{ch548_name, 43407500, NULL , 0,ch548_qth},
{ch549_name, 43408750, NULL , 0,ch549_qth},
{ch550_name, 43410000, NULL , 0,ch550_qth},
{ch551_name, 43411250, NULL , 0,ch551_qth},
{ch552_name, 43412500, NULL , 0,ch552_qth},
{ch553_name, 43413750, NULL , 0,ch553_qth},
{ch554_name, 43415000, NULL , 0,ch554_qth},
{ch555_name, 43416250, NULL , 0,ch555_qth},
{ch556_name, 43417500, NULL , 0,ch556_qth},
{ch557_name, 43418750, NULL , 0,ch557_qth},
{ch558_name, 43420000, NULL , 0,ch558_qth},
{ch559_name, 43421250, NULL , 0,ch559_qth},
{ch560_name, 43422500, NULL , 0,ch560_qth},
{ch561_name, 43423750, NULL , 0,ch561_qth},
{ch562_name, 43425000, NULL , 0,ch562_qth},
{ch563_name, 43426250, NULL , 0,ch563_qth},
{ch564_name, 43427500, NULL , 0,ch564_qth},
{ch565_name, 43428750, NULL , 0,ch565_qth},
{ch566_name, 43430000, NULL , 0,ch566_qth},
{ch567_name, 43431250, NULL , 0,ch567_qth},
{ch568_name, 43432500, NULL , 0,ch568_qth},
{ch569_name, 43433750, NULL , 0,ch569_qth},
{ch570_name, 43435000, NULL , 0,ch570_qth},
{ch571_name, 43436250, NULL , 0,ch571_qth},
{ch572_name, 43437500, NULL , 0,ch572_qth},
{ch573_name, 43438750, NULL , 0,ch573_qth},
{ch574_name, 43440000, NULL , 0,ch574_qth},
{ch575_name, 43441250, NULL , 0,ch575_qth},
{ch576_name, 43442500, NULL , 0,ch576_qth},
{ch577_name, 43443750, NULL , 0,ch577_qth},
{ch578_name, 43445000, NULL , 0,ch578_qth},
{ch579_name, 43446250, NULL , 0,ch579_qth},
{ch580_name, 43447500, NULL , 0,ch580_qth},
{ch581_name, 43448750, NULL , 0,ch581_qth},
{ch582_name, 43450000, NULL , 0,ch582_qth},
{ch583_name, 43451250, NULL , 0,ch583_qth},
{ch584_name, 43452500, NULL , 0,ch584_qth},
{ch585_name, 43453750, NULL , 0,ch585_qth},
{ch586_name, 43455000, NULL , 0,ch586_qth},
{ch587_name, 43456250, NULL , 0,ch587_qth},
{ch588_name, 43457500, NULL , 0,ch588_qth},
{ch589_name, 43458750, NULL , 0,ch589_qth},
{ch590_name, 43460000, NULL , 0,ch590_qth},
{ch591_name, 43461250, NULL , 0,ch591_qth},
{ch592_name, 43462500, NULL , 0,ch592_qth},
{ch593_name, 43463750, NULL , 0,ch593_qth},
{ch594_name, 43465000, NULL , 0,ch594_qth},
{ch595_name, 43466250, NULL , 0,ch595_qth},
{ch596_name, 43467500, NULL , 0,ch596_qth},
{ch597_name, 43468750, NULL , 0,ch597_qth},
{ch598_name, 43470000, NULL , 0,ch598_qth},
{ch599_name, 43471250, NULL , 0,ch599_qth},
{ch600_name, 43472500, NULL , 0,ch600_qth},
{ch601_name, 43473750, NULL , 0,ch601_qth},
{ch602_name, 43475000, NULL , 0,ch602_qth},
{ch603_name, 43476250, NULL , 0,ch603_qth},
{ch604_name, 43477500, NULL , 0,ch604_qth},
{ch605_name, 43478750, NULL , 0,ch605_qth},
{ch606_name, 43480000, NULL , 0,ch606_qth},
{ch607_name, 43481250, NULL , 0,ch607_qth},
{ch608_name, 43482500, NULL , 0,ch608_qth},
{ch609_name, 43483750, NULL , 0,ch609_qth},
{ch610_name, 43485000, NULL , 0,ch610_qth},
{ch611_name, 43486250, NULL , 0,ch611_qth},
{ch612_name, 43487500, NULL , 0,ch612_qth},
{ch613_name, 43488750, NULL , 0,ch613_qth},
{ch614_name, 43490000, NULL , 0,ch614_qth},
{ch615_name, 43491250, NULL , 0,ch615_qth},
{ch616_name, 43492500, NULL , 0,ch616_qth},
{ch617_name, 43493750, NULL , 0,ch617_qth},
{ch618_name, 43495000, NULL , 0,ch618_qth},
{ch619_name, 43496250, NULL , 0,ch619_qth},
{ch620_name, 43497500, NULL , 0,ch620_qth},
{ch621_name, 43498750, NULL , 0,ch621_qth},
{ch622_name, 43500000, NULL , 0,ch622_qth},
{ch623_name, 43501250, NULL , 0,ch623_qth},
{ch624_name, 43502500, NULL , 0,ch624_qth},
{ch625_name, 43503750, NULL , 0,ch625_qth},
{ch626_name, 43505000, NULL , 0,ch626_qth},
{ch627_name, 43506250, NULL , 0,ch627_qth},
{ch628_name, 43507500, NULL , 0,ch628_qth},
{ch629_name, 43508750, NULL , 0,ch629_qth},
{ch630_name, 43510000, NULL , 0,ch630_qth},
{ch631_name, 43511250, NULL , 0,ch631_qth},
{ch632_name, 43512500, NULL , 0,ch632_qth},
{ch633_name, 43513750, NULL , 0,ch633_qth},
{ch634_name, 43515000, NULL , 0,ch634_qth},
{ch635_name, 43516250, NULL , 0,ch635_qth},
{ch636_name, 43517500, NULL , 0,ch636_qth},
{ch637_name, 43518750, NULL , 0,ch637_qth},
{ch638_name, 43520000, NULL , 0,ch638_qth},
{ch639_name, 43521250, NULL , 0,ch639_qth},
{ch640_name, 43522500, NULL , 0,ch640_qth},
{ch641_name, 43523750, NULL , 0,ch641_qth},
{ch642_name, 43525000, NULL , 0,ch642_qth},
{ch643_name, 43526250, NULL , 0,ch643_qth},
{ch644_name, 43527500, NULL , 0,ch644_qth},
{ch645_name, 43528750, NULL , 0,ch645_qth},
{ch646_name, 43530000, NULL , 0,ch646_qth},
{ch647_name, 43531250, NULL , 0,ch647_qth},
{ch648_name, 43532500, NULL , 0,ch648_qth},
{ch649_name, 43533750, NULL , 0,ch649_qth},
{ch650_name, 43535000, NULL , 0,ch650_qth},
{ch651_name, 43536250, NULL , 0,ch651_qth},
{ch652_name, 43537500, NULL , 0,ch652_qth},
{ch653_name, 43538750, NULL , 0,ch653_qth},
{ch654_name, 43540000, NULL , 0,ch654_qth},
{ch655_name, 43541250, NULL , 0,ch655_qth},
{ch656_name, 43542500, NULL , 0,ch656_qth},
{ch657_name, 43543750, NULL , 0,ch657_qth},
{ch658_name, 43545000, NULL , 0,ch658_qth},
{ch659_name, 43546250, NULL , 0,ch659_qth},
{ch660_name, 43547500, NULL , 0,ch660_qth},
{ch661_name, 43548750, NULL , 0,ch661_qth},
{ch662_name, 43550000, NULL , 0,ch662_qth},
{ch663_name, 43551250, NULL , 0,ch663_qth},
{ch664_name, 43552500, NULL , 0,ch664_qth},
{ch665_name, 43553750, NULL , 0,ch665_qth},
{ch666_name, 43555000, NULL , 0,ch666_qth},
{ch667_name, 43556250, NULL , 0,ch667_qth},
{ch668_name, 43557500, NULL , 0,ch668_qth},
{ch669_name, 43558750, NULL , 0,ch669_qth},
{ch670_name, 43560000, NULL , 0,ch670_qth},
{ch671_name, 43561250, NULL , 0,ch671_qth},
{ch672_name, 43562500, NULL , 0,ch672_qth},
{ch673_name, 43563750, NULL , 0,ch673_qth},
{ch674_name, 43565000, NULL , 0,ch674_qth},
{ch675_name, 43566250, NULL , 0,ch675_qth},
{ch676_name, 43567500, NULL , 0,ch676_qth},
{ch677_name, 43568750, NULL , 0,ch677_qth},
{ch678_name, 43570000, NULL , 0,ch678_qth},
{ch679_name, 43571250, NULL , 0,ch679_qth},
{ch680_name, 43572500, NULL , 0,ch680_qth},
{ch681_name, 43573750, NULL , 0,ch681_qth},
{ch682_name, 43575000, NULL , 0,ch682_qth},
{ch683_name, 43576250, NULL , 0,ch683_qth},
{ch684_name, 43577500, NULL , 0,ch684_qth},
{ch685_name, 43578750, NULL , 0,ch685_qth},
{ch686_name, 43580000, NULL , 0,ch686_qth},
{ch687_name, 43581250, NULL , 0,ch687_qth},
{ch688_name, 43582500, NULL , 0,ch688_qth},
{ch689_name, 43583750, NULL , 0,ch689_qth},
{ch690_name, 43585000, NULL , 0,ch690_qth},
{ch691_name, 43586250, NULL , 0,ch691_qth},
{ch692_name, 43587500, NULL , 0,ch692_qth},
{ch693_name, 43588750, NULL , 0,ch693_qth},
{ch694_name, 43590000, NULL , 0,ch694_qth},
{ch695_name, 43591250, NULL , 0,ch695_qth},
{ch696_name, 43592500, NULL , 0,ch696_qth},
{ch697_name, 43593750, NULL , 0,ch697_qth},
{ch698_name, 43595000, NULL , 0,ch698_qth},
{ch699_name, 43596250, NULL , 0,ch699_qth},
{ch700_name, 43597500, NULL , 0,ch700_qth},
{ch701_name, 43598750, NULL , 0,ch701_qth},
{ch702_name, 43600000, NULL , 0,ch702_qth},
{ch703_name, 43601250, NULL , 0,ch703_qth},
{ch704_name, 43602500, NULL , 0,ch704_qth},
{ch705_name, 43603750, NULL , 0,ch705_qth},
{ch706_name, 43605000, NULL , 0,ch706_qth},
{ch707_name, 43606250, NULL , 0,ch707_qth},
{ch708_name, 43607500, NULL , 0,ch708_qth},
{ch709_name, 43608750, NULL , 0,ch709_qth},
{ch710_name, 43610000, NULL , 0,ch710_qth},
{ch711_name, 43611250, NULL , 0,ch711_qth},
{ch712_name, 43612500, NULL , 0,ch712_qth},
{ch713_name, 43613750, NULL , 0,ch713_qth},
{ch714_name, 43615000, NULL , 0,ch714_qth},
{ch715_name, 43616250, NULL , 0,ch715_qth},
{ch716_name, 43617500, NULL , 0,ch716_qth},
{ch717_name, 43618750, NULL , 0,ch717_qth},
{ch718_name, 43620000, NULL , 0,ch718_qth},
{ch719_name, 43621250, NULL , 0,ch719_qth},
{ch720_name, 43622500, NULL , 0,ch720_qth},
{ch721_name, 43623750, NULL , 0,ch721_qth},
{ch722_name, 43625000, NULL , 0,ch722_qth},
{ch723_name, 43626250, NULL , 0,ch723_qth},
{ch724_name, 43627500, NULL , 0,ch724_qth},
{ch725_name, 43628750, NULL , 0,ch725_qth},
{ch726_name, 43630000, NULL , 0,ch726_qth},
{ch727_name, 43631250, NULL , 0,ch727_qth},
{ch728_name, 43632500, NULL , 0,ch728_qth},
{ch729_name, 43633750, NULL , 0,ch729_qth},
{ch730_name, 43635000, NULL , 0,ch730_qth},
{ch731_name, 43636250, NULL , 0,ch731_qth},
{ch732_name, 43637500, NULL , 0,ch732_qth},
{ch733_name, 43638750, NULL , 0,ch733_qth},
{ch734_name, 43640000, NULL , 0,ch734_qth},
{ch735_name, 43641250, NULL , 0,ch735_qth},
{ch736_name, 43642500, NULL , 0,ch736_qth},
{ch737_name, 43643750, NULL , 0,ch737_qth},
{ch738_name, 43645000, NULL , 0,ch738_qth},
{ch739_name, 43646250, NULL , 0,ch739_qth},
{ch740_name, 43647500, NULL , 0,ch740_qth},
{ch741_name, 43648750, NULL , 0,ch741_qth},
{ch742_name, 43650000, NULL , 0,ch742_qth},
{ch743_name, 43651250, NULL , 0,ch743_qth},
{ch744_name, 43652500, NULL , 0,ch744_qth},
{ch745_name, 43653750, NULL , 0,ch745_qth},
{ch746_name, 43655000, NULL , 0,ch746_qth},
{ch747_name, 43656250, NULL , 0,ch747_qth},
{ch748_name, 43657500, NULL , 0,ch748_qth},
{ch749_name, 43658750, NULL , 0,ch749_qth},
{ch750_name, 43660000, NULL , 0,ch750_qth},
{ch751_name, 43661250, NULL , 0,ch751_qth},
{ch752_name, 43662500, NULL , 0,ch752_qth},
{ch753_name, 43663750, NULL , 0,ch753_qth},
{ch754_name, 43665000, NULL , 0,ch754_qth},
{ch755_name, 43666250, NULL , 0,ch755_qth},
{ch756_name, 43667500, NULL , 0,ch756_qth},
{ch757_name, 43668750, NULL , 0,ch757_qth},
{ch758_name, 43670000, NULL , 0,ch758_qth},
{ch759_name, 43671250, NULL , 0,ch759_qth},
{ch760_name, 43672500, NULL , 0,ch760_qth},
{ch761_name, 43673750, NULL , 0,ch761_qth},
{ch762_name, 43675000, NULL , 0,ch762_qth},
{ch763_name, 43676250, NULL , 0,ch763_qth},
{ch764_name, 43677500, NULL , 0,ch764_qth},
{ch765_name, 43678750, NULL , 0,ch765_qth},
{ch766_name, 43680000, NULL , 0,ch766_qth},
{ch767_name, 43681250, NULL , 0,ch767_qth},
{ch768_name, 43682500, NULL , 0,ch768_qth},
{ch769_name, 43683750, NULL , 0,ch769_qth},
{ch770_name, 43685000, NULL , 0,ch770_qth},
{ch771_name, 43686250, NULL , 0,ch771_qth},
{ch772_name, 43687500, NULL , 0,ch772_qth},
{ch773_name, 43688750, NULL , 0,ch773_qth},
{ch774_name, 43690000, NULL , 0,ch774_qth},
{ch775_name, 43691250, NULL , 0,ch775_qth},
{ch776_name, 43692500, NULL , 0,ch776_qth},
{ch777_name, 43693750, NULL , 0,ch777_qth},
{ch778_name, 43695000, NULL , 0,ch778_qth},
{ch779_name, 43696250, NULL , 0,ch779_qth},
{ch780_name, 43697500, NULL , 0,ch780_qth},
{ch781_name, 43698750, NULL , 0,ch781_qth},
{ch782_name, 43700000, NULL , 0,ch782_qth},
{ch783_name, 43701250, NULL , 0,ch783_qth},
{ch784_name, 43702500, NULL , 0,ch784_qth},
{ch785_name, 43703750, NULL , 0,ch785_qth},
{ch786_name, 43705000, NULL , 0,ch786_qth},
{ch787_name, 43706250, NULL , 0,ch787_qth},
{ch788_name, 43707500, NULL , 0,ch788_qth},
{ch789_name, 43708750, NULL , 0,ch789_qth},
{ch790_name, 43710000, NULL , 0,ch790_qth},
{ch791_name, 43711250, NULL , 0,ch791_qth},
{ch792_name, 43712500, NULL , 0,ch792_qth},
{ch793_name, 43713750, NULL , 0,ch793_qth},
{ch794_name, 43715000, NULL , 0,ch794_qth},
{ch795_name, 43716250, NULL , 0,ch795_qth},
{ch796_name, 43717500, NULL , 0,ch796_qth},
{ch797_name, 43718750, NULL , 0,ch797_qth},
{ch798_name, 43720000, NULL , 0,ch798_qth},
{ch799_name, 43721250, NULL , 0,ch799_qth},
{ch800_name, 43722500, NULL , 0,ch800_qth},
{ch801_name, 43723750, NULL , 0,ch801_qth},
{ch802_name, 43725000, NULL , 0,ch802_qth},
{ch803_name, 43726250, NULL , 0,ch803_qth},
{ch804_name, 43727500, NULL , 0,ch804_qth},
{ch805_name, 43728750, NULL , 0,ch805_qth},
{ch806_name, 43730000, NULL , 0,ch806_qth},
{ch807_name, 43731250, NULL , 0,ch807_qth},
{ch808_name, 43732500, NULL , 0,ch808_qth},
{ch809_name, 43733750, NULL , 0,ch809_qth},
{ch810_name, 43735000, NULL , 0,ch810_qth},
{ch811_name, 43736250, NULL , 0,ch811_qth},
{ch812_name, 43737500, NULL , 0,ch812_qth},
{ch813_name, 43738750, NULL , 0,ch813_qth},
{ch814_name, 43740000, NULL , 0,ch814_qth},
{ch815_name, 43741250, NULL , 0,ch815_qth},
{ch816_name, 43742500, NULL , 0,ch816_qth},
{ch817_name, 43743750, NULL , 0,ch817_qth},
{ch818_name, 43745000, NULL , 0,ch818_qth},
{ch819_name, 43746250, NULL , 0,ch819_qth},
{ch820_name, 43747500, NULL , 0,ch820_qth},
{ch821_name, 43748750, NULL , 0,ch821_qth},
{ch822_name, 43750000, NULL , 0,ch822_qth},
{ch823_name, 43751250, NULL , 0,ch823_qth},
{ch824_name, 43752500, NULL , 0,ch824_qth},
{ch825_name, 43753750, NULL , 0,ch825_qth},
{ch826_name, 43755000, NULL , 0,ch826_qth},
{ch827_name, 43756250, NULL , 0,ch827_qth},
{ch828_name, 43757500, NULL , 0,ch828_qth},
{ch829_name, 43758750, NULL , 0,ch829_qth},
{ch830_name, 43760000, NULL , 0,ch830_qth},
{ch831_name, 43761250, NULL , 0,ch831_qth},
{ch832_name, 43762500, NULL , 0,ch832_qth},
{ch833_name, 43763750, NULL , 0,ch833_qth},
{ch834_name, 43765000, NULL , 0,ch834_qth},
{ch835_name, 43766250, NULL , 0,ch835_qth},
{ch836_name, 43767500, NULL , 0,ch836_qth},
{ch837_name, 43768750, NULL , 0,ch837_qth},
{ch838_name, 43770000, NULL , 0,ch838_qth},
{ch839_name, 43771250, NULL , 0,ch839_qth},
{ch840_name, 43772500, NULL , 0,ch840_qth},
{ch841_name, 43773750, NULL , 0,ch841_qth},
{ch842_name, 43775000, NULL , 0,ch842_qth},
{ch843_name, 43776250, NULL , 0,ch843_qth},
{ch844_name, 43777500, NULL , 0,ch844_qth},
{ch845_name, 43778750, NULL , 0,ch845_qth},
{ch846_name, 43780000, NULL , 0,ch846_qth},
{ch847_name, 43781250, NULL , 0,ch847_qth},
{ch848_name, 43782500, NULL , 0,ch848_qth},
{ch849_name, 43783750, NULL , 0,ch849_qth},
{ch850_name, 43785000, NULL , 0,ch850_qth},
{ch851_name, 43786250, NULL , 0,ch851_qth},
{ch852_name, 43787500, NULL , 0,ch852_qth},
{ch853_name, 43788750, NULL , 0,ch853_qth},
{ch854_name, 43790000, NULL , 0,ch854_qth},
{ch855_name, 43791250, NULL , 0,ch855_qth},
{ch856_name, 43792500, NULL , 0,ch856_qth},
{ch857_name, 43793750, NULL , 0,ch857_qth},
{ch858_name, 43795000, NULL , 0,ch858_qth},
{ch859_name, 43796250, NULL , 0,ch859_qth},
{ch860_name, 43797500, NULL , 0,ch860_qth},
{ch861_name, 43798750, NULL , 0,ch861_qth},
{ch862_name, 43800000, NULL , 0,ch862_qth},
{ch863_name, 43801250, NULL , 0,ch863_qth},
{ch864_name, 43802500, NULL , 0,ch864_qth},
{ch865_name, 43803750, NULL , 0,ch865_qth},
{ch866_name, 43805000, NULL , 0,ch866_qth},
{ch867_name, 43806250, NULL , 0,ch867_qth},
{ch868_name, 43807500, NULL , 0,ch868_qth},
{ch869_name, 43808750, NULL , 0,ch869_qth},
{ch870_name, 43810000, NULL , 0,ch870_qth},
{ch871_name, 43811250, NULL , 0,ch871_qth},
{ch872_name, 43812500, NULL , 0,ch872_qth},
{ch873_name, 43813750, NULL , 0,ch873_qth},
{ch874_name, 43815000, NULL , 0,ch874_qth},
{ch875_name, 43816250, NULL , 0,ch875_qth},
{ch876_name, 43817500, NULL , 0,ch876_qth},
{ch877_name, 43818750, NULL , 0,ch877_qth},
{ch878_name, 43820000, NULL , -760000,ch878_qth},
{ch879_name, 43821250, NULL , -760000,ch879_qth},
{ch880_name, 43822500, NULL , -760000,ch880_qth},
{ch881_name, 43823750, NULL , -760000,ch881_qth},
{ch882_name, 43825000, NULL , -760000,ch882_qth},
{ch883_name, 43826250, NULL , -760000,ch883_qth},
{ch884_name, 43827500, NULL , -760000,ch884_qth},
{ch885_name, 43828750, NULL , -760000,ch885_qth},
{ch886_name, 43830000, NULL , -760000,ch886_qth},
{ch887_name, 43831250, NULL , -760000,ch887_qth},
{ch888_name, 43832500, NULL , -760000,ch888_qth},
{ch889_name, 43833750, NULL , -760000,ch889_qth},
{ch890_name, 43835000, NULL , -760000,ch890_qth},
{ch891_name, 43836250, NULL , -760000,ch891_qth},
{ch892_name, 43837500, NULL , -760000,ch892_qth},
{ch893_name, 43838750, NULL , -760000,ch893_qth},
{ch894_name, 43840000, NULL , -760000,ch894_qth},
{ch895_name, 43841250, NULL , -760000,ch895_qth},
{ch896_name, 43842500, NULL , -760000,ch896_qth},
{ch897_name, 43843750, NULL , -760000,ch897_qth},
{ch898_name, 43845000, NULL , -760000,ch898_qth},
{ch899_name, 43846250, NULL , -760000,ch899_qth},
{ch900_name, 43847500, NULL , -760000,ch900_qth},
{ch901_name, 43848750, NULL , -760000,ch901_qth},
{ch902_name, 43850000, NULL , -760000,ch902_qth},
{ch903_name, 43851250, NULL , -760000,ch903_qth},
{ch904_name, 43852500, NULL , -760000,ch904_qth},
{ch905_name, 43853750, NULL , 0,ch905_qth},
{ch906_name, 43855000,FT817_MODE_FM, -760000,ch906_qth},
{ch907_name, 43856250,FT817_MODE_FM, -760000,ch907_qth},
{ch908_name, 43857500,FT817_MODE_FM, -760000,ch908_qth},
{ch909_name, 43858750,FT817_MODE_FM, -760000,ch909_qth},
{ch910_name, 43860000,FT817_MODE_FM, -760000,ch910_qth},
{ch911_name, 43861250,FT817_MODE_FM, -760000,ch911_qth},
{ch912_name, 43862500,FT817_MODE_FM, -760000,ch912_qth},
{ch913_name, 43863750, NULL , 0,ch913_qth},
{ch914_name, 43865000,FT817_MODE_FM, -760000,ch914_qth},
{ch915_name, 43866250,FT817_MODE_FM, -760000,ch915_qth},
{ch916_name, 43867500,FT817_MODE_FM, -760000,ch916_qth},
{ch917_name, 43868750,FT817_MODE_FM, -760000,ch917_qth},
{ch918_name, 43870000,FT817_MODE_FM, -760000,ch918_qth},
{ch919_name, 43871250,FT817_MODE_FM, -760000,ch919_qth},
{ch920_name, 43872500,FT817_MODE_FM, -760000,ch920_qth},
{ch921_name, 43873750,FT817_MODE_FM, -760000,ch921_qth},
{ch922_name, 43875000,FT817_MODE_FM, -760000,ch922_qth},
{ch923_name, 43876250,FT817_MODE_FM, -760000,ch923_qth},
{ch924_name, 43877500,FT817_MODE_FM, -760000,ch924_qth},
{ch925_name, 43878750,FT817_MODE_FM, -760000,ch925_qth},
{ch926_name, 43880000,FT817_MODE_FM, -760000,ch926_qth},
{ch927_name, 43881250,FT817_MODE_FM, -760000,ch927_qth},
{ch928_name, 43882500,FT817_MODE_FM, -760000,ch928_qth},
{ch929_name, 43883750,FT817_MODE_FM, -760000,ch929_qth},
{ch930_name, 43885000,FT817_MODE_FM, -760000,ch930_qth},
{ch931_name, 43886250,FT817_MODE_FM, -760000,ch931_qth},
{ch932_name, 43887500,FT817_MODE_FM, -760000,ch932_qth},
{ch933_name, 43888750,FT817_MODE_FM, -760000,ch933_qth},
{ch934_name, 43890000,FT817_MODE_FM, -760000,ch934_qth},
{ch935_name, 43891250,FT817_MODE_FM, -760000,ch935_qth},
{ch936_name, 43892500,FT817_MODE_FM, -760000,ch936_qth},
{ch937_name, 43893750,FT817_MODE_FM, -760000,ch937_qth},
{ch938_name, 43895000,FT817_MODE_FM, -760000,ch938_qth},
{ch939_name, 43896250,FT817_MODE_FM, -760000,ch939_qth},
{ch940_name, 43897500,FT817_MODE_FM, -760000,ch940_qth},
{ch941_name, 43898750,FT817_MODE_FM, -760000,ch941_qth},
{ch942_name, 43900000,FT817_MODE_FM, -760000,ch942_qth},
{ch943_name, 43901250,FT817_MODE_FM, -760000,ch943_qth},
{ch944_name, 43902500,FT817_MODE_FM, -760000,ch944_qth},
{ch945_name, 43903750,FT817_MODE_FM, -760000,ch945_qth},
{ch946_name, 43905000,FT817_MODE_FM, -760000,ch946_qth},
{ch947_name, 43906250,FT817_MODE_FM, -760000,ch947_qth},
{ch948_name, 43907500,FT817_MODE_FM, -760000,ch948_qth},
{ch949_name, 43908750,FT817_MODE_FM, -760000,ch949_qth},
{ch950_name, 43910000,FT817_MODE_FM, -760000,ch950_qth},
{ch951_name, 43911250,FT817_MODE_FM, -760000,ch951_qth},
{ch952_name, 43912500,FT817_MODE_FM, -760000,ch952_qth},
{ch953_name, 43913750,FT817_MODE_FM, -760000,ch953_qth},
{ch954_name, 43915000,FT817_MODE_FM, -760000,ch954_qth},
{ch955_name, 43916250,FT817_MODE_FM, -760000,ch955_qth},
{ch956_name, 43917500,FT817_MODE_FM, -760000,ch956_qth},
{ch957_name, 43918750,FT817_MODE_FM, -760000,ch957_qth},
{ch958_name, 43920000,FT817_MODE_FM, -760000,ch958_qth},
{ch959_name, 43921250,FT817_MODE_FM, -760000,ch959_qth},
{ch960_name, 43922500,FT817_MODE_FM, -760000,ch960_qth},
{ch961_name, 43923750,FT817_MODE_FM, -760000,ch961_qth},
{ch962_name, 43925000,FT817_MODE_FM, -760000,ch962_qth},
{ch963_name, 43926250,FT817_MODE_FM, -760000,ch963_qth},
{ch964_name, 43927500,FT817_MODE_FM, -760000,ch964_qth},
{ch965_name, 43928750,FT817_MODE_FM, -760000,ch965_qth},
{ch966_name, 43930000,FT817_MODE_FM, -760000,ch966_qth},
{ch967_name, 43931250,FT817_MODE_FM, -760000,ch967_qth},
{ch968_name, 43932500,FT817_MODE_FM, -760000,ch968_qth},
{ch969_name, 43933750,FT817_MODE_FM, -760000,ch969_qth},
{ch970_name, 43935000,FT817_MODE_FM, -760000,ch970_qth},
{ch971_name, 43936250,FT817_MODE_FM, -760000,ch971_qth},
{ch972_name, 43937500,FT817_MODE_FM, -760000,ch972_qth},
{ch973_name, 43938750,FT817_MODE_FM, -760000,ch973_qth},
{ch974_name, 43940000,FT817_MODE_FM, -760000,ch974_qth},
{ch975_name, 43941250,FT817_MODE_FM, -760000,ch975_qth},
{ch976_name, 43942500,FT817_MODE_FM, -760000,ch976_qth},
{ch977_name, 43943750,FT817_MODE_FM, 0,ch977_qth},
{ch978_name, 43945000, NULL , -760000,ch978_qth},
{ch979_name, 43946250, NULL , -760000,ch979_qth},
{ch980_name, 43947500, NULL , -760000,ch980_qth},
{ch981_name, 43948750, NULL , -760000,ch981_qth},
{ch982_name, 43950000, NULL , -760000,ch982_qth},
{ch983_name, 43951250, NULL , -760000,ch983_qth},
{ch984_name, 43952500, NULL , -760000,ch984_qth},
{ch985_name, 43953750, NULL , -760000,ch985_qth},
{ch986_name, 43955000, NULL , -760000,ch986_qth},
{ch987_name, 43956250, NULL , -760000,ch987_qth},
{ch988_name, 43957500, NULL , -760000,ch988_qth},
{ch989_name, 43958750, NULL , 0,ch989_qth},
{ch990_name, 43960000, NULL , 0,ch990_qth},
{ch991_name, 43961250, NULL , 0,ch991_qth},
{ch992_name, 43962500, NULL , 0,ch992_qth},
{ch993_name, 43963750, NULL , 0,ch993_qth},
{ch994_name, 43965000, NULL , 0,ch994_qth},
{ch995_name, 43966250, NULL , 0,ch995_qth},
{ch996_name, 43967500, NULL , 0,ch996_qth},
{ch997_name, 43968750, NULL , 0,ch997_qth},
{ch998_name, 43970000, NULL , 0,ch998_qth},
{ch999_name, 43971250, NULL , 0,ch999_qth},
{ch1000_name, 43972500, NULL , 0,ch1000_qth},
{ch1001_name, 43973750, NULL , 0,ch1001_qth},
{ch1002_name, 43975000, NULL , 0,ch1002_qth},
{ch1003_name, 43976250, NULL , 0,ch1003_qth},
{ch1004_name, 43977500, NULL , 0,ch1004_qth},
{ch1005_name, 43978750, NULL , -940000,ch1005_qth},
{ch1006_name, 43980000, NULL , -940000,ch1006_qth},
{ch1007_name, 43981250, NULL , -940000,ch1007_qth},
{ch1008_name, 43982500, NULL , -940000,ch1008_qth},
{ch1009_name, 43983750, NULL , -940000,ch1009_qth},
{ch1010_name, 43985000, NULL , -940000,ch1010_qth},
{ch1011_name, 43986250, NULL , -940000,ch1011_qth},
{ch1012_name, 43987500, NULL , -940000,ch1012_qth},
{ch1013_name, 43988750, NULL , -940000,ch1013_qth},
{ch1014_name, 43990000, NULL , -940000,ch1014_qth},
{ch1015_name, 43991250, NULL , -940000,ch1015_qth},
{ch1016_name, 43992500, NULL , -940000,ch1016_qth},
{ch1017_name, 43993750, NULL , -940000,ch1017_qth},
{ch1018_name, 43995000, NULL , -940000,ch1018_qth},
{ch1019_name, 43996250, NULL , -940000,ch1019_qth},
{ch1020_name, 43997500, NULL , -940000,ch1020_qth},
{ch1021_name, 43998750, NULL , -940000,ch1021_qth},
{ch1022_name, 43932500,FT817_MODE_FM, -760000,ch1022_qth},
{ch1023_name, 43905000,FT817_MODE_FM, -760000,ch1023_qth},
{ch1024_name, 43307500,FT817_MODE_FM, 0,ch1024_qth},
{ch1025_name, 43310000,FT817_MODE_FM, 0,ch1025_qth},
{ch1026_name, 43312500,FT817_MODE_FM, 0,ch1026_qth},
{ch1027_name, 43315000,FT817_MODE_FM, 0,ch1027_qth},
{ch1028_name, 43317500,FT817_MODE_FM, 0,ch1028_qth},
{ch1029_name, 43320000,FT817_MODE_FM, 0,ch1029_qth},
{ch1030_name, 43322500,FT817_MODE_FM, 0,ch1030_qth},
{ch1031_name, 43325000,FT817_MODE_FM, 0,ch1031_qth},
{ch1032_name, 43327500,FT817_MODE_FM, 0,ch1032_qth},
{ch1033_name, 43330000,FT817_MODE_FM, 0,ch1033_qth},
{ch1034_name, 43332500,FT817_MODE_FM, 0,ch1034_qth},
{ch1035_name, 43335000,FT817_MODE_FM, 0,ch1035_qth},
{ch1036_name, 43337500,FT817_MODE_FM, 0,ch1036_qth},
{ch1037_name, 43340000,FT817_MODE_FM, 0,ch1037_qth},
{ch1038_name, 43342500,FT817_MODE_FM, 0,ch1038_qth},
{ch1039_name, 43345000,FT817_MODE_FM, 0,ch1039_qth},
{ch1040_name, 43347500,FT817_MODE_FM, 0,ch1040_qth},
{ch1041_name, 43350000,FT817_MODE_FM, 0,ch1041_qth},
{ch1042_name, 43352500,FT817_MODE_FM, 0,ch1042_qth},
{ch1043_name, 43355000,FT817_MODE_FM, 0,ch1043_qth},
{ch1044_name, 43357500,FT817_MODE_FM, 0,ch1044_qth},
{ch1045_name, 43360000,FT817_MODE_FM, 0,ch1045_qth},
{ch1046_name, 43362500,FT817_MODE_FM, 0,ch1046_qth},
{ch1047_name, 43365000,FT817_MODE_FM, 0,ch1047_qth},
{ch1048_name, 43367500,FT817_MODE_FM, 0,ch1048_qth},
{ch1049_name, 43370000,FT817_MODE_FM, 0,ch1049_qth},
{ch1050_name, 43372500,FT817_MODE_FM, 0,ch1050_qth},
{ch1051_name, 43375000,FT817_MODE_FM, 0,ch1051_qth},
{ch1052_name, 43377500,FT817_MODE_FM, 0,ch1052_qth},
{ch1053_name, 43380000,FT817_MODE_FM, 0,ch1053_qth},
{ch1054_name, 43382500,FT817_MODE_FM, 0,ch1054_qth},
{ch1055_name, 43385000,FT817_MODE_FM, 0,ch1055_qth},
{ch1056_name, 43387500,FT817_MODE_FM, 0,ch1056_qth},
{ch1057_name, 43390000,FT817_MODE_FM, 0,ch1057_qth},
{ch1058_name, 43392500,FT817_MODE_FM, 0,ch1058_qth},
{ch1059_name, 43395000,FT817_MODE_FM, 0,ch1059_qth},
{ch1060_name, 43397500,FT817_MODE_FM, 0,ch1060_qth},
{ch1061_name, 43400000,FT817_MODE_FM, 0,ch1061_qth},
{ch1062_name, 43402500,FT817_MODE_FM, 0,ch1062_qth},
{ch1063_name, 43405000,FT817_MODE_FM, 0,ch1063_qth},
{ch1064_name, 43407500,FT817_MODE_FM, 0,ch1064_qth},
{ch1065_name, 43410000,FT817_MODE_FM, 0,ch1065_qth},
{ch1066_name, 43412500,FT817_MODE_FM, 0,ch1066_qth},
{ch1067_name, 43415000,FT817_MODE_FM, 0,ch1067_qth},
{ch1068_name, 43417500,FT817_MODE_FM, 0,ch1068_qth},
{ch1069_name, 43420000,FT817_MODE_FM, 0,ch1069_qth},
{ch1070_name, 43422500,FT817_MODE_FM, 0,ch1070_qth},
{ch1071_name, 43425000,FT817_MODE_FM, 0,ch1071_qth},
{ch1072_name, 43427500,FT817_MODE_FM, 0,ch1072_qth},
{ch1073_name, 43430000,FT817_MODE_FM, 0,ch1073_qth},
{ch1074_name, 43432500,FT817_MODE_FM, 0,ch1074_qth},
{ch1075_name, 43435000,FT817_MODE_FM, 0,ch1075_qth},
{ch1076_name, 43437500,FT817_MODE_FM, 0,ch1076_qth},
{ch1077_name, 43440000,FT817_MODE_FM, 0,ch1077_qth},
{ch1078_name, 43442500,FT817_MODE_FM, 0,ch1078_qth},
{ch1079_name, 43445000,FT817_MODE_FM, 0,ch1079_qth},
{ch1080_name, 43447500,FT817_MODE_FM, 0,ch1080_qth},
{ch1081_name, 43450000,FT817_MODE_FM, 0,ch1081_qth},
{ch1082_name, 43452500,FT817_MODE_FM, 0,ch1082_qth},
{ch1083_name, 43455000,FT817_MODE_FM, 0,ch1083_qth},
{ch1084_name, 43457500,FT817_MODE_FM, 0,ch1084_qth},
{ch1085_name, 43460000,FT817_MODE_FM, 0,ch1085_qth},
{ch1086_name, 43462500,FT817_MODE_FM, 0,ch1086_qth},
{ch1087_name, 43465000,FT817_MODE_FM, 0,ch1087_qth},
{ch1088_name, 43467500,FT817_MODE_FM, 0,ch1088_qth},
{ch1089_name, 43470000,FT817_MODE_FM, 0,ch1089_qth},
{ch1090_name, 43472500,FT817_MODE_FM, 0,ch1090_qth},
{ch1091_name, 43475000,FT817_MODE_FM, 0,ch1091_qth},
{ch1092_name, 43477500,FT817_MODE_FM, 0,ch1092_qth},
{ch1093_name, 44600620,FT817_MODE_FM, 0,ch1093_qth},
{ch1094_name, 44601875,FT817_MODE_FM, 0,ch1094_qth},
{ch1095_name, 44603125,FT817_MODE_FM, 0,ch1095_qth},
{ch1096_name, 44604375,FT817_MODE_FM, 0,ch1096_qth},
{ch1097_name, 44605625,FT817_MODE_FM, 0,ch1097_qth},
{ch1098_name, 44606875,FT817_MODE_FM, 0,ch1098_qth},
{ch1099_name, 44608125,FT817_MODE_FM, 0,ch1099_qth},
};
int nchannels = 1100;
