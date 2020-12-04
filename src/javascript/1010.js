var input = require('fs').readFileSync('/dev/stdin', 'utf8');
var lines = input.split('\n');

var first = lines.shift().split(' ');
var second = lines.shift().split(' ');

var n1 = parseInt(first[1]);
var v1 = parseFloat(first[2]);

var n2 = parseInt(second[1]);
var v2 = parseFloat(second[2]);

var total = n1 * v1 + n2 * v2;
console.log('VALOR A PAGAR: R$ ' + (total).toFixed(2));