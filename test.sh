#!/bin/bash

#program analizujacy wszelkie mozliwe wywolania programu hog.c
#dom, rodzice, bank, ang, weze, zw

	dom=(1 0 1 0 1 0)
    rodzice=(1 0 1 0 1 0)
       bank=(1 0 1 0 1 0)
	ang=(1 0 1 0 1 0)
       weze=(1 0 1 0 0 1)
	 zw=(0 1 1 0 0 1)
	  r=(0 0 1 0 0 0)

for ind in `seq 0 5`; do
	./hog ${dom[$ind]} ${rodzice[$ind]} ${bank[$ind]} ${ang[$ind]} ${weze[$ind]} ${zw[$ind]}
	out=`echo $?`
	if [ $out != "${r[$ind]}" ] ; then
		echo "input " ${dom[$ind]} ${rodzice[$ind]} ${bank[$ind]} ${ang[$ind]} ${weze[$ind]} ${zw[$ind]}
		echo "output actual " $out
		echo "output expected " ${r[$ind]}
	fi
done
		
