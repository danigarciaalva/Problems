#!/usr/bin/perl
#
# Facebook Hacker Cup 2013 Qualification Round
# Problem: Beautiful strings
# Short desc: Calculate the beauty of a given string according to input specification
# Author: Israel Leiva - github.com/ileiva
# January 26th, 2013
#
use strict;

# number of testcases
chomp(my $m = <stdin>);
for(my $i = 1; $i <= $m; $i++){
	# string to be processed
	my @str = split '', <stdin>;

	# calculate frequency for each letter and sort them in descending order
	my @letters_freq;
	foreach my $let( @str ) { $letters_freq[ ord( lc($let) ) ]++ if $let =~ /\w/ }
	@letters_freq = sort { $b <=> $a } @letters_freq;

	# the letter with the highest frequency will have the highest beauty and so on
	my $beauty = 0;
	for( my $j = 0; $j < 26; $j++ ) { $beauty += $letters_freq[$j] * (26 - $j) }
	print "Case #$i: $beauty\n";
}
