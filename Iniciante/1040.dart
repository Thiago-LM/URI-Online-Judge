import 'dart:io';

void main() {
  final input = stdin.readLineSync();

  if (input != null) {
    final List<String> list = input.split(' ');
    final List<double> listDouble = list.map((e) => double.parse(e)).toList();
    final double media = ((listDouble[0] * 2) +
            (listDouble[1] * 3) +
            (listDouble[2] * 4) +
            (listDouble[3] * 1)) /
        10;
    print('Media: ${media.toStringAsFixed(1)}');
    if (media >= 7.0) {
      print('Aluno aprovado.');
    } else if (media < 5.0) {
      print('Aluno reprovado.');
    } else {
      print('Aluno em exame.');
      final double notaExame = double.parse(stdin.readLineSync() ?? '0.0');
      print('Nota do exame: $notaExame');
      final double mediaFinal = (media + notaExame) / 2;
      if (mediaFinal >= 5.0) {
        print('Aluno aprovado.');
      } else {
        print('Aluno reprovado.');
      }
      print('Media final: $mediaFinal');
    }
  } else {
    return;
  }
}
