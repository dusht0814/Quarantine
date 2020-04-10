#!/bin/sh
git checkout master
git status 
echo "Please enter the name of your branch"
read name
git branch $name
git checkout $name