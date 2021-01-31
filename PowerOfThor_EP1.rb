STDOUT.sync = true
a,b,c,d= gets.split(" ").collect { |x| x.to_i }

while 1
while b>d and a>c
  puts "SE"
  d+=1
  c+=1
 end
while b<d and a>c
  puts "NE"
  d-=1
  c+=1
 end
while b>d and a<c
  puts "SW"
  d+=1
  c-=1
 end
while b<d and a<c
  puts "NW"
  d-=1
  c-=1
 end
while a<c
  c-=1
  puts "W"
 end
while a>c
  c+=1
  puts "E"
 end
while b<d
  d-=1
  puts "N"
 end
while b>d
  d+=1
  puts "S"
end
end
