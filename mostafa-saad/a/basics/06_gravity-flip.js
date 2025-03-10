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
  const t = readline().split(" ").map(Number);
  const n = readline().split(" ").map(Number);

  // code
  console.log(n.sort((a , b) => {
    if (a > b) return 1 ;
    if (a < b) return -1 ;
  }).join(" "))
};
