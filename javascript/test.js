var stdin = process.stdin;

stdin.resume();
var count = 0;
var num = 0;
var str = "";
stdin.on('data', function(key) {
  if(count == 0) {
    num = key;
  }
  else {
    str = key;
  }
  process.stdout.write(key);
  count++;
});

stdin.on('end', function() {});
