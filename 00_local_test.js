"use strict";

const printLine = (x) => {
  console.log(x);
};

const print = (x) => {
  process.stdout.write(x);
};

// Manually set input for debugging
let inputString = `4 3`;

// Split inputString by line breaks so that each line is separate
inputString = inputString.split("\n");

let currentLine = 0;

const readline = () => {
  return inputString[currentLine++].trim();
};

const main = () => {
  const [passwordLen, distincSymbols] = readline().trim().split(" ").map(Number);

  for (let i = 0; i < passwordLen; i++) {
    // only lower case


    

    
  }
};

main();
