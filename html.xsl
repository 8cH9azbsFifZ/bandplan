<?xml version="1.0" encoding="iso-8859-1"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

	<xsl:template match="/">
		<html><head>Band Plan</head>
			<body>
		<xsl:apply-templates/>
			</body>
		</html>
	</xsl:template>

	
	<xsl:template match="bandplan">
		<xsl:apply-templates/>
	</xsl:template>

	<xsl:template match="band">
		<h1> <xsl:value-of select="@name"/> </h1>
	</xsl:template>

</xsl:stylesheet>

