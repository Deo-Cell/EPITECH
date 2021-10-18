#!/bin/bash

cut -d ";" -f 3 | grep -c -i "$1"
