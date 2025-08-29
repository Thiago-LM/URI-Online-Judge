var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let salary = Number(lines[1])
let totalVendas = Number(lines[2])

let total = salary + (totalVendas * 0.15)

console.log("TOTAL = R$ " + total.toFixed(2))