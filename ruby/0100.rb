h = {}
gets.to_i.times do
  d = gets.split.map(&:to_i)
  unless h.has_key?(d[0])
    h[d[0]] = d[1] * d[2]
  else
    h[d[0]] += d[1] * d[2]
  end
end

t = h.map {|k, v| k if v >= 1000000}.select {|x| x != nil}
if t.all? {|x| x == nil}
  puts "NA"
else
  t.each {|s| puts s}
end
