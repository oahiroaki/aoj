MAP = {
 '1' => ['.', ',', '!', '?', ' '],
 '2' => ['a', 'b', 'c'],
 '3' => ['d', 'e', 'f'],
 '4' => ['g', 'h', 'i'],
 '5' => ['j', 'k', 'l'],
 '6' => ['m', 'n', 'o'],
 '7' => ['p', 'q', 'r', 's'],
 '8' => ['t', 'u', 'v'],
 '9' => ['w', 'x', 'y', 'z'],
}

def decode(str)
  msg = ''
  keymap_has = ->(i) { return MAP.key?(str[i]) ? true : false }
  finish = ->(i) { return str.length > i ? false : true }
  addcnt = ->(i, cnt) { return (cnt >= (MAP[str[i]]).length - 1) ? 0 : cnt + 1 }

  parser = ->(i, cnt, found) do
    unless finish[i]
      if keymap_has[i]
        cnt = addcnt[i, cnt]
        found ? parser[i + 1, cnt, true] : parser[i + 1, 0, true]
      else
        msg += MAP[str[i - 1]][cnt] if found
        parser[i + 1, -1, false]
      end
    end
  end

  parser[0, -1, false]

  return msg
end

tests_number = STDIN.gets.to_i
tests_number.times do
  puts decode(STDIN.gets.chomp)
end
