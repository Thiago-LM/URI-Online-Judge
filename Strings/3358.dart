import 'dart:io';

void main() {
  final inputN = stdin.readLineSync();

  if (inputN != null) {
    final int n = int.parse(inputN);

    for (int i = 0; i < n; i++) {
      final input = stdin.readLineSync();

      if (input != null) {
        final String temp =
            input.toLowerCase().replaceAll(RegExp(r'[aeiou]'), ' ');
        final List<String> temp2 = temp.split(' ');

        if (temp2.any((element) => element.length > 2)) {
          print('$input nao eh facil');
        } else {
          print('$input eh facil');
        }
      }
    }
  }
}
