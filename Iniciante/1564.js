var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.trim().split(/\s+/);

for (let i = 0; i < lines.length; i++) {
    if (lines[i] == 0) {
        console.log("vai ter copa!")
    } else {
        console.log("vai ter duas!")
    }
}