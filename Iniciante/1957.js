let input = require('fs').readFileSync('/dev/stdin', 'utf8');

let V = Number(input)

console.log(V.toString(16).toUpperCase())