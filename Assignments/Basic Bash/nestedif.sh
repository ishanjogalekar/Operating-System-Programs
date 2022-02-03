#! /bin/sh
echo "Ishan Jogalekar - 19BCE2250"
echo "Enter no:"
read num
if [ `echo "$num % 2" | bc` -eq 0 ]
then
echo "No is divisible by 2"
else
	if [ `echo "$num % 3" | bc` -eq 0 ]
	then
		echo "No is divisible by 3"
	fi
fi

