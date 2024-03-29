#!/bin/bash

cat << EOF
$(echo -e "\e[1m")Usage:$(echo -e "\e[0m") trillian command [arguments]

$(echo -e "\e[1m")Description:$(echo -e "\e[0m")
Trillian is a tool to manage projects using the ft_framework.
If you want to learn more go to https://github.com/brenohildebrand/ft_framework.

$(echo -e "\e[1m")Commands:$(echo -e "\e[0m")
$(echo -e "\e[1m")help:$(echo -e "\e[0m")
Display this information.

$(echo -e "\e[1m")init:$(echo -e "\e[0m")
Initialize the environment variables and create the folder structure for a new project.

$(echo -e "\e[1m")build:$(echo -e "\e[0m")
Build your code.

$(echo -e "\e[1m")norm:$(echo -e "\e[0m")
Check if your code has norm errors.

$(echo -e "\e[1m")run:$(echo -e "\e[0m")
Build your code and run it in the current mode. You can provide arguments.

$(echo -e "\e[1m")debug:$(echo -e "\e[0m")
Run your code with gdb. You can provide arguments.
If you are using vscode it will run the debugger inside it.

$(echo -e "\e[1m")test:$(echo -e "\e[0m")
Run the tests.

$(echo -e "\e[1m")version:$(echo -e "\e[0m")
Display the current version of the framework.

$(echo -e "\e[1m")submit:$(echo -e "\e[0m")
Submit your code to vogsphere.
EOF