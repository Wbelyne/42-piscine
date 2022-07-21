ifconfig | grep ether | sed 's/ether //'|awk '$1=$1' |cut -c1-17
