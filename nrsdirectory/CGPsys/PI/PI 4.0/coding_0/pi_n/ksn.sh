[1;4402;0c#Shell-Script-Linear-Review
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
i=1

while [ $n -le 99 ]
do
    cp ./ks.sh ./ks_n$n.sh
    echo "# "$i".key number f("$n")" > ks_n$n.sh
    let n=n+1
done
