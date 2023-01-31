#!/bin/bash
clear && make re
for i in 100 500 1000
do
    bash push_swap_tester/tester.sh . $i 10
done