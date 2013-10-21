def solve(str)
  max, min = 0, 0
  numbers = str.split.map(&:to_i)

  numbers.each_cons(2) do |n|
    val = n[0] - n[1]
    max = val if val > max
    min = val if val < min
  end
  puts "#{-min} #{max}"
end
num = STDIN.gets.to_i
num.times do
  STDIN.gets
  line = STDIN.gets
  solve(line)
end
