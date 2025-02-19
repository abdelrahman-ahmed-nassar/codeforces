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
  let [a, b] = readline().split(" ").map(Number);

  // a <= b
  // every year -> a = 3 * a
  // every year -> b = 2 * b

  // when a > b


  // code
  let counter = 0;
  while(a <= b) {
    a = 3 * a;
    b = 2 * b;
    counter++;
  }
  console.log(counter)
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
*/
