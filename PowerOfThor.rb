STDOUT.sync=true;x,y,i,j=gets.split(" ").map{|x|x.to_i};while(j>y)?(print"N";j-=1):j;(j<y)?(print"S";j+=1):j;(i>x)?(print"W";i-=1):j;(i<x)?(print"E";i+=1):j;puts""end
