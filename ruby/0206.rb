while
  l = gets.to_i
  exit if l == 0
  s = 0
  ans = 0
  12.times do |i|
    m, n = gets.split.map(&:to_i)
    if l > 0
      l -= m - n
      ans = i + 1 if l <= 0
    end
  end
  puts ((ans > 0) ? ans : 'NA')
end
