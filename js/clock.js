const clock = document.querySelector("#clock");

function clocking2(){
    const date = new Date();
    const hour = String(date.getHours()).padStart(2, "0");
    const minute = String(date.getMinutes()).padStart(2, "0");
    const second = String(date.getSeconds()).padStart(2, "0");
    clock.innerText = `${hour}:${minute}`;
}

function clocking1(){
    const date = new Date();

    clock.innerText = `${date.getHours()}:${date.getMinutes()}}`;
}
clocking2(); //처음 1초간 생기는 공백을 메우기 위해서 즉시 실행되도록 함.
setInterval(clocking2, 1000);