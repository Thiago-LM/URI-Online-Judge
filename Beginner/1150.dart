import 'dart:io';

void main() {
  final inputX = stdin.readLineSync();
  final inputZ = stdin.readLineSync();

  if (inputX != null && inputZ != null) {
    final int x = int.parse(inputX);
    int z = int.parse(inputZ);
    while (x >= z) {
      final temp = stdin.readLineSync();
      if (temp != null) z = int.parse(temp);
    }

    int sum = 0;
    int count = 0;
    while (sum < z) {
      sum += x + count;
      count++;
    }

    print(count);
  }
}
