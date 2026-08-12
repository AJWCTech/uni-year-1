// Select Canvas
const canvas = document.querySelector("#pong"); // Declaring variable canvas as constant and returns the first element that matches a specified query selector in the document
const context = canvas.getContext("2d"); // Declaring variable context as constant and The HTMLCanvasElement.getContext() method returns a drawing context on the canvas in 2d context type
const pauseButton = document.querySelector("#pause"); // Declaring variable pauseButton as constant and returns the first element that matches a specified query selector in the document

function startGame() { // Declaring function startGame
  const startDiv = document.querySelector("#start"); // Declaring variable startDiv as constant and returns the first element that matches a specified query selector in the document
  const gameCanvas = document.querySelector("#pong") // Declaring variable gameCanvas as constant and returns the first element that matches a specified query selector in the document
  const gameOver = document.querySelector("#game-over") // Declaring variable gameOver as constant and returns the first element that matches a specified query selector in the document
  pauseButton.style.display = "block"; // Assigning the style display property of pauseButton to block so it fills the entire line.
  startDiv.style.display = "none"; // Assigning the style display property of startDiv to none so the element won't be displayed.
  gameCanvas.style.display = "block"; // Assigning the style display property of gameCanvas to block so it fills the entire line.
  gameOver.style.display = "none"; // Assigning the style display property of gameOver to none so the element won't be displayed.
  game(); // Calling function game so when button is clicked on landing page game starts.
}

function GameOver() { // Declaring function GameOver
  const startDiv = document.querySelector("#start"); // Declaring startDiv as constant, selecting document using querySelector function with div ID #start as its parameter that matches a specified query selector in the document
  const gameCanvas = document.querySelector("#pong") // Declaring gameCanvas as constant, selecting document using querySelector function with div ID #pong as its parameter that matches a specified query selector in the document
  const gameOver = document.querySelector("#game-over") // Declaring game-over as constant, selecting document using querySelector function with div ID #game-over as its parameter that matches a specified query selector in the document
  pauseButton.style.display = "none"; // Assigning the style display property of pauseButton to none so the element won't be displayed
  startDiv.style.display = "none"; // Assigning the style display property of startDiv to none so the element won't be displayed
  gameCanvas.style.display = "none"; // Assigning the style display property of gameCanvas to none so the element won't be displayed
  gameOver.style.display = "block"; // Assigning the style display property of gameOver to block so it fills the entire line.
  comp.score = 0; // Assigning comp.score variable to value of 0 to reset it for next game
  player.score = 0; // Assigning player.score to value of 0 to reset it for the next game
  game(); // Calling function game so when button is clicked on game over landing page so the game starts.
}

// Draw Shapes & Text Functions
function drawText(text, x, y, colour) { // Declaring function drawText with parameters to text, x, y, & colour
  context.fillStyle = colour; // Assigning fillStyle of getCanvas method as colour constant.
  context.font = "45px times"; // Assigning font of getCanvas method as 45px times new.
  context.fillText(text, x, y); // Assigning fillText fucntion, context getCanvas method to have parameters text, x and y
}

function drawRectangle(x, y, width, height, colour) { // Delcaring drawRectangle function with parameters x, y, height, & colour
  context.fillStyle = colour; // Assigning fillStyle of getCanvas method as colour constant.
  context.fillRect(x, y, width, height); // Assigning fillRect fucntion, context getCanvas method to have parameters x, y, width, & height.
}

function drawBall(x, y, radius, colour) { // Delcaring drawBall function with parameters x, y, radius & colour
  context.fillStyle = colour; // Assigning fillStyle of getCanvas method as colour constant.
  context.beginPath(); // Assigning getCanvas context method to call function beginPath() to draw the path of the ball
  context.arc(x, y, radius, 0, Math.PI * 2, false); // Using arc function to set getCanvas context method to create a circle using these parameters
  context.closePath(); // Assigning getCanvas context method to call function beginPath() to close the path of the ball
  context.fill(); // Assigning getCanvas context method to call function fill() to fill the balls colour
}

// Reset Ball
function ballReset() { // Delcaring ballReset function
  ball.x = canvas.width / 2; // Assigning value of ball.x to the center of canvas width
  ball.y = canvas.height / 2; // Assigning value of ball.x to center of canvas height
  ball.speed = ballspeed; // Assigning value of ball.speed to ballspeed const
  ball.velX = -ball.velX; // Assigning value of ball veloctiy to decrease to default
}

function linearInterpolation(x, y, z) {
  return x + (y - x) * z; // z=0 (x), z=1 (y)
}

let paused = false; // Declaring and setting value of paused to false

function update() { // Declaring function update
  if (paused) return; // If paused equals true then return.

  // Ball movement
  ball.x += ball.velX * ball.speed; // Ball on x axis add assignment operator and ball velocity on x axis times the ball speed
  ball.y += ball.velY * ball.speed; // Ball on y axis add assignment operator and ball velocity on x axis time the ball speed

  // Ball collision with Top & Bottom borders
  // If ball.y plus radius is greater than canvas.height or ball.y minus ball.radius is less than 0 
  if (ball.y + ball.radius > canvas.height || ball.y - ball.radius < 0) {
    ball.velY = -ball.velY; // Setting ball velocity of y axis to equal a decrement in value of itself
  }
  let playerSelected = ball.x < canvas.width / 2 ? player : comp; // Declaring playerSelected as let with the value equal to ball.x less than canvas.width divded by two using optional chaining operator to link player and computer with the ternary operator.
  if (collision(ball, playerSelected)) { // If statement calling fucntion collision and passing the values of ball & playerSelected.
    ball.velX = -ball.velX; // Setting ball velocity of x axis to decrement in value

    // Every time ball hits a paddle increment its speed
    ball.speed += padHitBallSpeed;
  }

  // Computer Movement (simple AI)
  let nextPosition = ball.y - comp.height / 2; // Declaring nextPosition value as a let so it can't be redeclared as the balls y axis minus half the computers height 
  let currentPosition = comp.y; // Declaring currentPosition value as computers y axis value
  comp.y = linearInterpolation(currentPosition, nextPosition, comp_difficulty); // Declaring comp.y to equal linearInterpolation function with the passing parameter values of currentPosition, nextPosition, comp_difficulty.

// Check Collisions
function collision(Bcol, Pcol) {
  Bcol.top = Bcol.y - Bcol.radius;    // Ball collision top equals ball.y minus radius
  Bcol.bottom = Bcol.y + Bcol.radius; // Ball collision bottom equals ball.y plus radius
  Bcol.left = Bcol.x - Bcol.radius;   // Ball collision left equals ball.x minus radius
  Bcol.right = Bcol.x + Bcol.radius;  // Ball collision right equals ball.x plus radius

  Pcol.top = Pcol.y;                  // Player collision top equals player collision y 
  Pcol.bottom = Pcol.y + Pcol.height; // PLayer collision bottom equals y plus height
  Pcol.left = Pcol.x;                 // Player collision left equals player collision x
  Pcol.right = Pcol.x + Pcol.width;   // Player collision right equals x plus width

  return ( // Return ball right greater than player left AND operator ball.bottom greater than player top AND ball left less than player right AND ball top less than player bottom
    Bcol.right > Pcol.left && Bcol.bottom > Pcol.top && Bcol.left < Pcol.right && Bcol.top < Pcol.bottom
  );
}
  // Update Score
  if (ball.x - ball.radius < 0) { // If statement for if ball.x miuns radius is less than 0
    comp.score++; // Increment computer score
    ballReset();  // Call ballReset function
  } else if (ball.x + ball.radius > canvas.width) { // Else if statement for if ball.x plus radius is greater than
    player.score++; // Increment player score
    ballReset();    // Call ballReset function
  }
  // If conditions for who will win the game
  if(comp.score == 10){ // If comp.score is equal to 10
    GameOver(); // Call GameOver function
  } else if (player.score == 10){ // Else if player.score is equal to 10
    GameOver(); // Call GameOver function
  }
}

// Player Movement
canvas.addEventListener("mousemove", (event) => { // On mousemove event in canvas
  if (paused) return; // If paused true return

  let mouseincanvas = canvas.getBoundingClientRect(); // Declaring mouse in canvas as let with the value of canvas.getBoundingCLientRect() function which returns the size of an element and its position relative to the viewport

  player.y = event.clientY - mouseincanvas.top - player.height / 2; // Assigning value of player.y to equal event.clientY minus top element of mouseincanvas minus player height divided by two
});

pauseButton.addEventListener("click", () => { // Attaches an event handler to the document for when you click on Resume/Pause button
  if (pauseButton.innerHTML === "Resume") { // If condition linking to HTML inner ID Resume
    pauseButton.innerHTML = "Pause"; // Change HTML display to pause after click
    paused = false; // Change value of paused to false
  } else { // Else condition
    pauseButton.innerHTML = "Resume"; // Change HTML display to resume after click
    paused = true; // Change value of paused to true
  }
});

// Redraw Canvas
function drawGame() {
  // Clear the Canvas
  drawRectangle(0, 0, canvas.width, canvas.height, "white");

  // Draw the score by calling the drawText function and passing value through the parameters
  drawText(player.score, canvas.width / 16, canvas.height / 18, "black");
  drawText(comp.score, (3.7 * canvas.width) / 4, canvas.height / 18, "black");

  // Draw the player & computer by calling the drawRectangle function and passing values through the parameters
  drawRectangle(player.x, player.y, player.width, player.height, player.colour);
  drawRectangle(comp.x, comp.y, comp.width, comp.height, comp.colour);

  // Draw the ball by calling the drawBall function passing values through parameters
  drawBall(ball.x, ball.y, ball.radius, ball.colour);
}

function game() { // Declaring function game to be called to draw pong game on canvas
  update(); // Calls update function below which deals with the speed of ball, top/bottom collision, paddle collision, and computer AI movements
  drawGame(); // Calls function drawGame to redraw canvas with all the game drawing functions
}
// Game loop
const FPS = 60; // Declaring FPS constant with the value of 60
setInterval(game, 1000 / FPS); // setInterval function being used to call game every 1000 seconds / FPS (60) 

// Constant variables where you can adjust game settings
const ballspeed = 1;
const padHitBallSpeed = 0.1;
const comp_difficulty = 0.1;
// Constant variables to adjust paddles
const height = 200;
const width = 20;

// Creating player constant objects
const player = {
  x: 0,
  y: canvas.height / 2 - height / 2,
  width: width,
  height: height,
  colour: "black",
  score: 0,
};
// Creating computer constant objects
const comp = {
  x: canvas.width - width,
  y: canvas.height / 2 - height / 2,
  width: width,
  height: height,
  colour: "black",
  score: 0,
};
// Creating ball constant objects
const ball = {
  x: canvas.width / 2,
  y: canvas.height / 2,
  radius: 10,
  speed: ballspeed,
  velX: 5,
  velY: 5,
  colour: "#333",
};