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
    const [shovelCost, UniquePaper] = readline().trim().split(" ").map(Number);

  //237 7

  //! CODE

  // ((shovelCost * Numbers) - UniquePaper)  % 10 === 0
  // ((shovelCost * Numbers))  % 10 === 0

  let totalCost = 0;
  let done = false;
  let counter = 1;

  while (!done) {
    if ((shovelCost * counter - UniquePaper) % 10 === 0) {
      done = true;
    }else if ((shovelCost * counter) % 10 === 0) {
      done = true;
    }else {
      counter++;
    }
    totalCost += shovelCost;
  }

  console.log(counter);
};
