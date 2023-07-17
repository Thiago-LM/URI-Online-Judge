import 'dart:io';

void main() {
  while (true) {
    final inputN = stdin.readLineSync();

    if (inputN != null) {
      final int n = int.parse(inputN);
      final List<String> sortedBooks = [];

      for (int i = 0; i < n; i++) {
        final input = stdin.readLineSync();

        if (input != null) {
          sortedBooks.add(input);
        }
      }

      sortedBooks.sort();
      print(sortedBooks.join('\n'));
    } else {
      break;
    }
  }
}
