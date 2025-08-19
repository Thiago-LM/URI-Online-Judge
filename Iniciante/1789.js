var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.trim().split('\n');

for (let i = 0; i < lines.length; i = i + 2) {
    let V = lines[i + 1].split(' ').map((val) => parseInt(val))

    let biggestValue = V.reduce((prev, current) => prev > current ? prev : current)

    if (biggestValue < 10) {
        console.log("1")
    } else if (biggestValue >= 10 && biggestValue < 20) {
        console.log("2")
    } else {
        console.log("3")
    }
}