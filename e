#!/bin/bash

command=$@
if [ -z "$command" ]; then
    echo "No command provided"
    exit 1
fi

eval $command
fc -R ~/.zsh_history
