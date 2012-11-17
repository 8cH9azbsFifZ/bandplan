#!/usr/bin/perl -s
#$filename = "references.xml";
$filename or die "check_references_for_changes.pl -filename=bandplans/references.xml";
$base_references_dir = "./references";


use XML::Simple;
use Data::Dumper;

$xml = new XML::Simple;
$data = $xml->XMLin($filename);

my %list = %{$data->{references}->{ref}};
$changed = 0;
foreach my $ref (keys %list){
	my $id = $list{$ref}{id};
	my $md5 = $list{$ref}{md5};
	my $href = $list{$ref}{href};
	my $localfile = $list{$ref}{localfile};
	$localfile or next;
	$localfile = $base_references_dir."/".$localfile; 
	`wget -O $localfile $href`;
	my $md5_check = `cat $localfile | md5`;
	chomp ($md5_check);
	$md5 == $md5_check and next;
	$changed = 1;
	print "Reference $id \"$ref\" has changed ($md5 != $md5_check ).\n";
}
$changed == 0 and print "No changes detected in references.\n";
$changed == 1 and print "Changes detected in references.\n";
exit $changed;

