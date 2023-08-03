#!/bin/bash
git add .
git reset -- a2.sh
git commit -m "changes on $(date +'%Y-%m-%d %H:%M:%S')"
git push
