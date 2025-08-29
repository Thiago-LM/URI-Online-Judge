let input = require('fs').readFileSync('/dev/stdin', 'utf8');
let numbers = input.split(/\s+/).map((val) => Number(val));

let X = numbers[0]
let Y = numbers[1]

switch (X) {
    case 1:
        console.log(`Total: R$ ${(4 * Y).toFixed(2)}`)
        break;
    case 2:
        console.log(`Total: R$ ${(4.5 * Y).toFixed(2)}`)
        break;
    case 3:
        console.log(`Total: R$ ${(5 * Y).toFixed(2)}`)
        break;
    case 4:
        console.log(`Total: R$ ${(2 * Y).toFixed(2)}`)
        break;
    case 5:
        console.log(`Total: R$ ${(1.5 * Y).toFixed(2)}`)
        break;
    default:
        break;
}