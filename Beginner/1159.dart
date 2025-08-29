import 'dart:io';

void main() {
  var input = stdin.readLineSync();

  while (input != null && input.compareTo('0') != 0) {
    int x = int.parse(input);

    if (x != 0) {
      int sum = 0;
      int count = 0;
      while (count < 5) {
        if (x % 2 == 0) {
          sum += x;
          count++;
        }
        x++;
      }

      print(sum);
    }

    input = stdin.readLineSync();
  }
}
