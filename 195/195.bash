filename='file.txt'
n=1
while read line; do
    if ((n%10 == 0)); then
        echo "$line"
    fi
    n=$((n+1))

done < $filename