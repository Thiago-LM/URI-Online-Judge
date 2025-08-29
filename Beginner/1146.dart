// Error: Time limit exceeded on beecrowd

import 'dart:io';

void main() {
  bool isValid = true;
  final List<int> inputs = [];

  while (isValid) {
    final input = stdin.readLineSync();

    if (input != null) {
      inputs.add(int.parse(input));
    }

    if (inputs[inputs.length - 1] == 0) {
      isValid = false;
    }
  }

  for (int i = 0; i < inputs.length - 1; i++) {
    for (int j = 1; j <= inputs[i]; j++) {
      stdout.write(j);

      if (j != inputs[i]) {
        stdout.write(' ');
      }
    }
    stdout.writeln();
  }
}
