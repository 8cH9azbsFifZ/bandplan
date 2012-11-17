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

foreach my $ref (keys %list){
	my $id = $list{$ref}{id};
	my $md5 = $list{$ref}{md5};
	my $href = $list{$ref}{href};
	my $md5_check = `wget $href | md5`;
	print "Reference $id $md5 $md5_check $ref $href\n";
}


