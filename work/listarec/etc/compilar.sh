#!/usr/bin/bash
cd ../fuente
ACTUAL=$PWD
cd $ACTUAL/lib
for j in *.sh
do
	if
		[ -x $PWD/$j ]
	then
		$j 
	fi
done
cd $ACTUAL
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
			$j 
		fi
	done
done
