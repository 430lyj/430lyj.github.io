const API_KEY = config.API_KEY;

function onGeoOk(position){
    const lat = position.coords.latitude;
    const lng = position.coords.longitude;
    const url = `https://api.openweathermap.org/data/2.5/weather?lat=${lat}&lon=${lng}&appid=${API_KEY}&units=metric`;
    
    fetch(url)
    .then(response => response.json())
    .then((data) => {
        const weather = document.querySelector("#weather span:first-child");
        const city = document.querySelector("#weather span:last-child");
        city.innerText = data.name;
        weather.innerText = `${data.main.temp.toFixed(1)}°C, ${data.weather[0].main}`;
    });
}
function onGeoError(){
}

navigator.geolocation.getCurrentPosition(onGeoOk, onGeoError);