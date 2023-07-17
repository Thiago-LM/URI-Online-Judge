import 'dart:io';

void main() {
  bool isValid = true;

  while (isValid) {
    final input = stdin.readLineSync();

    if (input != null) {
      final List<String> numbers = input.split(' ');
      final int n = int.parse(numbers[0]);
      final int m = int.parse(numbers[1]);

      if (n == 0 && m == 0) {
        isValid = false;
      } else {
        final int sum = n + m;
        final String sumString = sum.toString();
        final String sumStringWithoutZeros = sumString.replaceAll('0', '');
        print(sumStringWithoutZeros);
      }
    }
  }
}
