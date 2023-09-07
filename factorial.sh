echo "Enter the number"
read n
res=1
for((i=n;i>0;i--))
do
res=$(($res*$i))
done
echo "$res"
