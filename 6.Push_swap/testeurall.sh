#!/bin/bash
clear && make re
for i in 0 1 2 3 4 5 10 11 20 42 50 100 250 500 1000
do
    bash push_swap_tester/tester.sh . $i 10
done