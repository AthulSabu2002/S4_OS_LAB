echo "1.Add"
echo "2.Sub"
echo "3.Mul"
echo "4.Div"
echo "5.Exit"
echo "Enter choice "
read choice
echo "Enter the first number "
read a
echo "Enter the second number "
read b
case $choice in
1)res=$(($a+$b))
echo "Sum = $res"
;;
2)res=$(($a-$b))
echo "Difference = $res"
;;
3)res = $(($a*$b))
echo "Product is $res"
;;
4)res = $(($a/$b))
echo "Quotient is $res"
;;
5)echo "Exit"
;;
esac
