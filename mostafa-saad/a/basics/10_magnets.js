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
  const n = parseInt(readline()); // Number of magnets
  let magnets = [];

  // Read magnet configurations
  for (let i = 0; i < n; i++) {
    magnets.push(readline());
  }

  // Initialize group count to 1 because the first magnet always forms a group
  let groupCount = 1;

  // Loop through magnets and count groups
  for (let i = 1; i < n; i++) {
    if (magnets[i] !== magnets[i - 1]) {
      groupCount++;
    }
  }

  // Output the number of groups
  console.log(groupCount);
};

/*
# OLD CODE

  let lines = [];
  while (currentLine < inputString.length) {
    const line = readline().trim();
    lines.push(line);
  }



  let groupsCounter = 0;

  for (let i = 1; i < lines.length; i++) {
    const firsMagnet = lines[i];
    const secondMagnet = lines[i + 1];

    if (!secondMagnet) break;

    if (firsMagnet == secondMagnet) {
      continue;
    } else {
      groupsCounter++;
    }
  }
  console.log(groupsCounter);

  ! LEARNED

  don't make nested else if (when you can make it with one if)
  if you are comparing i , i + 1 -> loop (n - 1) instead of checking the next element
*/