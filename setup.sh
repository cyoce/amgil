crontab -l > crontemp
echo '@reboot ~/start.sh' >> crontemp
crontab crontemp
rm contemp

