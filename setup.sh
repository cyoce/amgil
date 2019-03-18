crontab -l > ~/crontemp.txt
echo '@reboot ~/start.sh' >> ~/crontemp.txt
crontab ~/crontemp.txt
rm ~/contemp.txt
