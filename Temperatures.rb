gets.to_i==0?x=0:x=5529
for c in gets.split(" ")
t=c.to_i
(t.abs<x.abs)?(x=t):(t.abs==x.abs and t>x)?(x=t):c end
puts x
