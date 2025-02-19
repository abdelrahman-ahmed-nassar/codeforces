"use strict";
process.stdin.resume();
process.stdin.setEncoding("utf-8");

const printLine = (x) => {
  console.log(x);
};

const print = (x) => {
  process.stdout.write(x);
};

let inputString = "";
let currentLine = 0;

process.stdin.on("data", (inputStdin) => {
  inputString += inputStdin;
});

process.stdin.on("end", () => {
  inputString = inputString.split("\n");
  main();
});

const readline = () => {
  return inputString[currentLine++];
};

const main = () => {
    const wordsNumber = +readline();
    let words = [];
    while (currentLine < inputString.length) {
      const word = readline().trim();
      words.push(word);
    }

    for (const word of words) {
      if (word.length <= 10) {
        console.log(word);
      } else {
        console.log(`${word.slice(0, 1)}${word.length - 2}${word.slice(-1)}`);
      }
    }
};
