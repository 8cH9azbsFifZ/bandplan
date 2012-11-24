<?xml version="1.0" encoding="UTF-8" ?>
<!--
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
    along with Xmlbandplan.  If not, see <http://www.gnu.org/licenses/>.	  
-->
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
	<xsl:output method="html" omit-xml-declaration="yes" />

	<xsl:template match="/">
		<xsl:apply-templates/>
	</xsl:template>


	<xsl:template match="bandplan">
		<xsl:choose>
			<xsl:when test="@version = '0.7.5' ">
				<xsl:choose>
					<xsl:when test="not(band/@ref)"> <!-- make sure we are not in a recursive file -->
						<xsl:text>
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

// Repeater channels
typedef struct 
{
  char *name; // channel name
  long freq;  // frequency (Hz/10) 
  byte mode;  // mode
  long shift;   // repeater shift 
  char qth[7];
} t_repeater;

long rpt70cm = 760000; // 7,6 MHz
long rpt2m   = 60000; // 600 kHz

const t_repeater repeaters[] = {
						</xsl:text>
					</xsl:when>
				</xsl:choose>
				<xsl:apply-templates select="./band"/>
				<xsl:choose>
					<xsl:when test="not(band/@ref)"> <!-- make sure we are not in a recursive file -->
						<xsl:text>
};
int nrepeaters = sizeof(repeaters)/sizeof(repeaters[0]);
						</xsl:text>
					</xsl:when>
				</xsl:choose>
			</xsl:when>
			<xsl:otherwise>
				<xsl:text>Error: Wrong version.</xsl:text>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:template>


	<xsl:template match="band">
		<xsl:choose> <!-- Distinguish between bandplan.xml and single NNm.xml files -->
			<xsl:when test="country">
				<xsl:choose> <!-- Only germany is selected -->
					<xsl:when test="country/@name = 'DE'">
						<xsl:apply-templates select="./channels"/>
					</xsl:when>
				</xsl:choose>
			</xsl:when>
			<xsl:otherwise>
				<xsl:apply-templates select="source"/>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:template>
	
	<xsl:template match="region">
	</xsl:template>

	<xsl:template match="channels">
		<xsl:apply-templates select="repeater"/>>
	</xsl:template>

		<xsl:template match="repeater">
			<xsl:call-template name="repeater"/>
	</xsl:template>

	<xsl:template name="repeater">
		<xsl:text>{"</xsl:text> 
		<!-- Name -->
		<xsl:value-of select="substring(@name,1,20)"/> <!-- maximal channel name length: 20 -->
		<xsl:choose>
			<xsl:when test="comment">
				<xsl:text>: </xsl:text>
				<xsl:value-of select="substring(comment,1,20)"/> <!-- maximal comment length: 20 -->
			</xsl:when>
		</xsl:choose>
		<xsl:text>",</xsl:text>
		<!-- Frequency -->
		<xsl:value-of select="@freq*0.1"/><xsl:text>,</xsl:text>
		<!-- Mode -->	
		<xsl:choose>
			<xsl:when test="contains(mode/@name,'CW')"> <xsl:text>FT817_MODE_CW_NARROW</xsl:text> </xsl:when>
			<xsl:when test="contains(mode/@name,'Narrow digital')"> <xsl:text>FT817_MODE_CW_NARROW</xsl:text> </xsl:when>
			<xsl:when test="contains(mode/@name,'All')"> <xsl:text>FT817_MODE_USB</xsl:text> </xsl:when>
			<xsl:when test="contains(mode/@name,'FM')"> <xsl:text>FT817_MODE_FM</xsl:text> </xsl:when>
			<xsl:otherwise> <xsl:text> NULL </xsl:text> </xsl:otherwise>
		</xsl:choose>
		<xsl:text>, </xsl:text>
		<xsl:value-of select="shift*0.1"/> <xsl:text>,</xsl:text>
		<xsl:value-of select="position/@locator"/> 
		<xsl:text>},&#xa;</xsl:text> 
	</xsl:template>


	<xsl:template match="todo"/>
	<xsl:template match="regions"/>
	<xsl:template match="homepage"/>
	<xsl:template match="position"/>

	<xsl:template match="operator"/>
	

	<xsl:template match="source">
		<xsl:choose>
			<xsl:when test="@file"> <!-- Recursive processing of XML bandplans -->
				<xsl:variable name="filename" select="@file"/>
				<xsl:apply-templates select="document($filename)/bandplan"/>
			</xsl:when>
		</xsl:choose>
	</xsl:template>

</xsl:stylesheet>

