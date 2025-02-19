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
  const [k, s] = readline().trim().split(" ").map(Number);


  const temp = [];
  for (let z = 0; z < k; z++) {
    for (let y = 0; y < k; y++) {
      for (let x = 0; x <= s; x++) {
        if (x + y + z === s) {
          temp.push([x, y, z]);
        }
      }
    }
  }

  console.log(temp.length);

};
/*
How we get input?
  -> At first we need to create a txt file input.txt where we write our input
  -> Then we need to add some code inside main function
    const t = readline()
    console.log(t)
  -> Finally run command 
    **cat input.txt | node test.js > output.txt**
    **node test.js < input.txt**
Now you can see output inside output.txt file

get multiple line inputs
  let lines = [];
  while (currentLine < inputString.length) {
    const line = readline().trim().split(" ").map(Number);
    lines.push(line);
  }
*/
