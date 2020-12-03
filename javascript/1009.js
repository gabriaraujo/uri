var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var num = parseInt(lines.shift());
var hour = parseInt(lines.shift());
var salary_per_hour = parseFloat(lines.shift());

console.log('NUMBER = ' + num);
console.log('SALARY = U$ ' + (hour * salary_per_hour).toFixed(2));