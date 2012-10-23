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
		<xsl:apply-templates/>
		<xsl:text>
};
int nbands = sizeof(bands)/sizeof(bands[0]);
		</xsl:text>
	</xsl:template>

	<xsl:template match="band">
		<xsl:if test="not(./source)">
		<xsl:text>{"</xsl:text><xsl:value-of select="@name"/><xsl:text>",</xsl:text>
	   <xsl:value-of select="@min"/><xsl:text>,</xsl:text> 
	   <xsl:value-of select="@max"/><xsl:text>,</xsl:text> 
		<!--FIXME: mapping to FT817 mode, include general mode in band -->
		<xsl:value-of select="@mode"/><xsl:text>},</xsl:text> 
		</xsl:if>
		<xsl:apply-templates/>
	</xsl:template>

	<xsl:template match="todo"/>
	<xsl:template match="regions"/>
	<xsl:template match="modes"/>

	<xsl:template match="source">
		<xsl:variable name="filename" select="@file"/>
		<xsl:apply-templates select="document($filename)/bandplan"/>
	</xsl:template>

</xsl:stylesheet>

