var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let N = Number(lines[0])

let A = N % 100
let B = A % 50
let C = B % 20
let D = C % 10
let E = D % 5
let F = E % 2
let G = F % 1
let H = G % 0.5
let I = H % 0.25
let J = I % 0.1
let K = J % 0.05

console.log("NOTAS:")
console.log(parseInt(N / 100) + " nota(s) de R$ 100.00")
console.log(parseInt(A / 50) + " nota(s) de R$ 50.00")
console.log(parseInt(B / 20) + " nota(s) de R$ 20.00")
console.log(parseInt(C / 10) + " nota(s) de R$ 10.00")
console.log(parseInt(D / 5) + " nota(s) de R$ 5.00")
console.log(parseInt(E / 2) + " nota(s) de R$ 2.00")
console.log("MOEDAS:")
console.log(parseInt(F / 1) + " moeda(s) de R$ 1.00")
console.log(parseInt(G / 0.5) + " moeda(s) de R$ 0.50")
console.log(parseInt(H / 0.25) + " moeda(s) de R$ 0.25")
console.log(parseInt(I / 0.1) + " moeda(s) de R$ 0.10")
console.log(parseInt(J / 0.05) + " moeda(s) de R$ 0.05")
console.log(parseInt(K.toFixed(3) / 0.01) + " moeda(s) de R$ 0.01")