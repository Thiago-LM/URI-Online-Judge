var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let N = Number(lines[0])

let A = parseInt(N / 100)
let B = parseInt((N - A * 100) / 50)
let C = parseInt((N - (A * 100) - (B * 50)) / 20)
let D = parseInt((N - (A * 100) - (B * 50) - (C * 20)) / 10)
let E = parseInt((N - (A * 100) - (B * 50) - (C * 20) - (D * 10)) / 5)
let F = parseInt((N - (A * 100) - (B * 50) - (C * 20) - (D * 10) - (E * 5)) / 2)
let G = parseInt((N - (A * 100) - (B * 50) - (C * 20) - (D * 10) - (E * 5) - (F * 2)) / 1)

console.log(N)
console.log(A + " nota(s) de R$ 100,00")
console.log(B + " nota(s) de R$ 50,00")
console.log(C + " nota(s) de R$ 20,00")
console.log(D + " nota(s) de R$ 10,00")
console.log(E + " nota(s) de R$ 5,00")
console.log(F + " nota(s) de R$ 2,00")
console.log(G + " nota(s) de R$ 1,00")