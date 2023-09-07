echo "Enter the limit : "
read n;
a=0
b=1
for((i=0;i<n;i++))
do
c=$(($a+$b))
echo "$a"
a=$b
b=$c
done
