gets.to_i==0?x=0:x=5529
gets.split(" ").each{|c|t=c.to_i;(t.abs<x.abs||t.abs==x.abs&&t>x)?(x=t):c}
puts x
