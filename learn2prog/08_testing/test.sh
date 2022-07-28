#!/bin/bash

indices=(1 2 3 4)
for i in ${indices[@]};
do
    num=$(< input.$i)
    echo "Testing for case $i with input $num"
    echo "On correct code"
    ./isPrime-correct $num
    echo ""
    echo "On broken code"
    ./isPrime-broken$i $num
    echo ""
done
exit 0
