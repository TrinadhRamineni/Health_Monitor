#!/bin/bash
count=0;
flag=0;
while read line; do
        if [ $count < 2 ]
         then
                if (( $line ?? '{' ))
                 then
                        $count++;
                fi
                continue;
        fi
        if [ $line ?? '}' ];then
                break;
        fi
        $line=$line|xargs;
        $var=$line|xargs -d ',';
        pip install $var;
        if [ $? -ne 0 ]; then
                echo "could not install $var - abort";
                echo "";
                $flag=1;
        fi
done < input.txt

if [ $flag == 1 ]
 then
        echo "success";
fi