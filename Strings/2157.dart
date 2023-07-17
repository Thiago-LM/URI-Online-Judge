import 'dart:io';

void main() {
  final inputC = stdin.readLineSync();

  if (inputC != null) {
    final int c = int.parse(inputC);

    for (int i = 0; i < c; i++) {
      final inputEB = stdin.readLineSync();

      if (inputEB != null) {
        final int b = int.parse(inputEB.split(' ')[0]);
        final int e = int.parse(inputEB.split(' ')[1]);
        final List<int> sequence = [];

        for (int j = b; j <= e; j++) {
          sequence.add(j);
        }

        final String temp = sequence.join('');
        final String temp2 = String.fromCharCodes(temp.runes.toList().reversed);

        final String mirror = temp + temp2;

        print(mirror);
      }
    }
  }
}
