line = raw_input()
line_list = list(line)
if line_list[0] == "i":
    solve_inner()
elif line_list[0] == "u":
    solve_unit()
else:
    print "Data is not correct"
