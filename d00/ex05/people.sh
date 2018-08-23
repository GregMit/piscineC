ldapsearch -LLL -Q "(uid=z*)" cn | grep "cn" | sort -d -r -f | cut -c 5-
