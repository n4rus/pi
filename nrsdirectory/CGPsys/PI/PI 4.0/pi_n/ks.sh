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

n=1
i=$n

while [ $n -le 9 ]
do
    echo "apt-get -y install sage" > si_$n.sh
    let n=n+1
done
