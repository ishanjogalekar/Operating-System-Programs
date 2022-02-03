#! /bin/sh
clear
echo "Ishan Jogalekar -19BCE2250"
echo "no. of terms:"
read n
a=0
b=1
for (( i=0;i<n;i++ ))
do
	echo -n "$a "
	c=$((a +b))
	a=$b
	b=$c
done	
