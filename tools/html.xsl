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
  <!-- =================================================== -->
  <xsl:variable name="acceptedversion">0.7.12</xsl:variable>
  <!-- =================================================== -->
  <!-- Header & Footer -->
  <xsl:template match="/">
    <xsl:apply-templates mode="mainfile"/>
  </xsl:template>
  <!-- =================================================== -->
  <!-- Main Bandplan -->
  <xsl:template match="bandplan" mode="mainfile">
    <html>
      <head>
        <title>
          <xsl:value-of select="@name"/>
        </title>
      </head>
      <body>
			<h1>XML Bandplan</h1>
			<p>
				<xsl:text>
					This document contains bandplan information for amateur radio use.
					It has been created automatically by xmlbandplan. But xmlbandplan is more than
					just a HTML file containing bandplan information.
					For further information visit 
				</xsl:text>
				<a href="http://xmlbandplan.org">xmlbandplan.org</a>
				<xsl:text>. 
					Please keep in mind: this is not an official bandplan. Nevertheless references are included
					for all entries - typos or sources of wrong information can be traced easily.
					Feel free to contribute :)
				</xsl:text>
			</p>
        	<xsl:choose>
          <!-- Check version number  - abort? -->
          <xsl:when test="@version = $acceptedversion">
            <xsl:apply-templates/>
            <small>
              <br/>
              <br/>
              <br/>
				  <xsl:text>(C)opyright Gerolf Ziegenhain (DG6FL) et al.</xsl:text>
				  <xsl:text> - Document Version </xsl:text>
				  <xsl:value-of select="@version"/>
				  <xsl:text> - &lt;XML&gt;Bandplan is released under GPLv3.</xsl:text>
            </small>
          </xsl:when>
          <xsl:otherwise>
            <xsl:text>Error: Wrong version.</xsl:text>
          </xsl:otherwise>
        </xsl:choose>
      </body>
    </html>
  </xsl:template>
  <!-- =================================================== -->
  <xsl:template match="source">
    <xsl:apply-templates select="document(@file)/bandplan"/>
  </xsl:template>
  <!-- =================================================== -->
  <!-- Embedded Sub-Bandplans -->
  <xsl:template match="bandplan">
    <xsl:choose>
      <!-- Check version number  - abort? -->
      <xsl:when test="@version = $acceptedversion">
        <xsl:apply-templates/>
      </xsl:when>
      <xsl:otherwise>
        <xsl:text>Error: Wrong version.</xsl:text>
      </xsl:otherwise>
    </xsl:choose>
  </xsl:template>
  <!-- =================================================== -->
  <!-- Each Band -->
  <xsl:template match="band">
	  <a name="{@name}"/>
    <h1>
      <xsl:value-of select="@name"/>
      <xsl:text> Band for Country </xsl:text>
      <xsl:value-of select="country/@name"/>
    </h1>
	 <p>
      <xsl:value-of select="comment"/>
	 </p>
    <!-- Regions & Channels -->
    <table>
      <tr>
        <td>
          <xsl:text>Frequency (MHz)</xsl:text>
        </td>
        <td>
          <xsl:text>Bandwidth (kHz)</xsl:text>
        </td>
        <td>
          <xsl:text>Mode</xsl:text>
        </td>
        <td>
          <xsl:text>License</xsl:text>
        </td>
        <td>
          <xsl:text>Reference</xsl:text>
        </td>
        <td>
          <xsl:text>Comment</xsl:text>
        </td>
      </tr>
      <xsl:apply-templates select="region">
        <xsl:with-param name="level" select="0"/>
        <xsl:sort select="@min"/>
      </xsl:apply-templates>
    </table>
  </xsl:template>
  <!-- =================================================== -->
  <!-- Region & Subregion -->
  <!-- Each (Frequency) Region -->
  <xsl:template match="region">
    <xsl:param name="level" select="0"/>
    <tr>
      <!-- Choose colors for subregion -->
      <xsl:choose>
        <xsl:when test="$level = 2">
          <xsl:attribute name="style">background-color:#bbb</xsl:attribute>
        </xsl:when>
        <xsl:when test="$level = 1">
          <xsl:attribute name="style">background-color:#999</xsl:attribute>
        </xsl:when>
        <xsl:otherwise>
          <xsl:attribute name="style">background-color:#777</xsl:attribute>
        </xsl:otherwise>
      </xsl:choose>
      <td>
        <xsl:attribute name="style">
          <xsl:text>padding-left:</xsl:text>
          <xsl:value-of select="$level*16"/>
          <xsl:text>px;</xsl:text>
        </xsl:attribute>
        <xsl:value-of select="format-number(@min*0.000001, &quot;###0.000&quot;)"/>
        <xsl:text> - </xsl:text>
        <xsl:value-of select="format-number(@max*0.000001, &quot;###0.000&quot;)"/>
      </td>
      <td>
        <xsl:if test="@bandwidth">
          <xsl:value-of select="format-number(@bandwidth*0.001, &quot;#0.000&quot;)"/>
        </xsl:if>
      </td>
      <td>
        <xsl:apply-templates select="mode"/>
      </td>
      <td>
        <!-- Default regulation is parent node -->
        <xsl:choose>
          <xsl:when test="license">
            <table>
              <xsl:apply-templates select="license"/>
            </table>
          </xsl:when>
          <xsl:otherwise>
            <table>
              <xsl:apply-templates select="../license"/>
            </table>
          </xsl:otherwise>
        </xsl:choose>
      </td>
      <td>
        <a href="#{@ref}">
          <xsl:value-of select="@ref"/>
        </a>
      </td>
      <td>
        <xsl:apply-templates select="comment"/>
      </td>
    </tr>
    <!-- Recursive handling of subregions -->
    <xsl:apply-templates select="region">
      <xsl:sort select="@min"/>
      <xsl:with-param name="level" select="$level + 1"/>
    </xsl:apply-templates>
    <xsl:apply-templates select="ancestor::band/channels/channel[@freq &gt;= current()/@min and @freq &lt;= current()/@max and not(@freq &gt;= current()//region/@min and @freq &lt;= current()//region/@max)]">
      <xsl:sort select="@freq"/>
      <xsl:with-param name="level" select="$level + 1"/>
    </xsl:apply-templates>
  </xsl:template>
  <!-- =================================================== -->
  <!-- Each Channel -->
  <xsl:template match="channel">
    <xsl:param name="level" select="0"/>
    <tr style="background-color:#8888bb">
      <td>
        <xsl:attribute name="style">
          <xsl:text>padding-left:</xsl:text>
          <xsl:value-of select="$level*16"/>
          <xsl:text>px;</xsl:text>
        </xsl:attribute>
        <xsl:value-of select="format-number(@freq*0.000001, &quot;###0.000&quot;)"/>
      </td>
      <td/>
      <td>
        <xsl:apply-templates select="mode"/>
      </td>
      <td/>
      <td>
        <a href="#{@ref}">
          <xsl:value-of select="@ref"/>
        </a>
      </td>
      <td>
        <b>
          <xsl:value-of select="@name"/>
        </b>
        <xsl:text> </xsl:text>
        <xsl:apply-templates select="comment"/>
      </td>
    </tr>
  </xsl:template>
  <!-- =================================================== -->
  <!-- Each Repeater -->
  <xsl:template match="repeater">
    <tr style="background-color:#8888dd">
      <td>
        <xsl:value-of select="format-number(@freq*0.000001, &quot;###0.000&quot;)"/>
        <xsl:text> (</xsl:text>
        <xsl:value-of select="format-number(shift*0.000001, &quot;###0.0&quot;)"/>
        <xsl:text>)</xsl:text>
      </td>
      <td>
        <xsl:apply-templates select="mode"/>
      </td>
      <td/>
      <td/>
      <td>
        <a href="#{@ref}">
          <xsl:value-of select="@ref"/>
        </a>
        <xsl:choose>
          <xsl:when test="homepage">
            <a href="{homepage/@href}">
              <xsl:text>Homepage</xsl:text>
            </a>
          </xsl:when>
        </xsl:choose>
      </td>
      <td>
        <b>
          <xsl:value-of select="@name"/>
        </b>
        <xsl:text> </xsl:text>
        <xsl:if test="echolink">
          <xsl:text>Echolink Node: </xsl:text>
          <xsl:value-of select="echolink/@node"/>
        </xsl:if>
        <xsl:text> </xsl:text>
        <xsl:if test="position">
          <xsl:text>Position: </xsl:text>
          <xsl:value-of select="position/@locator"/>
        </xsl:if>
        <xsl:text> </xsl:text>
        <xsl:apply-templates select="comment"/>
      </td>
    </tr>
  </xsl:template>
  <!-- =================================================== -->
  <!-- License Information -->
  <xsl:template match="license">
    <xsl:choose>
      <xsl:when test="@prefix">
        <tr style="background-color:#bbb">
          <td>
            <xsl:value-of select="../@name"/>
          </td>
          <td>
            <xsl:value-of select="@prefix"/>
          </td>
          <td>
            <xsl:value-of select="@name"/>
          </td>
          <td>
            <xsl:value-of select="@cept"/>
          </td>
          <td>
            <a href="#{@ref}">
              <xsl:value-of select="@ref"/>
            </a>
          </td>
        </tr>
      </xsl:when>
      <xsl:otherwise>
        <tr>
          <td>
            <xsl:value-of select="@name"/>
            <xsl:text>: </xsl:text>
            <xsl:value-of select="@power"/>
            <xsl:text>W (</xsl:text>
            <xsl:value-of select="@powermeasure"/>
            <xsl:text>) </xsl:text>
          </td>
        </tr>
      </xsl:otherwise>
    </xsl:choose>
  </xsl:template>
  <!-- =================================================== -->
  <xsl:template match="mode">
    <xsl:value-of select="@name"/>
    <xsl:text> </xsl:text>
  </xsl:template>
  <!-- =================================================== -->
  <xsl:template match="comment">
    <i>
      <xsl:value-of select="."/>
    </i>
  </xsl:template>
  <!-- =================================================== -->
  <xsl:template match="country">
    <xsl:apply-templates select="license"/>
  </xsl:template>
  <!-- =================================================== -->
  <!-- Handle License Files -->
  <xsl:template match="countries">
    <h1>Licenses</h1>
    <table>
      <tr>
        <td>Country</td>
        <td>Prefix</td>
        <td>License</td>
        <td>CEPT</td>
        <td>Reference</td>
      </tr>
      <xsl:apply-templates select="country"/>
    </table>
  </xsl:template>
  <!-- =================================================== -->
  <!-- Handle Refernces Files -->
  <xsl:template match="references">
    <h1>References</h1>
    <table>
      <tr>
        <td>ID</td>
        <td>Name</td>
        <td>Link</td>
      </tr>
      <xsl:apply-templates select="ref"/>
    </table>
  </xsl:template>
  <!-- =================================================== -->
  <xsl:template match="ref">
    <tr style="background-color:#bbb">
      <td>
        <a name="{@id}">
          <xsl:value-of select="@id"/>
        </a>
      </td>
      <td>
        <xsl:value-of select="@name"/>
      </td>
      <td>
        <a href="{@href}">Link</a>
      </td>
    </tr>
  </xsl:template>
  <!-- =================================================== -->
</xsl:stylesheet>

