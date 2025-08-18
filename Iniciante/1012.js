var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split(/\s+/);

let pi = 3.14159

let A = Number(lines[0])
let B = Number(lines[1])
let C = Number(lines[2])

let areaTri = (A * C) / 2
let areaCir = pi * (C * C)
let areaTra = ((A + B) * C) / 2
let areaQua = B * B
let areaRec = A * B

console.log("TRIANGULO: " + areaTri.toFixed(3))
console.log("CIRCULO: " + areaCir.toFixed(3))
console.log("TRAPEZIO: " + areaTra.toFixed(3))
console.log("QUADRADO: " + areaQua.toFixed(3))
console.log("RETANGULO: " + areaRec.toFixed(3))