const options = document.querySelectorAll(".options"); // Declares variable options as constant value
let playerScore = 0; // Declaring a block scoped variable
let computerScore = 0; // Declaring a block scoped variable

options.forEach((option) => { // Calls a function for each array element
  option.addEventListener("click", function () { // Attaches an event handler to the document
    const playerInput = this.value; // Declares variable playerInput as constant value

    const computerOptions = ["Rock", "Paper", "Scissors"]; // Declares variable computerOptions as constant value
    const computerInput = computerOptions[Math.floor(Math.random() * 3)]; // Declares variable comuterInput as constant value

    updateMoves(playerInput, computerInput); // Calling function updateMoves with parameters
    compareInputs(playerInput, computerInput); // Calling function compareInputs with parameters
    updateScore(); // Calling function updateScore
    if (checkWinner()) { // Statements to be executed depending on a condition
      playerScore = computerScore = 0;
      updateScore(); // Calling function updateScore if condition is met
    }
  });
});

function updateMoves(playerInput, computerInput) { // Delcaring function updateMoves with parameters
  document.getElementById("player-move").src = `${playerInput}.svg`; // Returns the Document object for the window & Returns the element that has the ID attribute with the specified value
  document.getElementById("computer-move").src = `${computerInput}.svg`; // Returns the Document object for the window & Returns the element that has the ID attribute with the specified value
}


function compareInputs(playerInput, computerInput) { // Declaring function compareInputs with parameters
  const currentMatch = `${playerInput} vs ${computerInput}`; // Declares variable currentMatch as constant value
  // Check for Tie
  if (playerInput === computerInput) {
    alert(`${currentMatch} is a Tie`); // Displays an alert box with a message and an OK button
    return; // 	Stops the execution of a function and returns a value from that function
  }
  // Check for Rock
  if (playerInput === "Rock") {
    if (computerInput === "Scissors") {
      alert(`${currentMatch} = You Win`); // Displays an alert box with a message and an OK button
      playerScore++; // Increments (adds one to) its operand and returns a value.
    } else {
      alert(`${currentMatch} = Computer Wins`); // Displays an alert box with a message and an OK button
      computerScore++; // Increments (adds one to) its operand and returns a value.
    }
  }
  // Check for Paper
  else if (playerInput === "Paper") {
    if (computerInput === "Rock") {
      alert(`${currentMatch} = You Win`); // Displays an alert box with a message and an OK button
      playerScore++; // Increments (adds one to) its operand and returns a value.
    } else {
      alert(`${currentMatch} = Computer Wins`); // Displays an alert box with a message and an OK button
      computerScore++; // Increments (adds one to) its operand and returns a value.
    }
  }
  // Check for Scissors
  else {
    if (computerInput === "Paper") {
      alert(`${currentMatch} = You Win`); // Displays an alert box with a message and an OK button
      playerScore++; // Increments (adds one to) its operand and returns a value.
    } else {
      alert(`${currentMatch} = Computer Wins`); // Displays an alert box with a message and an OK button
      computerScore++; // Increments (adds one to) its operand and returns a value.
    }
  }
}

function updateScore() { // Declares function updateScore
  document.getElementById("player-score").textContent = playerScore; // Returns the Document object for the window & Returns the element that has the ID attribute with the specified value
  document.getElementById("computer-score").textContent = computerScore; // Returns the Document object for the window & Returns the element that has the ID attribute with the specified value
}

function checkWinner() { // Declares function checkWinner
  if (playerScore === 10 || computerScore === 10) { // If condition for if playerScore or computerScore = 10
    const winner = playerScore === 10 ? "You win the game! Congratulations!" : "Computer wins the game! Try again next time!"; // Declares variable winner as constant value
    alert(winner); // Displays an alert box with a message and an OK button
    return true; // Stops the execution of a function and returns a value from that function
  }
  return false; // Stops the execution of a function and returns a value from that function
}