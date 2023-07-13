import 'dart:io';

void main() {
  final String? input = stdin.readLineSync();

  if (input != null) {
    final List<String> list = input.split(' ');
    final List<int> listInt = list.map((e) => int.parse(e)).toList();

    int hora = listInt[2] - listInt[0];
    int minuto = listInt[3] - listInt[1];

    if (minuto < 0) {
      minuto += 60;
      hora--;
    }

    if (hora < 0) {
      hora += 24;
    }

    if (listInt[2] == listInt[0] && listInt[3] == listInt[1]) {
      print('O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)');
    } else {
      print('O JOGO DUROU $hora HORA(S) E $minuto MINUTO(S)');
    }
  } else {
    return;
  }
}
