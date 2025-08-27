var input = require('fs').readFileSync('/dev/stdin', 'utf8');

let phrase = "Life is not a problem to be solved, but a reality to be experienced."

let A = Number(input);

for (let i = 0; i < A; i++) {
    process.stdout.write(`${phrase[i].toUpperCase()}`);
}

process.stdout.write('\n');