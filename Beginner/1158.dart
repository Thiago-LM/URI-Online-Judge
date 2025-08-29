import 'dart:io';

void main() {
  final inputN = stdin.readLineSync();

  if (inputN != null) {
    final int n = int.parse(inputN);

    for (int i = 0; i < n; i++) {
      final inputXY = stdin.readLineSync();

      if (inputXY != null) {
        final input = inputXY.split(' ');
        int x = int.parse(input[0]);
        final int y = int.parse(input[1]);

        int sum = 0;
        int count = 0;
        while (count < y) {
          if (x % 2 != 0) {
            sum += x;
            count++;
          }
          x++;
        }

        print(sum);
      }
    }
  }
}
