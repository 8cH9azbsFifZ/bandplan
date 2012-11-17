#!/usr/bin/perl
use XML::Parser;

$filename = "references.xml";

use XML::Simple;

$xml = new XML::Simple;
$data = $xml->XMLin($filename);

use Data::Dumper;
#print Dumper $data;
my %list = %{$data->{references}->{ref}};
#print Dumper %list;

$changed = 0;
foreach my $ref (keys %list){
	my $id = $list{$ref}{id};
	my $md5 = $list{$ref}{md5};
	my $href = $list{$ref}{href};
	my $md5_check = `wget -O - $href 2>/dev/null| md5`;
	chomp ($md5_check);
	$md5 == $md5_check and next;
	$changed = 1;
	print "Reference $id \"$ref\" has changed ($md5 != $md5_check ).\n";
}


