#! /bin/sh
clear
echo "Enter no:"
read num
i=1
while [ $i -le 10 ]
do
	echo " $num * $i =`expr $num \* $i ` "
	i=`expr $i + 1`
done

