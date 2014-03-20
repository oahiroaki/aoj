while
  hands = Array.new(5)
  5.times do |idx|
    hand = gets.to_i
    exit if hand == 0
    hands[idx] = hand
  end
  uniqs = hands.uniq
  answers = case uniqs.length
  when 1, 3
    Array.new(5, 3)
  when 2
    if uniqs.include? 1
      if uniqs.include? 3
        hands.map {|hand| (hand == 1) ? 2 : 1 }
      else
        hands.map {|hand| (hand == 1) ? 1 : 2 }
      end
    else
      hands.map {|hand| (hand == 2) ? 1 : 2 }
    end
  end
  answers.each { |ans| puts ans }
end
