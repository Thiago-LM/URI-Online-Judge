var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

let N = Number(lines[0]);

for (let i = 0; i < N; i++) {
    if (i + 1 === N) {
        process.stdout.write("Ho!\n");
        break;
    }
    process.stdout.write("Ho ");
}