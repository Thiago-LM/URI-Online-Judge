import 'dart:io';

void main() {
  final input1 = stdin.readLineSync();
  final input2 = stdin.readLineSync();

  if (input1 != null && input2 != null) {
    final int x = int.parse(input1);
    final int y = int.parse(input2);

    if (x > y) {
      for (int i = y + 1; i < x; i++) {
        if (i % 5 == 2 || i % 5 == 3) {
          print(i);
        }
      }
    } else {
      for (int i = x + 1; i < y; i++) {
        if (i % 5 == 2 || i % 5 == 3) {
          print(i);
        }
      }
    }
  }
}
