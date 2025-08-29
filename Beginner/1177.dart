import 'dart:io';

void main() {
  final input = stdin.readLineSync();

  if (input != null) {
    final int t = int.parse(input);

    int j = 0;
    for (int i = 0; i < 1000; i++) {
      print('N[$i] = $j');
      if (j < t - 1) {
        j++;
      } else {
        j = 0;
      }
    }
  }
}
