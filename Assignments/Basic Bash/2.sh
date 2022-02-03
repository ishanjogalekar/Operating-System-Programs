#! /bin/sh
echo "Enter no:"
read n
a=0
while [ $n -gt 0 ]
do
	mod=$((n % 10))
	a=$((a + mod))
	n=$((n / 10))
done
echo $a
