#! /bin/sh
for it in *
do
	if [ -f $it ]
	then
		echo "--$it--"
		if [ -x $it ]
		then
			echo "Executable mode"
			chmod -x $it
			echo "Executable mode removed"
		fi
		if [ -w $it ]
		then
			echo "Write mode"
			chmod -w $it
			echo "Write mode removed"
		fi
		if [ -r $it ]
		then
			echo "Read mode (r--r--r--)"
		else
			chmod +r $it
			echo "Read mode started"
		fi
		echo "Final"
		ls -al $it
	fi
	echo 
done

