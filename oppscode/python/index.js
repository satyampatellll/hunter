
// let btn=document.getElementById("one")
let btn=document.getElementsByClassName("two")


// let btn= document.querySelector("button")
let body= document.querySelector("body")
// let isBool=true

 let h2= document.querySelector("h2")
// console.log(data)

// h2.innerText="hello"+" "+data

btn.addEventListener("click",function(){
    // body.style.backgroundColor="darkslategray"

    // if(isBool){
    //     body.style.backgroundColor="pink"
    //     isBool=false
    // }
    // else{
    //     body.style.backgroundColor="green"
    //     isBool=true
    // }
    let data= prompt("enter the name")
    console.log(data)

    let isBool=true

    h2.innerText="hello"+" "+data
}
)
