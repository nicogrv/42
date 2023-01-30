#!/bin/bash
clear && make re
for i in 1000
do
    bash push_swap_tester/tester.sh . $i 50
done