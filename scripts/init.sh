#!/bin/bash

cd $OLDPWD

mkdir -p build
mkdir -p docs
mkdir -p source
mkdir -p source/processes
mkdir -p source/types
mkdir -p tests

touch README.md
echo '<h1 align="center"><b> 42</b></h1>

This project was developed during my journey at [42 São Paulo](https://github.com/42sp). If you want to see all of them checkout [this](https://github.com/brenohildebrand/42) repository. Enjoy!

</br>
' > README.md

exit 0