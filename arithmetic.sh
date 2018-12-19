#!/bin/bash

a=$1
b=$2

add=$((a+b))
sub=$((a-b))
mul=$((a*b))
div=$((a/b))

echo "$a+$b=$add"
echo "$a-$b=$sub"
echo "$a*$b=$mul"
echo "$a/$b=$div"
