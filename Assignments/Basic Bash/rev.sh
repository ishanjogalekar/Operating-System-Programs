#! /bin/sh
echo "Enter string:"
read s
len=`echo $s | wc -c`
len=`expr $len - 1`
rev=""
while test $len -gt 0
do
	rev1=`echo $s | cut -c$len`
	rev=$rev$rev1
	len=`expr $len - 1`
done
echo $rev

