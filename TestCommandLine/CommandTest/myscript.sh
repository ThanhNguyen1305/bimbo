./main.exe 1 2
count=`grep -c "Hello" output.txt`
if [ $count -eq 1 ]
then 
    echo "Test PASS"
else
    echo "Test FAIL"
fi