n = gets.to_i
n.times do
  t = gets.strip.split('').map(&:to_i).sort
  p t.reverse.join.to_i - t.join.to_i
end
