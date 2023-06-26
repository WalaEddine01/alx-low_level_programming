#!/bin/bash

commit_message="Changes made at $(date +"%Y-%m-%d %H:%M:%S")"

git add .
git commit -m "$commit_message"
git push
