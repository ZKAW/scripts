#!/bin/bash

if [ "$#" -ne 2 ]; then
    echo "Usage: $(basename "$0") <full_path_to_file> <new_file_name>"
    exit 1
fi

full_path="$1"
new_file_name="$2"

directory=$(dirname "$full_path")

if [ ! -e "$full_path" ]; then
    echo "Error: File '$full_path' does not exist."
    exit 1
fi

new_full_path="$directory/$new_file_name"

mv "$full_path" "$new_full_path"

if [ $? -ne 0 ]; then
    echo "Error: Could not rename the file."
    exit 1
fi
