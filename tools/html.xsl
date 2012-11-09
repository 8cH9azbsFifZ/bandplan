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
			<xsl:choose> <!-- Distinguish between bandplan.xml and single NNm.xml files -->
				<xsl:when test="@country">
					<h1> <xsl:value-of select="@name"/> <xsl:text> Band for Country </xsl:text> <xsl:value-of select="@country"/> </h1>
					<xsl:apply-templates select="source"/> 
					<!-- Regions & Channels -->
					<table>
						<tr>
							<td> <xsl:text>Frequency (MHz)</xsl:text></td>
							<td> <xsl:text>Name</xsl:text></td>
							<td> <xsl:text>Mode</xsl:text></td>
							<td> <xsl:text>Regulation</xsl:text></td>
							<td> <xsl:text>Comment</xsl:text></td>
						</tr>
						<xsl:apply-templates select="region"/>
						<xsl:apply-templates select="channel"/>
					</table>
				</xsl:when>
				<xsl:otherwise>
					<xsl:apply-templates/>
				</xsl:otherwise>
			</xsl:choose>
		</body>
	</xsl:template>

	<xsl:template match="region">
			<tr>
				<td> 
					<xsl:value-of select='format-number(@min*0.000001, "####.000")'/> 
					<xsl:text> - </xsl:text>
					<xsl:value-of select='format-number(@max*0.000001, "####.000")'/> 
				</td>
				<td> <b> <xsl:value-of select="@name"/> </b> </td>
				<td> <xsl:apply-templates select="mode"/> </td>
				<td> <!-- Default regulation is parent node -->
					<xsl:choose>
						<xsl:when test="regulation">
							<xsl:apply-templates select="regulation"/> 
						</xsl:when>
						<xsl:otherwise>
							<xsl:apply-templates select="../regulation"/> 
						</xsl:otherwise>
					</xsl:choose>
				</td>
				<td> 
					<xsl:apply-templates select="comment"/> 
					<xsl:apply-templates select="source"/> 
					<!-- Recursive handling of subregions -->
					<xsl:apply-templates select="region"/> 
				</td>
			</tr>
	</xsl:template>
	
	<xsl:template match="channel">
			<tr>
				<td> <xsl:value-of select='format-number(@freq*0.000001, "####.000")'/> </td>
				<td> <b> <xsl:value-of select="@name"/> </b> </td>
				<td> <xsl:apply-templates select="mode"/> </td>
				<td> <xsl:text> cf. regions </xsl:text> </td>
				<td> 
					<xsl:apply-templates select="comment"/> 
					<xsl:apply-templates select="source"/> 
				</td>
			</tr>
	</xsl:template>

	<xsl:template match="regulation">
		<xsl:apply-templates select="license"/> 
		<xsl:apply-templates select="source"/> 
	</xsl:template>

	<xsl:template match="license">
		<xsl:value-of select="@name"/>
		<xsl:text>: </xsl:text>
		<xsl:value-of select="@power"/>
		<xsl:text>W </xsl:text>
	</xsl:template>

	<xsl:template match="mode">
		<xsl:value-of select="."/><xsl:text> </xsl:text>
	</xsl:template>

	<xsl:template match="comment">
		<i> <xsl:value-of select="."/> </i>
	</xsl:template>

	<xsl:template match="todo"/>
	<xsl:template match="countries"/>
	<xsl:template match="modes"/>

	<xsl:template match="source">
		<xsl:choose>
			<xsl:when test="@file"> <!-- Recursive processing of XML bandplans -->
				<xsl:variable name="filename" select="@file"/>
				<xsl:apply-templates select="document($filename)/bandplan"/>
			</xsl:when>
			<xsl:when test="@name">
				<xsl:variable name="link" select="@href"/>
				<small><a href="{$link}"><xsl:value-of select="@name"/></a></small>
			</xsl:when>
		</xsl:choose>
	</xsl:template>

</xsl:stylesheet>

