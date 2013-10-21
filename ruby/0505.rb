class Questionnaire
  def solve()
    output_file = open('output.txt', 'w')
    File::open('input.txt') do |f|
      first_line = f.gets
      n, m = first_line.split.map(&:to_i)
      results = Array.new(m, 0)
      n.times do
        line = f.gets.split
        (0...m).each {|i| results[i] += 1 if line[i] == '1'}
      end
      tmp = (1..m).to_a.zip(results)

    end
  end
end

test = Questionnaire.new
test.solve
