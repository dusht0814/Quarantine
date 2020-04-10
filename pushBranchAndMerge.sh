#!/bin/sh
git status 
echo "Do you want to add all files to the staging area or not?"
echo "Enter yes or no"
read  response
if [ $response == "yes" ]
	then 
		echo "adding all the modified files to the staging area...."
		git add .
	else
		exit 1
fi
username = 'dusht0814'
password = 'allhailunclee_bada@77'
echo "Please enter a  commit message:"
read message
git commit -m "$message"
echo "Do you want to push the commits to your branch?"
echo "Enter yes or no"
read  response
if [ $response == "yes" ]
	then 
		echo "Please enter the branch name you need to push changes"
		read branchName
		echo "Pushing the commits to your branch $branchName"
		git push --repo https://"$username":"$password"@github.com/Quarantine.git/ 
	else
		exit 1
fi
