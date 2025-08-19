var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.trim().split(/\s+/);

lines.splice(0, 1)

let X = lines.map((val) => parseInt(val))

let smallestValue = X.reduce((prev, current) => prev < current ? prev : current)

console.log("Menor valor: " + smallestValue)
console.log("Posicao: " + X.indexOf(smallestValue))