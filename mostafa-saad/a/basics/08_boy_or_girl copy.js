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

  // Start your code from here --> array of numbers
  const t = readline().split("");

  // code
  const unique = new Set(t);
  const uniqueArr = [...unique];

  if (uniqueArr.length % 2 == 0) {
    console.log("CHAT WITH HER!");
  }else {
    console.log("IGNORE HIM!");
  }
};