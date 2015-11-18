tar="abc/"
if [ "${tar:(-1)}" = "/" ]
then
	tar=`echo ${tar:0:(-1)}`
	echo $tar
fi

