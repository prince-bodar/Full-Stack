const countnumber = document.querySelector('.counterNum span');
const increas = document.querySelector('.increas')
const decreas = document.querySelector('.decreas')
const reset = document.querySelector('.reset')

let counter = 0;
countnumber.innerText = counter

increas.addEventListener('click',() =>{
    counter++;
    countnumber.innerText = counter
})

decreas.addEventListener('click',() =>{
    counter--;
    countnumber.innerText = counter
})

reset.addEventListener('click',() =>{
    counter = 0;
    countnumber.innerText = counter
})