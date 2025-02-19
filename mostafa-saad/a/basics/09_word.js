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
  const word = readline().trim();

  // code

  let capitalCounter = 0;
  let smallCounter = 0;

  for (let i = 0; i < word.length; i++) {
    const element = word[i];
    if(element.toUpperCase() === element) {
      capitalCounter++;
    }else {
      smallCounter++;
    }
  }
  
    if (capitalCounter > smallCounter) {
      console.log(word.toUpperCase());
    } else {
      console.log(word.toLowerCase());
    }
};

