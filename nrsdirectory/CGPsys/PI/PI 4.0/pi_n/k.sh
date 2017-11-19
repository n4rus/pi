#Shell-Script-Linear-Review
#Even the bad source can be turned into a good resource
#Know How

#Work-flow-init
clear
echo "Knowledge is Power"
echo "Today is a good day. \n"; date
echo "Number of user login: "; who | wc -l
echo "Terminal-work-time: "; last
k=10
p=100
echo "k($k)²=p($p)" 

#shell-review-&-testing

chmod +x si_1.sh

if [`chmod +x si_1.sh` -eq 0]
then
    echo "Error"
fi
    n=0
    
    while [ $n -le 9 ]
	  do
	      echo "apt-get -y install sage" > si_$n.sh
	      ./k.sh
	      $n=`expr $n+1`
    done
else
    echo "apt-get -y install sage" > si_1$n.sh
    ./k.sh
fi

exit 0
    
