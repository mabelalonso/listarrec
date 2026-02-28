#!/usr/bin/ksh
cd ../fuente
ACTUAL=$PWD
for i in *
do
	if
		test -d $ACTUAL/$i
	then
		cd $ACTUAL/$i
	else
		continue
	fi
	for j in *.sh
	do
		if
			[ -x $PWD/$j ]
		then
			$j BORRA
		fi
	done
done
