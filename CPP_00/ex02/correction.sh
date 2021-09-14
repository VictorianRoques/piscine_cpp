#!bin/bash

./Account > test && diff <(cat test | cut -c 19-) <(cat log | cut -c 19-)
