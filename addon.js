/*********************************************************************
 * NAN - Native Abstractions for Node.js
 *
 * Copyright (c) 2015 NAN contributors
 *
 * MIT License <https://github.com/nodejs/nan/blob/master/LICENSE.md>
 ********************************************************************/

var addon = require('./build/Release/addon');
var calculations = process.argv[2] || 100000000;

function printResult(type, pi, ms) {
  console.log(type, 'method:')
  console.log('\tπ ≈ ' + pi
  		+ ' (' + Math.abs(pi - Math.PI) + ' away from actual)')
	console.log('\tTook ' + ms + 'ms');
	console.log()
}

function runSync() {
  var start = Date.now();
  // Estimate() will execute in the current thread,
  // the next line won't return until it is finished
	var result = addon.calculateSync(calculations);
  printResult('Sync', result, Date.now() - start)
}

// runSync()

module.exports = addon;
