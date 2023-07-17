import 'dart:convert';
import 'dart:io';

String? readInputSync({Encoding encoding = systemEncoding}) {
  final List<int> input = [];
  while (true) {
    int byte = stdin.readByteSync();
    if (byte < 0) {
      if (input.isEmpty) return null;
      break;
    }
    input.add(byte);
  }
  return encoding.decode(input);
}

void main() {
  final input = readInputSync();

  if (input != null) {
    final List<int> list = input.split('\n').map((e) => int.parse(e)).toList();
    final List<int> reversedList = list.reversed.toList();

    for (int i = 0; i < reversedList.length; i++) {
      print('N[$i] = ${reversedList[i]}');
    }
  }
}
