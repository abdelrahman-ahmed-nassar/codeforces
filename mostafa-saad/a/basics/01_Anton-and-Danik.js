"use strict";
process.stdin.resume();
process.stdin.setEncoding("utf-8");

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
  // Read number of games (no need for split, just a single integer)
  const games = parseInt(readline());

  // Read results
  const results = readline().trim(); // No need to split

  // Counters for Anton and Danik
  let antonCounter = 0;
  let danikCounter = 0;

  // Count victories for Anton and Danik
  for (let i = 0; i < games; i++) {
    if (results[i] === "A") {
      antonCounter++;
    } else if (results[i] === "D") {
      danikCounter++;
    }
  }

  // Determine the winner
  if (antonCounter > danikCounter) {
    console.log("Anton");
  } else if (danikCounter > antonCounter) {
    console.log("Danik");
  } else {
    console.log("Friendship");
  }
};
