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
  // Start your code from here --> array
  const [n , h] = readline().split(" ").map(Number);
  // read second line --> array
  const people = readline().split(" ").map(Number);

  // code
  let totalWidth = 0;

  // Loop through each friend's height
  for (const person of people  ) {
    if (person > h) {
      totalWidth += 2;
    } else {
      totalWidth++;
    }
  }
  console.log(totalWidth);
};
/*
How we get input?
  -> At first we need to create a txt file input.txt where we write our input
  -> Then we need to add some code inside main function
    const t = readline()
    console.log(t)
  -> Finally run command **cat input.txt | node test.js > output.txt** in terminal
Now you can see output inside output.txt file
*/
