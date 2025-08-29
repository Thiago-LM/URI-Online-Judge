// Error: Wrong answer (0%)

import 'dart:io';

void main() {
  final input = stdin.readLineSync();

  if (input != null) {
    double t = double.parse(input);

    print('N[0] = ${t.toStringAsFixed(4)}');
    for (int i = 1; i < 100; i++) {
      t = t / 2;
      print('N[$i] = ${t.toStringAsFixed(4)}');
    }
  }
}
