const canvas = document.querySelector('canvas') // Declaring variable canvas as constant and returns the first element that matches a specified CSS selector(s) in the document

const context = canvas.getContext('2d')         // Declaring variable context as constant and The HTMLCanvasElement.getContext() method returns a drawing context on the canvas in 2d context type

canvas.width = innerWidth                       // Assigning canvas.width to have the innerWidth property value which returns the width of a window's content area.
canvas.height = innerHeight                     // Assigning canvas.height to have the innerHeight property value which returns the height of a window's content area.

const ScoreElement = document.querySelector('#ScoreElement') // Declaring variable SoreElement as constant and returns the first element that matches a specified CSS selector(s) in the document
const StartGame = document.querySelector('#StartGame')       // Declaring variable StartGame as constant and returns the first element that matches a specified CSS selector(s) in the document
const StartMenu = document.querySelector('#StartMenu')       // Declaring variable StartMenu as constant and returns the first element that matches a specified CSS selector(s) in the document
const MenuScore = document.querySelector('#MenuScore')       // Declaring variable MenuScore as constant and returns the first element that matches a specified CSS selector(s) in the document

class Player {                       // Declaring class Player, JavaScript Classes are templates for JavaScript Objects.
  constructor(x, y, radius, color) { // Constructor method used to initialize object properties with the four initial properties of x, y, radius & colour
    this.x = x                       // Use of this. keyword, this. refers to the object in this case x
    this.y = y                       // Use of this. keyword, this. refers to the object in this case y
    this.radius = radius             // Use of this. keyword, this. refers to the object in this case radius
    this.color = color               // Use of this. keyword, this. refers to the object in this case color
  }
  draw() {                                                          // Declaring p5.js draw function
    context.beginPath()                                             // Begins a path, or resets the current path
    context.arc(this.x, this.y, this.radius, 0, Math.PI * 2, false) // Creates an arc/curve (used to create circles, or parts of circles) with parameters x, y, radius, 0 for the start angle, float of Math.PI * 2 & false for value of draw counter clockwise as I am drawing a circle.
    context.fillStyle = this.color                                  // Sets or returns the color, gradient, or pattern used to fill the drawing
    context.fill()                                                  // Fills the current drawing (path)
  }
}

class Projectile {                             // Declaring class Projectile, JavaScript Classes are templates for JavaScript Objects.
  constructor(x, y, radius, color, velocity) { // Constructor method used to initialize object properties with the four initial properties of x, y, radius, colour and velocity
    this.x = x                                 // Use of this keyword, this. refers to the object in this case x
    this.y = y                                 // Use of this keyword, this. refers to the object in this case y
    this.radius = radius                       // Use of this keyword, this. refers to the object in this case radius
    this.color = color                         // Use of this keyword, this. refers to the object in this case color
    this.velocity = velocity                   // Use of this keyword, this. refers to the object in this case velocity
  }
  draw() {                                                          // Declaring draw function
    context.beginPath()                                             // Begins a path, or resets the current path
    context.arc(this.x, this.y, this.radius, 0, Math.PI * 2, false) // Creates an arc/curve (used to create circles, or parts of circles) with parameters x, y, radius, 0 for the start angle, float of Math.PI * 2 & false for value of draw counter clockwise as I am drawing a circle.
    context.fillStyle = this.color                                  // Sets or returns the color, gradient, or pattern used to fill the drawing
    context.fill()                                                  // Fills the current drawing (path)
  }

  update() {                           // Declaring update function
    this.draw()                        // Calling draw function using this. keyword
    this.x = this.x + this.velocity.x  // Updating values of this.x to equal this.x + this.velocity.x
    this.y = this.y + this.velocity.y  // Updating values of this.y to equal this.y + this.velocity.y
  }
}

class Enemy {                                  // Declaring class Enemy, JavaScript Classes are templates for JavaScript Objects.
  constructor(x, y, radius, color, velocity) { // Constructor Method used to initialize object properties with the four initial properties of x, y, radius, colour and velocity
    this.x = x                                 // Use of this keyword, this. refers to the object in this case x
    this.y = y                                 // Use of this keyword, this. refers to the object in this case y
    this.radius = radius                       // Use of this keyword, this. refers to the object in this case radius
    this.color = color                         // Use of this keyword, this. refers to the object in this case color
    this.velocity = velocity                   // Use of this keyword, this. refers to the object in this case velocity
  }
  draw() {                                                          // Declaring draw function
    context.beginPath()                                             // Begins a path, or resets the current path
    context.arc(this.x, this.y, this.radius, 0, Math.PI * 2, false) // Creates an arc/curve (used to create circles, or parts of circles) with parameters x, y, radius, 0 for the start angle, float of Math.PI * 2 & false for value of draw counter clockwise as I am drawing a circle.
    context.fillStyle = this.color                                  // Sets or returns the color, gradient, or pattern used to fill the drawing
    context.fill()                                                  // Fills the current drawing (path)
  }

  update() {                            // Declaring update function
    this.draw()                         // Calling draw function using this. keyword
    this.x = this.x + this.velocity.x   // Updating values of this.x to equal this.x + this.velocity.x
    this.y = this.y + this.velocity.y   // Updating values of this.y to equal this.y + this.velocity.y
  }
}

const friction = 0.99 // Declaring friction as constant with value of 0.99

class Particles {                              // Declaring class Particles, JavaScript Classes are templates for JavaScript Objects.
  constructor(x, y, radius, color, velocity) { // Constructor Method used to initialize object properties with the four initial properties of x, y, radius, colour and velocity
    this.x = x                                 // Use of this keyword, this. refers to the object in this case x
    this.y = y                                 // Use of this keyword, this. refers to the object in this case y
    this.radius = radius                       // Use of this keyword, this. refers to the object in this case radius
    this.color = color                         // Use of this keyword, this. refers to the object in this case color
    this.velocity = velocity                   // Use of this keyword, this. refers to the object in this case velocity
    this.alpha = 1                             // Use of this keyword, this. refers to the object in this case alpha
  }
  draw() {                                                          // Declaring draw function
    context.save()                                                  // Saves the state of the current context
    context.globalAlpha = this.alpha                                // Sets or returns the current alpha or transparency value of the drawing
    context.beginPath()                                             // Begins a path, or resets the current path
    context.arc(this.x, this.y, this.radius, 0, Math.PI * 2, false) // Creates an arc/curve (used to create circles, or parts of circles) with parameters x, y, radius, 0 for the start angle, float of Math.PI * 2 & false for value of draw counter clockwise as I am drawing a circle.
    context.fillStyle = this.color                                  // Sets or returns the color, gradient, or pattern used to fill the drawing
    context.fill()                                                  // Fills the current drawing (path)
    context.restore()                                               // Returns previously saved path state and attributes
  }

  update() {     // Declaring update function
    this.draw() // Calling draw function using this keyword

    // Shrinking x & y velocity over time
    this.velocity.x *= friction
    this.velocity.y *= friction

    this.x = this.x + this.velocity.x // Updating values of this.x to equal this.x + this.velocity.x
    this.y = this.y + this.velocity.y // Updating values of this.y to equal this.y + this.velocity.y

    this.alpha -= 0.01 // Changes alpha value over time
  }
}

const placementX = canvas.width / 2  // placementX defined as a constant with value of canvas.width divided by two to get player to spawn in center
const placementY = canvas.height / 2 // placementY defined as a constant with value of canvas.height divided by two to get player to spawn in center

let player = new Player(placementX, placementY, 10, 'white') // Declares player variable inside brackets {} scope which then calls class Player to create new player objects with the parameters of placementX, placementY, 10 for size & white for colour
let projectiles = []                                         // Declares projectiles array inside brackets {} scope
let enemies = []                                             // Declares enemies array inside brackets {} scope
let particles = []                                           // Declares particles array inside brackets {} scope

function init() {                                          // Declaring function init to re-initialize/reset the variables and arrays
  player = new Player(placementX, placementY, 10, 'white') // Declares player variable inside brackets {} scope which then calls class Player with the parameters of placementX, placementY, 10 for size/radius & white for colour
  projectiles = []                                         // Declares projectiles array inside brackets {} scope
  enemies = []                                             // Declares enemies array inside brackets {} scope
  particles = []                                           // Declares particles array inside brackets {} scope
  score = 0                                                // Declares score as 0 to reset it when init function is called.
  ScoreElement.innerHTML = score                           // Assinging the value of score to the ScoreElement in the HTML
  MenuScore.innerHTML = score                              // Assinging the value of score to the MenuScore in the HTML
}

function spawnEnemy() {                         // Declaring function spawnEnemy
  setInterval(() => {                           // Calls a function or evaluates an expression at specified intervals (in milliseconds) and encases the rest of the code in an arrow function
    const radius = Math.random() * (30 - 4) + 4 // Declaring radius as constant with the value of random number * (30-4) + 4 to decide the size of enemy circles

    let x // Declares x inside brackets {} scope
    let y // Declares y inside brackets {} scope

    if (Math.random() < 0.5) {                                      // If condition to run if Math.random() is less than 0.5
      x = Math.random() < 0.5 ? 0 - radius : canvas.width + radius  // Assigning value of x to be Math.random() less than 0.5 but not 0 - radius with a : used as a delimiter between key/value pair in an object data type which is canvas.width + radius
      y = Math.random() * canvas.height                             // Assigning value of y to be Math.random() * canvas.height
    } else {                                                        // Else condition to run for if condition not met
      x = Math.random() * canvas.width                              // Assigning value of x to be Math.random * canvas.height
      y = Math.random() < 0.5 ? 0 - radius : canvas.height + radius // Assigning value of y to be Math.random() less than 0.5 but not 0 - radius with a : used as a delimiter between key/value pair in an object data type which is canvas.height + radius
    }
    // Templet literal to ensure random colours
    const color = `hsl(${Math.random() * 360}, 50%, 50%)`
    // Sets the angle of velocity of enemys
    const angle = Math.atan2(canvas.height / 2 - y, canvas.width / 2 - x) // Declares angle as a constant and assigns value of Math.atan2 which returns the arctangent of the quotient of its arguments, the arguements are the x and y of the canvas so the enemys attack the center where you the player are.
    const velocity = {
      x: Math.cos(angle),
      y: Math.sin(angle)
    }                                                      // Declares velocity as a constant, assigns the values of x and y to returns the cosine of x angle & returns the sine of y angle
    enemies.push(new Enemy(x, y, radius, color, velocity)) // Adds new elements to the end of an array, and returns the new length calls class Enemy with parameters x, y, radius, color, & velocity
    clearInterval(100)                                     // clearsInterval to stop mass spawning bug when you restart the game
  }, 1500)                                                 
}

let animeID   // Declares animeID inside brackets {} scope
let score = 0 // Declares animeID inside brackets {} scope

function animate() {                                  // Declaring function animate
  animeID = requestAnimationFrame(animate)            // Assigning value of animeID to request the browser to call a function to update an animation before the next repaint with the parameter of the animate function
  context.fillStyle = 'rgba(0,0,0,0.1)'               // Sets or returns the color, gradient, or pattern used to fill the drawing
  context.fillRect(0, 0, canvas.width, canvas.height) // Draws a "filled" rectangle with x = 0, y = 0, width = canvas.width, height = canvas.height
  player.draw()                                       // Calling draw function with player as the member

  // Making particles fade out
  particles.forEach((particle, index) => { // Calls a function or evaluates an expression at specified intervals (in milliseconds) with parameters of particles & index
    if (particle.alpha <= 0) {             // If condition for is particle.alpha less than or equal to 0
      particles.splice(index, 1)           //	Adds/Removes elements from an array
    } else {                               // Else for if condition not met
      particle.update()                    // Calling particle update function
    }
  });

  projectiles.forEach((projectile, index) => { // Calls a function for each array element, parameters of projectile & index
    projectile.update()                        // Calling projectile update function
    // Removing projectiles from edges of screen
    if (projectile.x + projectile.radius < 0
       || projectile.x - projectile.radius > canvas.width 
       || projectile.y + projectile.radius < 0 
       || projectile.y - projectile.radius > canvas.height) {
      setTimeout(() => {            // Calls a function or evaluates an expression after a specified number of milliseconds
        projectile.splice(index, 1) // Adds/Removes elements from an array
      }, 0)
    }
  })
  // Drawing enemy onto screen
  enemies.forEach((enemy, index) => { // Calls a function or evaluates an expression at specified intervals (in milliseconds) with parameters of enemy & index
    enemy.update()                    // Calling enemy update function

    // End the game
    const distance = Math.hypot(player.x - enemy.x, player.y - enemy.y) // Defining distance as constant with value of Math.hypot function returns the square root of the sum of squares of its arguments which is the player x & y - enemy x & y
    if (distance - enemy.radius - player.radius < 1) {                  // If condition for enemy to player collision detection
      cancelAnimationFrame(animeID)                                     // The cancelAnimationFrame() method cancels an animation frame request using parameter animeID previously scheduled through a call to requestAnimationFrame(animate)
      StartMenu.style.display = 'flex'                                  // Update HTML & CSS for menu
      MenuScore.innerHTML = score                                       // Updating HTML to output score
    }

    projectiles.forEach((projectile, projectileIndex) => {                        // Calls a function or evaluates an expression at specified intervals (in milliseconds) with parameters of projectile & projectileIndex
      const distance = Math.hypot(projectile.x - enemy.x, projectile.y - enemy.y) // Defining distance as constant with value of Math.hypot function returns the square root of the sum of squares of its arguments which is the projectile x & y - enemy x & y
      // When projectiles touch enemy
      if (distance - enemy.radius - projectile.radius < 1) {
        // Create particle explosion
        for (let i = 0; i < enemy.radius * 2; i++) {
          // Adds new elements to the end of an array, and returns the new length calls class Particles
          particles.push(new Particles(projectile.x, projectile.y, Math.random() * 2, enemy.color, {
            x: (Math.random() - 0.5) * (Math.random() * 5),
            y: (Math.random() - 0.5) * (Math.random() * 5)
          }))
        }

        // Make big enemys shrink
        if (enemy.radius - 10 > 10) {
          // Score increase
          score += 50
          ScoreElement.innerHTML = score // Updating HTML to output score for ScoreElement
          // Uses GSAP javascript library for smooth shrink animation
          gsap.to(enemy, {
            radius: enemy.radius - 10
          })
          setTimeout(() => {                       // Calls a function or evaluates an expression after a specified number of milliseconds
            projectiles.splice(projectileIndex, 1) // Adds/Removes elements from an array
          }, 0)
        } else {
          // Score increase for completely killing enemy
          score += 100
          ScoreElement.innerHTML = score           // Updating HTML to output score for ScoreElement
          setTimeout(() => {                       // Calls a function or evaluates an expression after a specified number of milliseconds
            enemies.splice(index, 1)               // Adds/Removes elements from an array
            projectiles.splice(projectileIndex, 1) // Adds/Removes elements from an array
          }, 0)
        }
      }
    });
  })
}
addEventListener('click', (event) => { //	Attaches an event handler to the document for when user clicks
  // Sets the angle of velocity of projectiles
  const angle = Math.atan2(event.clientY - canvas.height / 2, event.clientX - canvas.width / 2) // Declares angle as a constant and assigns value of Math.atan2 which returns the arctangent of the quotient of its arguments, the arguments are the x and y of the canvas so the projectiles shoot out from the player which is in the center.
  const velocity = {
    x: Math.cos(angle) * 5,
    y: Math.sin(angle) * 5
  }                                                                                           // Declares velocity as a constant, assigns the values of x and y to returns the cosine of x angle & returns the sine of y angle
  projectiles.push(new Projectile(canvas.width / 2, canvas.height / 2, 5, 'white', velocity)) // Adds new elements to the end of an array, and returns the new length calls class Projectile with parameters canvas.width / 2, canvas.height / 2 - (so palyer spawns from center of page where player is), 5 - (size/radius), white, & velocity
})

StartGame.addEventListener('click', () => { // Attaches an event handler to the document for when you click on StartGame button
  init()                                    // Calls function init
  animate()                                 // Calls function animate
  spawnEnemy()                              // Calls function spawnAnimate
  StartMenu.style.display = 'none'          // Makes the menu go away
})