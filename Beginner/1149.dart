import 'dart:io';

void main() {
  final input = stdin.readLineSync();

  if (input != null) {
    final List<String> values = input.split(' ');
    final List<int> valuesInt = values.map(int.parse).toList();
    final int a = valuesInt[0];
    int n = valuesInt[1];

    if (n <= 0) {
      int control = 1;
      while (n <= 0) {
        control++;
        n = valuesInt[control];
      }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
      sum += a + i;
    }
    print(sum);
  }
}
