// prompt is not working in node.js 

let a = prompt("what's your age ?");
a = Number.parseInt(a);
if(a<0)
{
    alert("your age is valid");
}else
{
    alert("your age is not valid");
}
