commitn=$(cat private/commit.txt)
let commitn=$commitn+1
echo $commitn > private/commit.txt
git init 
git add .
git commit -m "Commit number: $commitn"
git remote add origin https://github.com/pl-Apps/plOS.git
git push -u origin master
git push origin master
echo Commit number: $commitn
