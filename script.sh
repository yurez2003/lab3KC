#!/bin/bash
cat /proc/cpuinfo | grep flag | head -1
cd /home/grid/testbed/tb077/lab/vec_samples/src 
ml icc
array=( "-xSSE2" "-xSSE3" "-xAVX"  )
for a in "${array[@]}"; do
  for b in {1..3}; do
    y1=$(date +%M)
    y2=$(date +%S)
    echo icpc -std=c++17 -O$b $a lab3.cpp -o f-$y1-$y2
    icpc -std=c++17 -O$b $a lab3.cpp -o f-$y1-$y2
    echo "$a $b:"
    time ./f-$y1-$y2
  done 
done