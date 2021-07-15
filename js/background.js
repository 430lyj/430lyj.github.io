const images = ['img1.jpg', 'img2.jpg','img3.jpg'];
const randomCount = Math.floor(Math.random() * images.length);
const chosenImage = images[Math.floor(Math.random() * images.length)];
const dir = "img/"

const bgImage = document.createElement("img");
bgImage.src = `img/${chosenImage}`;
bgImage.classList.add("bg-Image");
document.body.appendChild(bgImage);