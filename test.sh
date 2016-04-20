#!/bin/bash
echo "Run tests:"
echo "Test #1:" && ./rotate.o 3
sleep 1
echo "Test #2:" && ./rotate.o
sleep 1
echo "Test #3:" && ./rotate.o 3 6
sleep 1
echo "Test #4:" && ./rotate.o -1
sleep 1
echo "Test #5:" && ./rotate.o "test"
sleep 1
