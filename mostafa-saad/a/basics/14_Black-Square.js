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
  const caloriesPerStrip = readline().trim().split(" ").map(Number);
  const movements = readline().trim().split("").map(Number);
  let calories = 0;

  for (let i = 0; i < movements.length; i++) {
    switch (movements[i]) {
      case 1:
        calories += caloriesPerStrip[0];
        break;
      case 2:
        calories += caloriesPerStrip[1];
        break;
      case 3:
        calories += caloriesPerStrip[2];
        break;
      case 4:
        calories += caloriesPerStrip[3];
        break;
      default:
        break;
    }
  }

  console.log(calories);
};
