#!/bin/bash
g++ -std=c++11 -Wall -Wextra QueryResult.cpp TextQuery.cpp main.cpp -o main

valgrind --tool=memcheck --leak-check=full -v ./main
