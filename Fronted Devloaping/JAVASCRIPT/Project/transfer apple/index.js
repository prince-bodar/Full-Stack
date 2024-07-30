const firstbasket = document.querySelector('.basket-1 span')
const secondbasket = document.querySelector('.basket-2 span')
const leftarrow = document.querySelector('.left')
const rightarrow = document.querySelector('.right')

const totalapples = 10;

let secondbasketapple = 0;
let firstbasketapple = totalapples - secondbasketapple;


firstbasket.innerText = firstbasketapple
secondbasket.innerText = secondbasketapple

rightarrow.addEventListener('click',() => {
    if(firstbasketapple > 0)
        {
            firstbasketapple--;
            firstbasket.innerText = firstbasketapple
            secondbasketapple++;
            secondbasket.innerText = secondbasketapple;
        }
})

leftarrow.addEventListener('click',() => {
    if(10 > firstbasketapple)
        {
            firstbasketapple++;
            firstbasket.innerText = firstbasketapple
            secondbasketapple--;
            secondbasket.innerText = secondbasketapple;
        }
})