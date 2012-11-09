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
	<xsl:template match="/">
			<xsl:text>
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
</xsl:text>
		<xsl:apply-templates/>
	</xsl:template>

	<xsl:template match="bandplan">
		<xsl:text>
const t_band bands[] = {
		</xsl:text>
		<!-- FIXME: check version number -->
		<xsl:apply-templates select="./band"/>
		<xsl:text>
};
int nbands = sizeof(bands)/sizeof(bands[0]);
		</xsl:text>
	</xsl:template>

	<xsl:template match="band">
		<!--FIXME: check country code-->
		<!--<xsl:if test="not(./source)">-->
		<xsl:call-template name="region"/>
		<xsl:apply-templates select="./region"/>
		<!--FIXME: make channels ...<xsl:apply-templates select="./channel"/>-->
	</xsl:template>
	
	<xsl:template match="region">
			<xsl:call-template name="region"/>
	</xsl:template>

	<xsl:template match="channel">
			<xsl:call-template name="region"/>
	</xsl:template>

	<xsl:template name="region">
		<xsl:variable name="bandname" select="./name"/>
		<xsl:text>{"</xsl:text> <xsl:value-of select="$bandname"/> <xsl:text>",</xsl:text>
		<xsl:value-of select="@min*0.1"/><xsl:text>,</xsl:text> 
	   <xsl:value-of select="@max*0.1"/><xsl:text>,</xsl:text> 
		<xsl:choose>
			<xsl:when test="contains(@mode,'CW')"> <xsl:text>FT817_MODE_CW_NARROW</xsl:text> </xsl:when>
			<xsl:when test="contains(@mode,'All')"> <xsl:text>FT817_MODE_USB</xsl:text> </xsl:when>
			<xsl:when test="contains(@mode,'FM')"> <xsl:text>FT817_MODE_FM</xsl:text> </xsl:when>
			<xsl:otherwise> <xsl:text> NULL </xsl:text> </xsl:otherwise>
		</xsl:choose>
		<xsl:text>},&#xa;</xsl:text> 
		<!--</xsl:if>-->
		<!--	<xsl:apply-templates/>-->
	</xsl:template>

	<xsl:template match="todo"/>
	<xsl:template match="regions"/>
	<xsl:template match="modes"/>

	<xsl:template match="source">
		<xsl:variable name="filename" select="@file"/>
		<xsl:apply-templates select="document($filename)/bandplan"/>
	</xsl:template>

</xsl:stylesheet>

