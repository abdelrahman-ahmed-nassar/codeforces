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
  const teamsNumber = readline();
  let teams = [];
  while (currentLine < inputString.length) {
    const line = readline().trim().split(" ").map(Number);
    teams.push(line);
  }

  //! CODE

  let counter = 0;
  for (let i = 0; i < teamsNumber; i++) {
    // loop over teams
    const hostTeam = teams[i];

    for (let j = 0; j < teamsNumber; j++) {
      // loop over guest
      const guestTeam = teams[j];
      if (i === j) continue;

      if (hostTeam[0] === guestTeam[1]) {
        counter++;
      }
    }
  }

  console.log(counter);
};
