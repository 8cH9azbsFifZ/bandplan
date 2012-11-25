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


#include "FT817.h" 

typedef struct 
{
  prog_char *name; // channel name
  prog_int32_t freq;  // frequency (Hz/10)  
  prog_uint16_t mode;  // mode
  prog_int32_t shift;
  prog_char *qth;
} t_channel;

		</xsl:text>
		<xsl:apply-templates select="bandplan/source"/>
	</xsl:template>

	<!-- Recursive files -->
	<xsl:template match="source">
		<xsl:variable name="filename" select="@file"/>
		<xsl:apply-templates select="document($filename)/bandplan"/>
	</xsl:template>

	<!-- Process one bandplan -->
	<xsl:template match="bandplan">
		<xsl:choose>
			<xsl:when test="@version = '0.7.6' ">
				<xsl:apply-templates select="./band"/>
			</xsl:when>
			<xsl:otherwise>
				<xsl:text>/* Error: Wrong version. */</xsl:text>
			</xsl:otherwise>
		</xsl:choose>
	</xsl:template>


	<xsl:template match="band">
		<xsl:choose> <!-- Only germany is selected -->
			<xsl:when test="country/@name = 'DE'">
				<xsl:apply-templates source="channels"/>
			</xsl:when>
		</xsl:choose>
	</xsl:template>


	<xsl:template match="channels">
		<xsl:apply-templates select="channel"/>>
		<xsl:apply-templates select="repeater"/>>
	</xsl:template>


	<xsl:template match="channel|repeater">
		<xsl:text>{"</xsl:text> 
		<!-- Name -->
		<xsl:value-of select="substring(@name,1,20)"/> 
		<xsl:text>", </xsl:text>
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
		<!-- Shift -->
		<xsl:choose> 
			<xsl:when test="shift"> <xsl:value-of select="shift*0.1"/> </xsl:when> 
			<xsl:otherwise> <xsl:text>0</xsl:text> </xsl:otherwise>
		</xsl:choose>
		<xsl:text>, </xsl:text>
		<!-- Locator -->
		<xsl:choose> 
			<xsl:when test="position"><xsl:text>"</xsl:text><xsl:value-of select="position/@locator"/><xsl:text>"</xsl:text></xsl:when>
			<xsl:otherwise> <xsl:text>""</xsl:text> </xsl:otherwise>
		</xsl:choose>
		<xsl:text>},&#xa;</xsl:text> 
	</xsl:template>

	<!-- Skip all other tags -->
	<xsl:template match="homepage"/>
	<xsl:template match="region"/>
	<xsl:template match="license"/>
	<xsl:template match="comment"/>
	<xsl:template match="position"/>
	<xsl:template match="operator"/>
	

</xsl:stylesheet>

