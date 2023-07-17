import 'dart:io';

void main() {
  final inputN = stdin.readLineSync();

  if (inputN != null) {
    final int n = int.parse(inputN);

    for (var i = 0; i < n; i++) {
      final input = stdin.readLineSync();

      if (input != null) {
        final List<String> values = input.split(' ');
        final int x = int.parse(values[0]);
        final int y = int.parse(values[1]);

        final int rafael = (3 * x) * (3 * x) + (y * y);
        final int beto = 2 * (x * x) + (5 * y) * (5 * y);
        final int carlos = -100 * x + (y * y * y);

        if (rafael > beto && rafael > carlos) {
          print('Rafael ganhou');
        } else if (beto > rafael && beto > carlos) {
          print('Beto ganhou');
        } else {
          print('Carlos ganhou');
        }
      }
    }
  }
}
