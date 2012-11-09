<?xml version="1.0" encoding="iso-8859-1"?>
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
		<xsl:apply-templates/>
		<small><br/><br/><br/>
		<xsl:text>
				(C)opyright Gerolf Ziegenhain (DG6FL). &lt;XML&gt;Bandplan is released under GPLv3.
		</xsl:text>
		</small>
	</xsl:template>

	<xsl:template match="bandplan">
		<html><head>
		<!-- FIXME: check version number -->
				<title> <xsl:value-of select="@name"/> </title>
			</head>
		<xsl:apply-templates/>
		</html>
	</xsl:template>

	<xsl:template match="band">
			<body>
				<xsl:choose>
					<xsl:when test="@country">
						<h1> <xsl:value-of select="@name"/> <xsl:text> Band for country </xsl:text> <xsl:value-of select="@country"/> </h1>
					</xsl:when>
				</xsl:choose>
			<xsl:apply-templates/>
			</body>
	</xsl:template>

	<xsl:template match="region">
		<table>
			<tr>
				<td> 
					<xsl:value-of select='format-number(@min*0.000001, "####.000")'/> 
					<xsl:text> - </xsl:text>
					<xsl:value-of select='format-number(@max*0.000001, "####.000")'/> 
				</td>
				<td> <b> <xsl:value-of select="@name"/> </b> </td>
				<td> <xsl:apply-templates/> </td>
			</tr>
		</table>
	</xsl:template>
	
	<xsl:template match="channel">
		<xsl:text>Special channel</xsl:text>
		<table>
			<tr>
				<td> <xsl:value-of select='format-number(@freq*0.000001, "####.000")'/> </td>
				<td> <b> <xsl:value-of select="@name"/> </b> </td>
			<td> <xsl:apply-templates/> </td>
			</tr>
		</table>
	</xsl:template>

	<xsl:template match="mode">
		<xsl:value-of select="."/><xsl:text> </xsl:text>
	</xsl:template>

	<xsl:template match="comment">
		<i>
		<xsl:text>(</xsl:text>
		<xsl:value-of select="."/>
		<xsl:text>) </xsl:text>
		</i>
	</xsl:template>

	<xsl:template match="todo"/>
	<xsl:template match="regions"/>
	<xsl:template match="modes"/>

	<xsl:template match="source">
		<xsl:variable name="filename" select="@file"/>
		<xsl:apply-templates select="document($filename)/bandplan"/>
	</xsl:template>

</xsl:stylesheet>

