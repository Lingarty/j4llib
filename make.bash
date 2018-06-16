#!/bin/bash/
#clang -c src/*.c
#clang -shared -o libj4l.so *.o
#rm -rf *.o
#mv libj4l.so build/ 

clang src/*.c src/*.h
rm src/*.gch