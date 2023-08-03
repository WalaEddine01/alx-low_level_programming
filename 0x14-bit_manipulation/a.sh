#!/bin/bash
git add .
read wal
git commit -m "$wal"
git push
