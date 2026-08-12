const sounds = ["Ah-ha", "Back Of The Net", "Bang Out Of Order", "Dan", "Email Of The Evening", "Hello Partridge", "I ate Scotch Egg", "I'm confused", "Jurassic Park"];

sounds.forEach((sound) => {
  const btn = document.createElement("button");
  btn.classList.add("btn");

  btn.innerText = sound;

  btn.addEventListener("click", () => {
    stopSongs();

    document.getElementById(sound).play();
  });
  document.getElementById("buttons").appendChild(btn);
});

function stopSongs() {
  sounds.forEach((sound) => {
    const song = document.getElementById(sound);

    song.pause();
    song.currentTime = 0;
  });
}