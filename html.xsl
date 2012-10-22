<?xml version="1.0" encoding="iso-8859-1"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

	<xsl:template match="/">
		<xsl:apply-templates/>
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
			<h1> <xsl:value-of select="@name"/> <xsl:text> </xsl:text> <xsl:value-of select="@region"/> </h1>
			<xsl:apply-templates/>
			</body>
	</xsl:template>

	<xsl:template match="region">
		<table>
			<tr>
				<!--<td> <xsl:text>Frequency (Hz)</xsl:text> </td>-->
				<td> <xsl:value-of select="@min"/> <xsl:text> - </xsl:text> <xsl:value-of select="@max"/> <xsl:text> Hz</xsl:text> </td>
				<td> <xsl:value-of select="@name"/> </td>
				<td> <xsl:apply-templates/> </td>
			</tr>
		</table>
	</xsl:template>
	
	<xsl:template match="channel">
		<table>
			<tr>
				<td> <xsl:text>Channel</xsl:text> </td>
				<td> <xsl:value-of select="@freq"/> <xsl:text> Hz</xsl:text> </td>
				<td> <xsl:value-of select="@name"/> </td>
				<td> <xsl:apply-templates/> </td>
			</tr>
		</table>
	</xsl:template>

	<xsl:template match="mode">
		<xsl:value-of select="."/><xsl:text> </xsl:text>
	</xsl:template>

	<xsl:template match="comment">
		<xsl:text>(</xsl:text><xsl:value-of select="."/><xsl:text>) </xsl:text>
	</xsl:template>

	<xsl:template match="todo"/>

	<xsl:template match="source">
		<xsl:variable name="filename" select="@file"/>
		<xsl:apply-templates select="document($filename)"/>
	</xsl:template>

</xsl:stylesheet>

